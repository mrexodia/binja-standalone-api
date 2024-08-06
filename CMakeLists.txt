cmake_minimum_required(VERSION 3.21)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(binja-standalone-api)

option(STANDALONE_BUILD_EXAMPLES "Build the examples" ${PROJECT_IS_TOP_LEVEL})
option(STANDALONE_ARCH_X86 "Build the x86 architecture" ON)
option(STANDALONE_ARCH_ARM64 "Build the ARM64 architecture" OFF)
option(STANDALONE_ARCH_ARMV7 "Build the ARMv7 architecture" OFF)
option(STANDALONE_ARCH_MIPS "Build the MIPS architecture" OFF)
option(STANDALONE_ARCH_POWERPC "Build the PowerPC architecture" OFF)
option(STANDALONE_ARCH_RISCV "Build the RISC-V architecture" OFF)

if(NOT EXISTS "${CMAKE_CURRENT_LIST_DIR}/binaryninja-api" OR NOT EXISTS "${CMAKE_CURRENT_LIST_DIR}/binaryninja-api/vendor/fmt")
	if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/.git")
		execute_process(COMMAND git submodule update --init --recursive
			WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
			COMMAND_ECHO STDOUT
			COMMAND_ERROR_IS_FATAL ANY
		)
	else()
		message(FATAL_ERROR "binaryninja-api submodule is not initialized. Please run `git submodule update --init --recursive`")
	endif()
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
target_include_directories(binaryninjacore
	PRIVATE ${BINARYNINJA_API_INCLUDE_DIRS}
)
get_target_property(BINARYNINJA_API_LIBRARIES binaryninjaapi INTERFACE_LINK_LIBRARIES)
list(REMOVE_ITEM BINARYNINJA_API_LIBRARIES binaryninjacore)
target_link_libraries(binaryninjacore
	PRIVATE ${BINARYNINJA_API_LIBRARIES}
)

# Override functions to make the architectures compatible
function(plugin_rpath tgt)
endfunction()

add_library(arch_all STATIC)
set_target_properties(arch_all PROPERTIES ARCH_LIST "")

function(add_library tgt linkage)
	if(tgt MATCHES "^arch_(.+)$")
		message(STATUS "[Hooked] Architecture ${CMAKE_MATCH_1}")
		target_link_libraries(arch_all PRIVATE ${tgt})
		get_target_property(arch_list arch_all ARCH_LIST)
		set_property(TARGET arch_all PROPERTY ARCH_LIST ${arch_list} ${tgt})
		_add_library(${tgt} STATIC ${ARGN})
		target_compile_definitions(${tgt} PRIVATE
			CorePluginInit=CorePluginInit_${tgt}
			CorePluginABIVersion=CorePluginABIVersion_${tgt}
			CorePluginDependencies=CorePluginDependencies_${tgt}
			get_condition=get_condition_${tgt}
			get_operation=get_operation_${tgt}
			get_shift=get_shift_${tgt}
			get_register=get_register_${tgt}
			bswap32=bswap32_${tgt}
		)
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
if(STANDALONE_ARCH_X86)
	add_subdirectory(binaryninja-api/arch/x86)
endif()
if(STANDALONE_ARCH_ARM64)
	add_subdirectory(binaryninja-api/arch/arm64)
endif()
if(STANDALONE_ARCH_ARMV7)
	add_subdirectory(binaryninja-api/arch/armv7)
endif()
if(STANDALONE_ARCH_MIPS)
	add_subdirectory(binaryninja-api/arch/mips)
endif()
if(STANDALONE_ARCH_POWERPC)
	add_subdirectory(binaryninja-api/arch/powerpc)
endif()
if(STANDALONE_ARCH_RISCV)
	# TODO: this is implemented in rust, so we need to compile it as a dynamic library
	add_subdirectory(binaryninja-api/arch/riscv)
endif()
set(CMAKE_FOLDER "${CMAKE_FOLDER_OLD}")

# Generate architecture initializer)
get_target_property(arch_list arch_all ARCH_LIST)
if(NOT arch_list)
	message(FATAL_ERROR "No architectures were selected")
endif()
set(ARCH_PREFIX "#include <binaryninjacore.h>\n")
set(ARCH_IMPL "extern \"C\" BINARYNINJAPLUGIN bool CorePluginInit_arch()\n{\n")
foreach(arch ${arch_list})
	set(ARCH_PREFIX "${ARCH_PREFIX}extern \"C\" BINARYNINJAPLUGIN bool CorePluginInit_${arch}()\;\n")
	set(ARCH_IMPL "${ARCH_IMPL}\tif(!CorePluginInit_${arch}()) return false\;\n")
endforeach()
set(ARCH_IMPL "${ARCH_IMPL}\treturn true\;\n}\n")
file(WRITE "${CMAKE_BINARY_DIR}/arch_init.cpp" ${ARCH_PREFIX}${ARCH_IMPL})

target_sources(arch_all PRIVATE "${CMAKE_BINARY_DIR}/arch_init.cpp")
target_link_libraries(binaryninjacore PRIVATE arch_all)

# Add examples
if(STANDALONE_BUILD_EXAMPLES)
	add_executable(standalone_test examples/standalone_test.cpp)
	target_link_libraries(standalone_test PRIVATE binaryninjaapi)

	add_executable(llil_parser examples/llil_parser.cpp)
	target_link_libraries(llil_parser PRIVATE binaryninjaapi)
endif()
