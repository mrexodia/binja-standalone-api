// Types
#include <string>

#include "binaryninjacore.h"
#include "core_ref.h"

struct BNType : BNRef
{
	virtual ~BNType() = default;
};

struct BNVoidType : BNType
{};

struct BNBoolType : BNType
{};

struct BNIntegerType : BNType
{
	size_t width;
	BNBoolWithConfidence sign;
	std::string altName;

	BNIntegerType(size_t width, BNBoolWithConfidence sign, const char* altName) : width(width), sign(sign), altName(std::move(altName)) {}
};

struct BNFloatType : BNType
{
	size_t width;
	std::string altName;

	BNFloatType(size_t width, std::string altName) : width(width), altName(std::move(altName)) {}
};

struct BNWideCharType : BNType
{
	size_t width;
	std::string altName;

	BNWideCharType(size_t width, std::string altName) : width(width), altName(std::move(altName)) {}
};

struct BNArrayType : BNType
{
	BNTypeWithConfidence type;
	uint64_t elem;

	BNArrayType(BNTypeWithConfidence type, uint64_t elem) : type(type), elem(elem) {}
};

BINARYNINJACOREAPI bool BNTypesEqual(BNType* a, BNType* b) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypesNotEqual(BNType* a, BNType* b) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNCreateVoidType(void) { return new BNVoidType(); }
BINARYNINJACOREAPI BNType* BNCreateBoolType(void) { return new BNBoolType(); }
BINARYNINJACOREAPI BNType* BNCreateIntegerType(size_t width, BNBoolWithConfidence* sign, const char* altName) { return new BNIntegerType(width, *sign, altName); }
BINARYNINJACOREAPI BNType* BNCreateFloatType(size_t width, const char* altName) { return new BNFloatType(width, altName); }
BINARYNINJACOREAPI BNType* BNCreateWideCharType(size_t width, const char* altName) { return new BNWideCharType(width, altName); }
BINARYNINJACOREAPI BNType* BNCreateStructureType(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNCreateEnumerationType(
	BNArchitecture* arch, BNEnumeration* e, size_t width, BNBoolWithConfidence* isSigned) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNCreateEnumerationTypeOfWidth(
	BNEnumeration* e, size_t width, BNBoolWithConfidence* isSigned) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNCreatePointerType(BNArchitecture* arch, const BNTypeWithConfidence* const type,
	BNBoolWithConfidence* cnst, BNBoolWithConfidence* vltl, BNReferenceType refType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNCreatePointerTypeOfWidth(size_t width, const BNTypeWithConfidence* const type,
	BNBoolWithConfidence* cnst, BNBoolWithConfidence* vltl, BNReferenceType refType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNCreateArrayType(const BNTypeWithConfidence* const type, uint64_t elem) { return new BNArrayType(*type, elem); }
BINARYNINJACOREAPI BNType* BNCreateFunctionType(BNTypeWithConfidence* returnValue,
	BNCallingConventionWithConfidence* callingConvention, BNFunctionParameter* params, size_t paramCount,
	BNBoolWithConfidence* varArg, BNBoolWithConfidence* canReturn, BNOffsetWithConfidence* stackAdjust,
	uint32_t* regStackAdjustRegs, BNOffsetWithConfidence* regStackAdjustValues, size_t regStackAdjustCount,
	BNRegisterSetWithConfidence* returnRegs, BNNameType ft, BNBoolWithConfidence* pure) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNNewTypeReference(BNType* type) { return BNRef::Add(type); }
BINARYNINJACOREAPI BNType* BNDuplicateType(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeAndName(BNType* type, BNQualifiedName* name, BNTokenEscapingType escaping) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeType(BNType* type) { BNRef::Release(type); }
BINARYNINJACOREAPI void BNFreeTypeList(BNType** types, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNTypeBuilder* BNCreateTypeBuilderFromType(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateVoidTypeBuilder(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateBoolTypeBuilder(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateIntegerTypeBuilder(
	size_t width, BNBoolWithConfidence* sign, const char* altName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateFloatTypeBuilder(size_t width, const char* altName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateWideCharTypeBuilder(size_t width, const char* altName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateStructureTypeBuilder(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateStructureTypeBuilderWithBuilder(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateEnumerationTypeBuilder(
	BNArchitecture* arch, BNEnumeration* e, size_t width, BNBoolWithConfidence* isSigned) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateEnumerationTypeBuilderWithBuilder(
	BNArchitecture* arch, BNEnumerationBuilder* e, size_t width, BNBoolWithConfidence* isSigned) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreatePointerTypeBuilder(BNArchitecture* arch,
	const BNTypeWithConfidence* const type, BNBoolWithConfidence* cnst, BNBoolWithConfidence* vltl,
	BNReferenceType refType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreatePointerTypeBuilderOfWidth(size_t width,
	const BNTypeWithConfidence* const type, BNBoolWithConfidence* cnst, BNBoolWithConfidence* vltl,
	BNReferenceType refType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateArrayTypeBuilder(const BNTypeWithConfidence* const type, uint64_t elem) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateFunctionTypeBuilder(BNTypeWithConfidence* returnValue,
	BNCallingConventionWithConfidence* callingConvention, BNFunctionParameter* params, size_t paramCount,
	BNBoolWithConfidence* varArg, BNBoolWithConfidence* canReturn, BNOffsetWithConfidence* stackAdjust,
	uint32_t* regStackAdjustRegs, BNOffsetWithConfidence* regStackAdjustValues, size_t regStackAdjustCount,
	BNRegisterSetWithConfidence* returnRegs, BNNameType ft, BNBoolWithConfidence* pure) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNFinalizeTypeBuilder(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNDuplicateTypeBuilder(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeBuilderTypeAndName(BNTypeBuilder* type, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeBuilder(BNTypeBuilder* type) { __debugbreak(); }

BINARYNINJACOREAPI BNQualifiedName BNTypeGetTypeName(BNType* nt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeClass BNGetTypeClass(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetTypeWidth(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetTypeAlignment(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNIntegerDisplayType BNGetIntegerTypeDisplayType(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetIntegerTypeDisplayType(BNTypeBuilder* type, BNIntegerDisplayType displayType) { __debugbreak(); }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsTypeSigned(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsTypeConst(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsTypeVolatile(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsTypeFloatingPoint(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeWithConfidence BNGetChildType(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConventionWithConfidence BNGetTypeCallingConvention(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunctionParameter* BNGetTypeParameters(BNType* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeParameterList(BNFunctionParameter* types, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNBoolWithConfidence BNTypeHasVariableArguments(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNFunctionTypeCanReturn(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsTypePure(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructure* BNGetTypeStructure(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNEnumeration* BNGetTypeEnumeration(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNamedTypeReference* BNGetTypeNamedTypeReference(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetTypeElementCount(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetTypeOffset(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNOffsetWithConfidence BNGetTypeStackAdjustment(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName BNTypeGetStructureName(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNamedTypeReference* BNGetRegisteredTypeName(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNReferenceType BNTypeGetReferenceType(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPointerBaseType BNTypeGetPointerBaseType(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNTypeGetPointerBaseOffset(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeAlternateName(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNTypeGetSystemCallNumber(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeIsSystemCall(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPointerSuffix* BNGetTypePointerSuffix(BNType* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypePointerSuffixString(BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetTypePointerSuffixTokens(
	BNType* type, uint8_t baseConfidence, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePointerSuffixList(BNPointerSuffix* suffix, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetTypeString(BNType* type, BNPlatform* platform, BNTokenEscapingType escaping) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeStringBeforeName(BNType* type, BNPlatform* platform, BNTokenEscapingType escaping) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeStringAfterName(BNType* type, BNPlatform* platform, BNTokenEscapingType escaping) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetTypeTokens(
	BNType* type, BNPlatform* platform, uint8_t baseConfidence, BNTokenEscapingType escaping, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetTypeTokensBeforeName(
	BNType* type, BNPlatform* platform, uint8_t baseConfidence, BNTokenEscapingType escaping, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetTypeTokensAfterName(
	BNType* type, BNPlatform* platform, uint8_t baseConfidence, BNTokenEscapingType escaping, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNType* BNTypeWithReplacedStructure(BNType* type, BNStructure* from, BNStructure* to) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNTypeWithReplacedEnumeration(BNType* type, BNEnumeration* from, BNEnumeration* to) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNTypeWithReplacedNamedTypeReference(
	BNType* type, BNNamedTypeReference* from, BNNamedTypeReference* to) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNAddTypeMemberTokens(BNType* type, BNBinaryView* data, BNInstructionTextToken** tokens,
	size_t* tokenCount, int64_t offset, char*** nameList, size_t* nameCount, size_t size, bool indirect) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeDefinitionLine* BNGetTypeLines(BNType* type, BNTypeContainer* types, const char* name,
	int paddingCols, bool collapsed, BNTokenEscapingType escaping, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeTypeDefinitionLineList(BNTypeDefinitionLine* list, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNQualifiedName BNTypeBuilderGetTypeName(BNTypeBuilder* nt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNTypeBuilderSetTypeName(BNTypeBuilder* type, BNQualifiedName* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNTypeBuilderSetAlternateName(BNTypeBuilder* type, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI BNTypeClass BNGetTypeBuilderClass(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNTypeBuilderSetSystemCallNumber(BNTypeBuilder* type, bool v, uint32_t n) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNGetTypeBuilderWidth(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetTypeBuilderAlignment(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsTypeBuilderSigned(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsTypeBuilderConst(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsTypeBuilderVolatile(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsTypeBuilderFloatingPoint(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeWithConfidence BNGetTypeBuilderChildType(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConventionWithConfidence BNGetTypeBuilderCallingConvention(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunctionParameter* BNGetTypeBuilderParameters(BNTypeBuilder* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNTypeBuilderHasVariableArguments(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNFunctionTypeBuilderCanReturn(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsTypeBuilderPure(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructure* BNGetTypeBuilderStructure(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNEnumeration* BNGetTypeBuilderEnumeration(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNamedTypeReference* BNGetTypeBuilderNamedTypeReference(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetTypeBuilderNamedTypeReference(BNTypeBuilder* type, BNNamedTypeReference* ntr) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNGetTypeBuilderElementCount(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetTypeBuilderOffset(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetTypeBuilderOffset(BNTypeBuilder* type, uint64_t offset) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetTypeBuilderPointerBase(
	BNTypeBuilder* type, BNPointerBaseType baseType, int64_t baseOffset) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetFunctionTypeBuilderCanReturn(BNTypeBuilder* type, BNBoolWithConfidence* canReturn) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetTypeBuilderPure(BNTypeBuilder* type, BNBoolWithConfidence* pure) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetFunctionTypeBuilderParameters(
	BNTypeBuilder* type, BNFunctionParameter* params, size_t paramCount) { __debugbreak(); }
BINARYNINJACOREAPI void BNTypeBuilderSetWidth(BNTypeBuilder* type, size_t width) { __debugbreak(); }
BINARYNINJACOREAPI void BNTypeBuilderSetAlignment(BNTypeBuilder* type, size_t alignment) { __debugbreak(); }
BINARYNINJACOREAPI void BNTypeBuilderSetConst(BNTypeBuilder* type, BNBoolWithConfidence* cnst) { __debugbreak(); }
BINARYNINJACOREAPI void BNTypeBuilderSetVolatile(BNTypeBuilder* type, BNBoolWithConfidence* vltl) { __debugbreak(); }
BINARYNINJACOREAPI void BNTypeBuilderSetSigned(BNTypeBuilder* type, BNBoolWithConfidence* sign) { __debugbreak(); }
BINARYNINJACOREAPI void BNTypeBuilderSetChildType(BNTypeBuilder* type, BNTypeWithConfidence* child) { __debugbreak(); }
BINARYNINJACOREAPI BNOffsetWithConfidence BNGetTypeBuilderStackAdjustment(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName BNTypeBuilderGetStructureName(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNReferenceType BNTypeBuilderGetReferenceType(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPointerBaseType BNTypeBuilderGetPointerBaseType(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNTypeBuilderGetPointerBaseOffset(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeBuilderAlternateName(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNTypeBuilderIsSystemCall(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNTypeBuilderGetSystemCallNumber(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNTypeBuilderSetStackAdjustment(BNTypeBuilder* type, BNOffsetWithConfidence* adjust) { __debugbreak(); }
BINARYNINJACOREAPI BNPointerSuffix* BNGetTypeBuilderPointerSuffix(BNTypeBuilder* type, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeBuilderPointerSuffixString(BNTypeBuilder* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetTypeBuilderPointerSuffixTokens(
	BNTypeBuilder* type, uint8_t baseConfidence, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddTypeBuilderPointerSuffix(BNTypeBuilder* type, BNPointerSuffix ps) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetTypeBuilderPointerSuffix(BNTypeBuilder* type, BNPointerSuffix* suffix, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetTypeBuilderString(BNTypeBuilder* type, BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeBuilderStringBeforeName(BNTypeBuilder* type, BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeBuilderStringAfterName(BNTypeBuilder* type, BNPlatform* platform) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetTypeBuilderTokens(
	BNTypeBuilder* type, BNPlatform* platform, uint8_t baseConfidence, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetTypeBuilderTokensBeforeName(
	BNTypeBuilder* type, BNPlatform* platform, uint8_t baseConfidence, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetTypeBuilderTokensAfterName(
	BNTypeBuilder* type, BNPlatform* platform, uint8_t baseConfidence, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNType* BNCreateNamedTypeReference(
	BNNamedTypeReference* nt, size_t width, size_t align, BNBoolWithConfidence* cnst, BNBoolWithConfidence* vltl) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNCreateNamedTypeReferenceFromTypeAndId(const char* id, BNQualifiedName* name, BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNType* BNCreateNamedTypeReferenceFromType(BNBinaryView* view, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateNamedTypeReferenceBuilder(
	BNNamedTypeReference* nt, size_t width, size_t align, BNBoolWithConfidence* cnst, BNBoolWithConfidence* vltl) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateNamedTypeReferenceBuilderWithBuilder(BNNamedTypeReferenceBuilder* nt,
	size_t width, size_t align, BNBoolWithConfidence* cnst, BNBoolWithConfidence* vltl) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateNamedTypeReferenceBuilderFromTypeAndId(
	const char* id, BNQualifiedName* name, BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeBuilder* BNCreateNamedTypeReferenceBuilderFromType(BNBinaryView* view, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNamedTypeReference* BNCreateNamedType(
	BNNamedTypeReferenceClass cls, const char* id, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNamedTypeReferenceClass BNGetTypeReferenceClass(BNNamedTypeReference* nt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeReferenceId(BNNamedTypeReference* nt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName BNGetTypeReferenceName(BNNamedTypeReference* nt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeQualifiedName(BNQualifiedName* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeQualifiedNameArray(BNQualifiedName* names, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeNamedTypeReference(BNNamedTypeReference* nt) { __debugbreak(); }
BINARYNINJACOREAPI BNNamedTypeReference* BNNewNamedTypeReference(BNNamedTypeReference* nt) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNNamedTypeReferenceBuilder* BNCreateNamedTypeBuilder(
	BNNamedTypeReferenceClass cls, const char* id, BNQualifiedName* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeNamedTypeReferenceBuilder(BNNamedTypeReferenceBuilder* s) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetNamedTypeReferenceBuilderTypeClass(
	BNNamedTypeReferenceBuilder* s, BNNamedTypeReferenceClass type) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetNamedTypeReferenceBuilderTypeId(BNNamedTypeReferenceBuilder* s, const char* id) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetNamedTypeReferenceBuilderName(BNNamedTypeReferenceBuilder* s, BNQualifiedName* name) { __debugbreak(); }
BINARYNINJACOREAPI BNNamedTypeReference* BNFinalizeNamedTypeReferenceBuilder(BNNamedTypeReferenceBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNamedTypeReferenceClass BNGetTypeReferenceBuilderClass(BNNamedTypeReferenceBuilder* nt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetTypeReferenceBuilderId(BNNamedTypeReferenceBuilder* nt) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNQualifiedName BNGetTypeReferenceBuilderName(BNNamedTypeReferenceBuilder* nt) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNStructureBuilder* BNCreateStructureBuilder(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructureBuilder* BNCreateStructureBuilderWithOptions(BNStructureVariant type, bool packed) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructureBuilder* BNCreateStructureBuilderFromStructure(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructureBuilder* BNDuplicateStructureBuilder(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructure* BNFinalizeStructureBuilder(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructure* BNNewStructureReference(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeStructure(BNStructure* s) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeStructureBuilder(BNStructureBuilder* s) { __debugbreak(); }

BINARYNINJACOREAPI BNStructureMember* BNGetStructureMemberByName(BNStructure* s, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructureMember* BNGetStructureMemberAtOffset(BNStructure* s, int64_t offset, size_t* idx) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeStructureMember(BNStructureMember* s) { __debugbreak(); }
BINARYNINJACOREAPI BNStructureMember* BNGetStructureMembers(BNStructure* s, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeStructureMemberList(BNStructureMember* members, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNInheritedStructureMember* BNGetStructureMembersIncludingInherited(
	BNStructure* s, BNTypeContainer* types, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeInheritedStructureMemberList(BNInheritedStructureMember* members, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNInheritedStructureMember* BNGetMemberIncludingInheritedAtOffset(
	BNStructure* s, BNBinaryView* view, int64_t offset) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeInheritedStructureMember(BNInheritedStructureMember* members) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t BNGetStructureWidth(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI int64_t BNGetStructurePointerOffset(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetStructureAlignment(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsStructurePacked(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsStructureUnion(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNStructurePropagatesDataVariableReferences(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructureVariant BNGetStructureType(BNStructure* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBaseStructure* BNGetBaseStructuresForStructure(BNStructure* s, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBaseStructureList(BNBaseStructure* bases, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNStructure* BNStructureWithReplacedStructure(BNStructure* s, BNStructure* from, BNStructure* to) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructure* BNStructureWithReplacedEnumeration(
	BNStructure* s, BNEnumeration* from, BNEnumeration* to) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructure* BNStructureWithReplacedNamedTypeReference(
	BNStructure* s, BNNamedTypeReference* from, BNNamedTypeReference* to) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNStructureMember* BNGetStructureBuilderMemberByName(BNStructureBuilder* s, const char* name) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructureMember* BNGetStructureBuilderMemberAtOffset(
	BNStructureBuilder* s, int64_t offset, size_t* idx) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStructureMember* BNGetStructureBuilderMembers(BNStructureBuilder* s, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetStructureBuilderWidth(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetStructureBuilderWidth(BNStructureBuilder* s, uint64_t width) { __debugbreak(); }
BINARYNINJACOREAPI int64_t BNGetStructureBuilderPointerOffset(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetStructureBuilderPointerOffset(BNStructureBuilder* s, int64_t offset) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNGetStructureBuilderAlignment(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetStructureBuilderAlignment(BNStructureBuilder* s, size_t align) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsStructureBuilderPacked(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetStructureBuilderPacked(BNStructureBuilder* s, bool packed) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsStructureBuilderUnion(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetStructureBuilderType(BNStructureBuilder* s, BNStructureVariant type) { __debugbreak(); }
BINARYNINJACOREAPI bool BNStructureBuilderPropagatesDataVariableReferences(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetStructureBuilderPropagatesDataVariableReferences(BNStructureBuilder* s, bool value) { __debugbreak(); }
BINARYNINJACOREAPI BNStructureVariant BNGetStructureBuilderType(BNStructureBuilder* s) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBaseStructure* BNGetBaseStructuresForStructureBuilder(BNStructureBuilder* s, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetBaseStructuresForStructureBuilder(
	BNStructureBuilder* s, BNBaseStructure* bases, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI void BNAddStructureBuilderMember(BNStructureBuilder* s, const BNTypeWithConfidence* const type,
	const char* name, BNMemberAccess access, BNMemberScope scope) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddStructureBuilderMemberAtOffset(BNStructureBuilder* s,
	const BNTypeWithConfidence* const type, const char* name, uint64_t offset, bool overwriteExisting,
	BNMemberAccess access, BNMemberScope scope) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveStructureBuilderMember(BNStructureBuilder* s, size_t idx) { __debugbreak(); }
BINARYNINJACOREAPI void BNReplaceStructureBuilderMember(BNStructureBuilder* s, size_t idx,
	const BNTypeWithConfidence* const type, const char* name, bool overwriteExisting) { __debugbreak(); }

BINARYNINJACOREAPI BNEnumerationBuilder* BNCreateEnumerationBuilder(void) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNEnumerationBuilder* BNCreateEnumerationBuilderFromEnumeration(BNEnumeration* e) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNEnumerationBuilder* BNDuplicateEnumerationBuilder(BNEnumerationBuilder* e) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNEnumeration* BNFinalizeEnumerationBuilder(BNEnumerationBuilder* e) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNEnumeration* BNNewEnumerationReference(BNEnumeration* e) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeEnumeration(BNEnumeration* e) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeEnumerationBuilder(BNEnumerationBuilder* e) { __debugbreak(); }

BINARYNINJACOREAPI BNEnumerationMember* BNGetEnumerationMembers(BNEnumeration* e, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetEnumerationTokensForValue(
	BNEnumeration* e, uint64_t value, uint64_t width, size_t* count, BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeEnumerationMemberList(BNEnumerationMember* members, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNEnumerationMember* BNGetEnumerationBuilderMembers(BNEnumerationBuilder* e, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNAddEnumerationBuilderMember(BNEnumerationBuilder* e, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddEnumerationBuilderMemberWithValue(
	BNEnumerationBuilder* e, const char* name, uint64_t value) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveEnumerationBuilderMember(BNEnumerationBuilder* e, size_t idx) { __debugbreak(); }
BINARYNINJACOREAPI void BNReplaceEnumerationBuilderMember(
	BNEnumerationBuilder* e, size_t idx, const char* name, uint64_t value) { __debugbreak(); }

BINARYNINJACOREAPI BNStructure* BNCreateStructureFromOffsetAccess(
	BNBinaryView* view, BNQualifiedName* name, bool* newMember) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeWithConfidence BNCreateStructureMemberFromAccess(
	BNBinaryView* view, BNQualifiedName* name, uint64_t offset) { __debugbreak(); return {}; }