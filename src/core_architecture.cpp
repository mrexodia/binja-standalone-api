// Architectures
#include "core_impl.h"

std::map<std::string, BNArchitecture*> architectures;

BINARYNINJACOREAPI BNArchitecture* BNGetArchitectureByName(const char* name)
{
	auto it = architectures.find(name);
	if (it == architectures.end())
		return nullptr;
	return it->second;
}
BINARYNINJACOREAPI BNArchitecture** BNGetArchitectureList(size_t* count)
{
	std::vector<BNArchitecture*> archs;
	for (auto& pair : architectures)
		archs.push_back(pair.second);
	*count = archs.size();
	auto result = new BNArchitecture*[archs.size()];
	memcpy(result, archs.data(), archs.size() * sizeof(BNArchitecture*));
	return result;
}
BINARYNINJACOREAPI void BNFreeArchitectureList(BNArchitecture** archs)
{
	delete[] archs;
}
BINARYNINJACOREAPI BNArchitecture* BNRegisterArchitecture(const char* name, BNCustomArchitecture* arch)
{
	auto it = architectures.find(name);
	if (it == architectures.end())
	{
		it = architectures.emplace(name, new BNArchitecture(*arch)).first;
	}
	return it->second;
}
BINARYNINJACOREAPI BNArchitecture* BNRegisterArchitectureExtension(
	const char* name, BNArchitecture* base, BNCustomArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddArchitectureRedirection(BNArchitecture* arch, BNArchitecture* from, BNArchitecture* to) { __debugbreak(); }
BINARYNINJACOREAPI BNArchitecture* BNRegisterArchitectureHook(BNArchitecture* base, BNCustomArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFinalizeArchitectureHook(BNArchitecture* base) { __debugbreak(); }
BINARYNINJACOREAPI BNArchitecture* BNGetNativeTypeParserArchitecture(void) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetArchitectureName(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNEndianness BNGetArchitectureEndianness(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetArchitectureAddressSize(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetArchitectureDefaultIntegerSize(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetArchitectureInstructionAlignment(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetArchitectureMaxInstructionLength(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetArchitectureOpcodeDisplayLength(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNGetAssociatedArchitectureByAddress(BNArchitecture* arch, uint64_t* addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetInstructionInfo(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t maxLen, BNInstructionInfo* result)
{
	return arch->callbacks.getInstructionInfo(arch->callbacks.context, data, addr, maxLen, result);
}
thread_local BNArchitecture* g_activeArch;
BINARYNINJACOREAPI bool BNGetInstructionText(BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t* len,
	BNInstructionTextToken** result, size_t* count)
{
	g_activeArch = arch;
	return arch->callbacks.getInstructionText(arch->callbacks.context, data, addr, len, result, count);
}
BINARYNINJACOREAPI bool BNGetInstructionLowLevelIL(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t* len, BNLowLevelILFunction* il)
{
	// TODO: this is a super hack
	il->mCurrentAddress = addr;
	return arch->callbacks.getInstructionLowLevelIL(arch->callbacks.context, data, addr, len, il);
}
BINARYNINJACOREAPI void BNFreeInstructionText(BNInstructionTextToken* tokens, size_t count)
{
	// TODO: this active arch thing is ugly as fuck
	g_activeArch->callbacks.freeInstructionText(tokens, count);
}
BINARYNINJACOREAPI void BNFreeInstructionTextLines(BNInstructionTextLine* lines, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI char* BNGetArchitectureRegisterName(BNArchitecture* arch, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetArchitectureFlagName(BNArchitecture* arch, uint32_t flag) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetArchitectureFlagWriteTypeName(BNArchitecture* arch, uint32_t flags) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetArchitectureSemanticFlagClassName(BNArchitecture* arch, uint32_t semClass) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetArchitectureSemanticFlagGroupName(BNArchitecture* arch, uint32_t semGroup) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetFullWidthArchitectureRegisters(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureRegisters(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureFlags(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureFlagWriteTypes(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureSemanticFlagClasses(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureSemanticFlagGroups(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlagRole BNGetArchitectureFlagRole(BNArchitecture* arch, uint32_t flag, uint32_t semClass) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetArchitectureFlagsRequiredForFlagCondition(
	BNArchitecture* arch, BNLowLevelILFlagCondition cond, uint32_t semClass, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetArchitectureFlagsRequiredForSemanticFlagGroup(
	BNArchitecture* arch, uint32_t semGroup, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFlagConditionForSemanticClass* BNGetArchitectureFlagConditionsForSemanticFlagGroup(
	BNArchitecture* arch, uint32_t semGroup, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFlagConditionsForSemanticFlagGroup(BNFlagConditionForSemanticClass* conditions) { __debugbreak(); }
BINARYNINJACOREAPI uint32_t* BNGetArchitectureFlagsWrittenByFlagWriteType(
	BNArchitecture* arch, uint32_t writeType, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetArchitectureSemanticClassForFlagWriteType(BNArchitecture* arch, uint32_t writeType) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetArchitectureFlagWriteLowLevelIL(BNArchitecture* arch, BNLowLevelILOperation op,
	size_t size, uint32_t flagWriteType, uint32_t flag, BNRegisterOrConstant* operands, size_t operandCount,
	BNLowLevelILFunction* il) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetDefaultArchitectureFlagWriteLowLevelIL(BNArchitecture* arch, BNLowLevelILOperation op,
	size_t size, BNFlagRole role, BNRegisterOrConstant* operands, size_t operandCount, BNLowLevelILFunction* il) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetArchitectureFlagConditionLowLevelIL(
	BNArchitecture* arch, BNLowLevelILFlagCondition cond, uint32_t semClass, BNLowLevelILFunction* il) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetDefaultArchitectureFlagConditionLowLevelIL(
	BNArchitecture* arch, BNLowLevelILFlagCondition cond, uint32_t semClass, BNLowLevelILFunction* il) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetArchitectureSemanticFlagGroupLowLevelIL(
	BNArchitecture* arch, uint32_t semGroup, BNLowLevelILFunction* il) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetModifiedArchitectureRegistersOnWrite(
	BNArchitecture* arch, uint32_t reg, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRegisterList(uint32_t* regs) { __debugbreak(); }
BINARYNINJACOREAPI BNRegisterInfo BNGetArchitectureRegisterInfo(BNArchitecture* arch, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetArchitectureStackPointerRegister(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetArchitectureLinkRegister(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetArchitectureGlobalRegisters(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsArchitectureGlobalRegister(BNArchitecture* arch, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetArchitectureSystemRegisters(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsArchitectureSystemRegister(BNArchitecture* arch, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetArchitectureRegisterByName(BNArchitecture* arch, const char* name) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetArchitectureRegisterStackName(BNArchitecture* arch, uint32_t regStack) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureRegisterStacks(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterStackInfo BNGetArchitectureRegisterStackInfo(BNArchitecture* arch, uint32_t regStack) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetArchitectureRegisterStackForRegister(BNArchitecture* arch, uint32_t reg) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNIntrinsicClass BNGetArchitectureIntrinsicClass(BNArchitecture* arch, uint32_t intrinsic) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetArchitectureIntrinsicName(BNArchitecture* arch, uint32_t intrinsic) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureIntrinsics(BNArchitecture* arch, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNNameAndType* BNGetArchitectureIntrinsicInputs(
	BNArchitecture* arch, uint32_t intrinsic, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeNameAndTypeList(BNNameAndType* nt, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNTypeWithConfidence* BNGetArchitectureIntrinsicOutputs(
	BNArchitecture* arch, uint32_t intrinsic, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeOutputTypeList(BNTypeWithConfidence* types, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI bool BNCanArchitectureAssemble(BNArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNAssemble(
	BNArchitecture* arch, const char* code, uint64_t addr, BNDataBuffer* result, char** errors) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNIsArchitectureNeverBranchPatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsArchitectureAlwaysBranchPatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsArchitectureInvertBranchPatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsArchitectureSkipAndReturnZeroPatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsArchitectureSkipAndReturnValuePatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len) { __debugbreak(); return {}; }

BINARYNINJACOREAPI bool BNArchitectureConvertToNop(BNArchitecture* arch, uint8_t* data, uint64_t addr, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNArchitectureAlwaysBranch(BNArchitecture* arch, uint8_t* data, uint64_t addr, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNArchitectureInvertBranch(BNArchitecture* arch, uint8_t* data, uint64_t addr, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNArchitectureSkipAndReturnValue(
	BNArchitecture* arch, uint8_t* data, uint64_t addr, size_t len, uint64_t value) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRegisterArchitectureFunctionRecognizer(BNArchitecture* arch, BNFunctionRecognizer* rec) { __debugbreak(); }

BINARYNINJACOREAPI void BNArchitectureRegisterRelocationHandler(
	BNArchitecture* arch, const char* viewName, BNRelocationHandler* handler)
{
	arch->relocationHandlers.emplace(viewName, handler);
}
BINARYNINJACOREAPI BNRelocationHandler* BNCreateRelocationHandler(BNCustomRelocationHandler* handler)
{
	return new BNRelocationHandler(*handler);
}
BINARYNINJACOREAPI BNRelocationHandler* BNArchitectureGetRelocationHandler(BNArchitecture* arch, const char* viewName) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRelocationHandler* BNNewRelocationHandlerReference(BNRelocationHandler* handler) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRelocationHandler(BNRelocationHandler* handler) { __debugbreak(); }
BINARYNINJACOREAPI bool BNRelocationHandlerGetRelocationInfo(
	BNRelocationHandler* handler, BNBinaryView* data, BNArchitecture* arch, BNRelocationInfo* info, size_t infoCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRelocationHandlerApplyRelocation(BNRelocationHandler* handler, BNBinaryView* view,
	BNArchitecture* arch, BNRelocation* reloc, uint8_t* dest, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNRelocationHandlerDefaultApplyRelocation(BNRelocationHandler* handler, BNBinaryView* view,
	BNArchitecture* arch, BNRelocation* reloc, uint8_t* dest, size_t len) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNRelocationHandlerGetOperandForExternalRelocation(BNRelocationHandler* handler,
	const uint8_t* data, uint64_t addr, size_t length, const BNLowLevelILFunction* il, BNRelocation* relocation) { __debugbreak(); return {}; }