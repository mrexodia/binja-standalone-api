#include "core_impl.h"

// Platforms
BINARYNINJACOREAPI BNPlatform* BNCreatePlatform(BNArchitecture* arch, const char* name)
{
	return new BNPlatform(arch, name);
}
BINARYNINJACOREAPI BNPlatform* BNCreatePlatformWithTypes(
	BNArchitecture* arch, const char* name, const char* typeFile, const char** includeDirs, size_t includeDirCount) {
	__debugbreak(); return {};
}
BINARYNINJACOREAPI BNPlatform* BNCreateCustomPlatform(BNArchitecture* arch, const char* name, BNCustomPlatform* impl) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform* BNCreateCustomPlatformWithTypes(BNArchitecture* arch, const char* name,
	BNCustomPlatform* impl, const char* typeFile, const char** includeDirs, size_t includeDirCount) {
	__debugbreak(); return {};
}
BINARYNINJACOREAPI void BNRegisterPlatform(const char* os, BNPlatform* platform) { __debugbreak(); }
BINARYNINJACOREAPI BNPlatform* BNNewPlatformReference(BNPlatform* platform)
{
	return BNRef::Add(platform);
}
BINARYNINJACOREAPI void BNFreePlatform(BNPlatform* platform)
{
	BNRef::Release(platform);
}

BINARYNINJACOREAPI char* BNGetPlatformName(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNGetPlatformArchitecture(BNPlatform* platform) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNPlatform* BNGetPlatformByName(const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform** BNGetPlatformList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform** BNGetPlatformListByArchitecture(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform** BNGetPlatformListByOS(const char* os, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform** BNGetPlatformListByOSAndArchitecture(
	const char* os, BNArchitecture* arch, size_t* count) {
	__debugbreak(); return {};
}
BINARYNINJACOREAPI void BNFreePlatformList(BNPlatform** platform, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char** BNGetPlatformOSList(size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePlatformOSList(char** list, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformDefaultCallingConvention(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformCdeclCallingConvention(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformStdcallCallingConvention(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformFastcallCallingConvention(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention** BNGetPlatformCallingConventions(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConvention* BNGetPlatformSystemCallConvention(BNPlatform* platform) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNRegisterPlatformCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPlatformDefaultCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPlatformCdeclCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPlatformStdcallCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNRegisterPlatformFastcallCallingConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetPlatformSystemCallConvention(BNPlatform* platform, BNCallingConvention* cc) { __debugbreak(); }

BINARYNINJACOREAPI uint32_t* BNGetPlatformGlobalRegisters(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetPlatformGlobalRegisterType(BNPlatform* platform, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNPlatformAdjustTypeParserInput(BNPlatform* platform, BNTypeParser* parser,
	const char* const* argumentsIn, size_t argumentsLenIn, const char* const* sourceFileNamesIn,
	const char* const* sourceFileValuesIn, size_t sourceFilesLenIn, char*** argumentsOut, size_t* argumentsLenOut,
	char*** sourceFileNamesOut, char*** sourceFileValuesOut, size_t* sourceFilesLenOut) {
	__debugbreak();
}

BINARYNINJACOREAPI BNPlatform* BNGetArchitectureStandalonePlatform(BNArchitecture* arch) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNPlatform* BNGetRelatedPlatform(BNPlatform* platform, BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddRelatedPlatform(BNPlatform* platform, BNArchitecture* arch, BNPlatform* related) { __debugbreak(); }
BINARYNINJACOREAPI BNPlatform** BNGetRelatedPlatforms(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPlatform* BNGetAssociatedPlatformByAddress(BNPlatform* platform, uint64_t* addr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeContainer* BNGetPlatformTypeContainer(BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetPlatformTypes(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetPlatformVariables(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedNameAndType* BNGetPlatformFunctions(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNSystemCallInfo* BNGetPlatformSystemCalls(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeSystemCallList(BNSystemCallInfo* syscalls, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNType* BNGetPlatformTypeByName(BNPlatform* platform, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetPlatformVariableByName(BNPlatform* platform, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetPlatformFunctionByName(BNPlatform* platform, BNQualifiedName* name, bool exactMatch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetPlatformSystemCallName(BNPlatform* platform, uint32_t number) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNGetPlatformSystemCallType(BNPlatform* platform, uint32_t number) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNTypeLibrary** BNGetPlatformTypeLibraries(BNPlatform* platform, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeLibrary** BNGetPlatformTypeLibrariesByName(
	BNPlatform* platform, const char* depName, size_t* count) {
	__debugbreak(); return {};
}