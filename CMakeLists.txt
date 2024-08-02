cmake_minimum_required(VERSION 3.15)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(binja-standalone-api)

option(STANDALONE_BUILD_EXAMPLES "Build the examples" ON)


if(NOT EXISTS "binaryninja-api" OR NOT EXISTS "binaryninja-api/vendor/fmt")
message(FATAL_ERROR "binaryninja-api submodule is not initialized. Please run `git submodule update --init --recursive`")
endif()

# Include the unmodified binaryninja-api
set(HEADLESS ON)
set(BN_INTERNAL_BUILD ON)

set(CMAKE_FOLDER_OLD "${CMAKE_FOLDER}")
if(CMAKE_FOLDER)
set(CMAKE_FOLDER "${CMAKE_FOLDER}/binaryninja-api")
else()
set(CMAKE_FOLDER "binaryninja-api")
endif()
add_subdirectory(binaryninja-api)
set(CMAKE_FOLDER "${CMAKE_FOLDER_OLD}")

# Create the standalone binaryninjacore target
add_library(binaryninjacore STATIC)
file(GLOB CORE_SOURCES CONFIGURE_DEPENDS "src/*.cpp" "src/*.h")
target_sources(binaryninjacore PRIVATE
    ${CORE_SOURCES}
)
target_compile_features(binaryninjacore PUBLIC cxx_std_17)

get_target_property(BINARYNINJA_API_INCLUDE_DIRS binaryninjaapi INTERFACE_INCLUDE_DIRECTORIES)
get_target_property(BINARYNINJA_API_LIBRARIES binaryninjaapi INTERFACE_LINK_LIBRARIES)
get_target_property(BINARYNINJA_API_LIBRARY_DIRS binaryninjaapi INTERFACE_LINK_DIRECTORIES)
get_target_property(BINARYNINJA_API_DEFINITIONS binaryninjaapi INTERFACE_COMPILE_DEFINITIONS)

list(REMOVE_ITEM BINARYNINJA_API_LIBRARIES binaryninjacore)

target_include_directories(binaryninjacore
    PRIVATE ${BINARYNINJA_API_INCLUDE_DIRS}
)
target_link_libraries(binaryninjacore
    PRIVATE ${BINARYNINJA_API_LIBRARIES}
)
target_link_directories(binaryninjacore
    PRIVATE ${BINARYNINJA_API_LIBRARY_DIRS}
)
target_compile_definitions(binaryninjacore
    PRIVATE ${BINARYNINJA_API_DEFINITIONS}
)

# Override functions to make the architectures compatible
function(plugin_rpath tgt)
endfunction()

set(arch_targets "")
add_library(arch_all INTERFACE)

function(add_library tgt linkage)
    if(tgt MATCHES "^arch_(.+)$")
        message(STATUS "[Hooked] Architecture ${CMAKE_MATCH_1}")
        list(APPEND arch_targets ${tgt})
        target_link_libraries(arch_all INTERFACE ${tgt})
        # TODO: support architectures as dynamic libraries
        _add_library(${tgt} STATIC ${ARGN})
        target_compile_definitions(${tgt} PRIVATE CorePluginInit=CorePluginInit_${tgt})
    else()
        _add_library(${ARGV})
    endif()
endfunction()

# Add the architectures
set(BN_CORE_PLUGIN_DIR ${CMAKE_BINARY_DIR}/core_plugins)
set(CMAKE_FOLDER_OLD "${CMAKE_FOLDER}")
if(CMAKE_FOLDER)
    set(CMAKE_FOLDER "${CMAKE_FOLDER}/binaryninja-api/arch")
else()
    set(CMAKE_FOLDER "binaryninja-api/arch")
endif()
add_subdirectory(binaryninja-api/arch/x86)
set(CMAKE_FOLDER "${CMAKE_FOLDER_OLD}")

# Add examples
if(STANDALONE_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()
