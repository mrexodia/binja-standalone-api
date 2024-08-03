// Architectures
#include "core_impl.h"

std::map<std::string, BNArchitecture*> g_architectures;

static BNArchitecture* firstArch()
{
	if (g_architectures.empty())
		__debugbreak();
	return g_architectures.begin()->second;
}

BINARYNINJACOREAPI BNArchitecture* BNGetArchitectureByName(const char* name)
{
	auto it = g_architectures.find(name);
	if (it == g_architectures.end())
		return nullptr;
	return it->second;
}
BINARYNINJACOREAPI BNArchitecture** BNGetArchitectureList(size_t* count)
{
	std::vector<BNArchitecture*> archs;
	for (auto& pair : g_architectures)
		archs.push_back(pair.second);
	*count = archs.size();
	auto result = new BNArchitecture * [archs.size()];
	memcpy(result, archs.data(), archs.size() * sizeof(BNArchitecture*));
	return result;
}
BINARYNINJACOREAPI void BNFreeArchitectureList(BNArchitecture** archs)
{
	delete[] archs;
}
BINARYNINJACOREAPI BNArchitecture* BNRegisterArchitecture(const char* name, BNCustomArchitecture* arch)
{
	auto it = g_architectures.find(name);
	if (it == g_architectures.end())
	{
		it = g_architectures.emplace(name, new BNArchitecture(*arch)).first;
	}
	return it->second;
}
BINARYNINJACOREAPI BNArchitecture* BNRegisterArchitectureExtension(
	const char* name, BNArchitecture* base, BNCustomArchitecture* arch)
{
	// TODO: implement
	__debugbreak(); return {};
}
BINARYNINJACOREAPI void BNAddArchitectureRedirection(BNArchitecture* arch, BNArchitecture* from, BNArchitecture* to) { __debugbreak(); }
BINARYNINJACOREAPI BNArchitecture* BNRegisterArchitectureHook(BNArchitecture* base, BNCustomArchitecture* arch) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFinalizeArchitectureHook(BNArchitecture* base) { __debugbreak(); }
BINARYNINJACOREAPI BNArchitecture* BNGetNativeTypeParserArchitecture(void) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetArchitectureName(BNArchitecture* arch)
{
	for (const auto& [name, regArch] : g_architectures)
	{
		if (regArch == arch)
			return BNAllocString(name.c_str());
	}
	return nullptr;
}
BINARYNINJACOREAPI BNEndianness BNGetArchitectureEndianness(BNArchitecture* arch)
{
	return arch->callbacks.getEndianness(arch->callbacks.context);
}
BINARYNINJACOREAPI size_t BNGetArchitectureAddressSize(BNArchitecture* arch)
{
	return arch->callbacks.getAddressSize(arch->callbacks.context);
}
BINARYNINJACOREAPI size_t BNGetArchitectureDefaultIntegerSize(BNArchitecture* arch)
{
	return arch->callbacks.getDefaultIntegerSize(arch->callbacks.context);
}
BINARYNINJACOREAPI size_t BNGetArchitectureInstructionAlignment(BNArchitecture* arch)
{
	return arch->callbacks.getInstructionAlignment(arch->callbacks.context);
}
BINARYNINJACOREAPI size_t BNGetArchitectureMaxInstructionLength(BNArchitecture* arch)
{
	return arch->callbacks.getMaxInstructionLength(arch->callbacks.context);
}
BINARYNINJACOREAPI size_t BNGetArchitectureOpcodeDisplayLength(BNArchitecture* arch)
{
	return arch->callbacks.getOpcodeDisplayLength(arch->callbacks.context);
}
BINARYNINJACOREAPI BNArchitecture* BNGetAssociatedArchitectureByAddress(BNArchitecture* arch, uint64_t* addr)
{
	return arch->callbacks.getAssociatedArchitectureByAddress(arch->callbacks.context, addr);
}
BINARYNINJACOREAPI bool BNGetInstructionInfo(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t maxLen, BNInstructionInfo* result)
{
	return arch->callbacks.getInstructionInfo(arch->callbacks.context, data, addr, maxLen, result);
}

BINARYNINJACOREAPI bool BNGetInstructionText(BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t* len,
	BNInstructionTextToken** result, size_t* count)
{
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
	firstArch()->callbacks.freeInstructionText(tokens, count);
}
BINARYNINJACOREAPI void BNFreeInstructionTextLines(BNInstructionTextLine* lines, size_t count)
{
	// TODO: implement
	__debugbreak();
}
BINARYNINJACOREAPI char* BNGetArchitectureRegisterName(BNArchitecture* arch, uint32_t reg)
{
	return arch->callbacks.getRegisterName(arch->callbacks.context, reg);
}
BINARYNINJACOREAPI char* BNGetArchitectureFlagName(BNArchitecture* arch, uint32_t flag)
{
	return arch->callbacks.getFlagName(arch->callbacks.context, flag);
}
BINARYNINJACOREAPI char* BNGetArchitectureFlagWriteTypeName(BNArchitecture* arch, uint32_t flags)
{
	return arch->callbacks.getFlagWriteTypeName(arch->callbacks.context, flags);
}
BINARYNINJACOREAPI char* BNGetArchitectureSemanticFlagClassName(BNArchitecture* arch, uint32_t semClass)
{
	return arch->callbacks.getSemanticFlagClassName(arch->callbacks.context, semClass);
}
BINARYNINJACOREAPI char* BNGetArchitectureSemanticFlagGroupName(BNArchitecture* arch, uint32_t semGroup)
{
	return arch->callbacks.getSemanticFlagGroupName(arch->callbacks.context, semGroup);
}
BINARYNINJACOREAPI uint32_t* BNGetFullWidthArchitectureRegisters(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getFullWidthRegisters(arch->callbacks.context, count);
}
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureRegisters(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getAllRegisters(arch->callbacks.context, count);
}
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureFlags(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getAllFlags(arch->callbacks.context, count);
}
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureFlagWriteTypes(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getAllFlagWriteTypes(arch->callbacks.context, count);
}
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureSemanticFlagClasses(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getAllSemanticFlagClasses(arch->callbacks.context, count);
}
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureSemanticFlagGroups(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getAllSemanticFlagGroups(arch->callbacks.context, count);
}
BINARYNINJACOREAPI BNFlagRole BNGetArchitectureFlagRole(BNArchitecture* arch, uint32_t flag, uint32_t semClass)
{
	return arch->callbacks.getFlagRole(arch->callbacks.context, flag, semClass);
}
BINARYNINJACOREAPI uint32_t* BNGetArchitectureFlagsRequiredForFlagCondition(
	BNArchitecture* arch, BNLowLevelILFlagCondition cond, uint32_t semClass, size_t* count)
{
	return arch->callbacks.getFlagsRequiredForFlagCondition(arch->callbacks.context, cond, semClass, count);
}
BINARYNINJACOREAPI uint32_t* BNGetArchitectureFlagsRequiredForSemanticFlagGroup(
	BNArchitecture* arch, uint32_t semGroup, size_t* count)
{
	return arch->callbacks.getFlagsRequiredForSemanticFlagGroup(arch->callbacks.context, semGroup, count);
}
BINARYNINJACOREAPI BNFlagConditionForSemanticClass* BNGetArchitectureFlagConditionsForSemanticFlagGroup(
	BNArchitecture* arch, uint32_t semGroup, size_t* count)
{
	return arch->callbacks.getFlagConditionsForSemanticFlagGroup(arch->callbacks.context, semGroup, count);
}
BINARYNINJACOREAPI void BNFreeFlagConditionsForSemanticFlagGroup(BNFlagConditionForSemanticClass* conditions)
{
	auto arch = firstArch();
	arch->callbacks.freeFlagConditionsForSemanticFlagGroup(arch->callbacks.context, conditions);
}
BINARYNINJACOREAPI uint32_t* BNGetArchitectureFlagsWrittenByFlagWriteType(
	BNArchitecture* arch, uint32_t writeType, size_t* count)
{
	return arch->callbacks.getFlagsWrittenByFlagWriteType(arch->callbacks.context, writeType, count);
}
BINARYNINJACOREAPI uint32_t BNGetArchitectureSemanticClassForFlagWriteType(BNArchitecture* arch, uint32_t writeType)
{
	return arch->callbacks.getSemanticClassForFlagWriteType(arch->callbacks.context, writeType);
}
BINARYNINJACOREAPI size_t BNGetArchitectureFlagWriteLowLevelIL(BNArchitecture* arch, BNLowLevelILOperation op,
	size_t size, uint32_t flagWriteType, uint32_t flag, BNRegisterOrConstant* operands, size_t operandCount,
	BNLowLevelILFunction* il)
{
	return arch->callbacks.getFlagWriteLowLevelIL(arch->callbacks.context, op, size, flagWriteType, flag, operands, operandCount, il);
}
BINARYNINJACOREAPI size_t BNGetDefaultArchitectureFlagWriteLowLevelIL(BNArchitecture* arch, BNLowLevelILOperation op,
	size_t size, BNFlagRole role, BNRegisterOrConstant* operands, size_t operandCount, BNLowLevelILFunction* il)
{
	// TODO: implement
	__debugbreak(); return {};
}
BINARYNINJACOREAPI size_t BNGetArchitectureFlagConditionLowLevelIL(
	BNArchitecture* arch, BNLowLevelILFlagCondition cond, uint32_t semClass, BNLowLevelILFunction* il)
{
	return arch->callbacks.getFlagConditionLowLevelIL(arch->callbacks.context, cond, semClass, il);
}
BINARYNINJACOREAPI size_t BNGetDefaultArchitectureFlagConditionLowLevelIL(
	BNArchitecture* arch, BNLowLevelILFlagCondition cond, uint32_t semClass, BNLowLevelILFunction* il)
{
	// TODO: implement
	__debugbreak(); return {};
}
BINARYNINJACOREAPI size_t BNGetArchitectureSemanticFlagGroupLowLevelIL(
	BNArchitecture* arch, uint32_t semGroup, BNLowLevelILFunction* il)
{
	return arch->callbacks.getSemanticFlagGroupLowLevelIL(arch->callbacks.context, semGroup, il);
}
BINARYNINJACOREAPI uint32_t* BNGetModifiedArchitectureRegistersOnWrite(
	BNArchitecture* arch, uint32_t reg, size_t* count)
{
	// TODO: implement
	__debugbreak(); return {};
}
BINARYNINJACOREAPI void BNFreeRegisterList(uint32_t* regs)
{
	auto arch = firstArch();
	arch->callbacks.freeRegisterList(arch->callbacks.context, regs);
}
BINARYNINJACOREAPI BNRegisterInfo BNGetArchitectureRegisterInfo(BNArchitecture* arch, uint32_t reg)
{
	BNRegisterInfo info;
	arch->callbacks.getRegisterInfo(arch->callbacks.context, reg, &info);
	return info;
}
BINARYNINJACOREAPI uint32_t BNGetArchitectureStackPointerRegister(BNArchitecture* arch)
{
	return arch->callbacks.getStackPointerRegister(arch->callbacks.context);
}
BINARYNINJACOREAPI uint32_t BNGetArchitectureLinkRegister(BNArchitecture* arch)
{
	return arch->callbacks.getLinkRegister(arch->callbacks.context);
}
BINARYNINJACOREAPI uint32_t* BNGetArchitectureGlobalRegisters(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getGlobalRegisters(arch->callbacks.context, count);
}
BINARYNINJACOREAPI bool BNIsArchitectureGlobalRegister(BNArchitecture* arch, uint32_t reg)
{
	// TODO: implement
	__debugbreak(); return {};
}
BINARYNINJACOREAPI uint32_t* BNGetArchitectureSystemRegisters(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getSystemRegisters(arch->callbacks.context, count);
}
BINARYNINJACOREAPI bool BNIsArchitectureSystemRegister(BNArchitecture* arch, uint32_t reg)
{
	// TODO: implement
	__debugbreak(); return {};
}
BINARYNINJACOREAPI uint32_t BNGetArchitectureRegisterByName(BNArchitecture* arch, const char* name)
{
	// TODO: implement
	__debugbreak(); return {};
}

BINARYNINJACOREAPI char* BNGetArchitectureRegisterStackName(BNArchitecture* arch, uint32_t regStack)
{
	return arch->callbacks.getRegisterStackName(arch->callbacks.context, regStack);
}
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureRegisterStacks(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getAllRegisterStacks(arch->callbacks.context, count);
}
BINARYNINJACOREAPI BNRegisterStackInfo BNGetArchitectureRegisterStackInfo(BNArchitecture* arch, uint32_t regStack)
{
	BNRegisterStackInfo info;
	arch->callbacks.getRegisterStackInfo(arch->callbacks.context, regStack, &info);
	return info;
}
BINARYNINJACOREAPI uint32_t BNGetArchitectureRegisterStackForRegister(BNArchitecture* arch, uint32_t reg)
{
	// TODO: implement
	__debugbreak(); return {};
}

BINARYNINJACOREAPI BNIntrinsicClass BNGetArchitectureIntrinsicClass(BNArchitecture* arch, uint32_t intrinsic)
{
	return arch->callbacks.getIntrinsicClass(arch->callbacks.context, intrinsic);
}
BINARYNINJACOREAPI char* BNGetArchitectureIntrinsicName(BNArchitecture* arch, uint32_t intrinsic)
{
	return arch->callbacks.getIntrinsicName(arch->callbacks.context, intrinsic);
}
BINARYNINJACOREAPI uint32_t* BNGetAllArchitectureIntrinsics(BNArchitecture* arch, size_t* count)
{
	return arch->callbacks.getAllIntrinsics(arch->callbacks.context, count);
}
BINARYNINJACOREAPI BNNameAndType* BNGetArchitectureIntrinsicInputs(
	BNArchitecture* arch, uint32_t intrinsic, size_t* count)
{
	return arch->callbacks.getIntrinsicInputs(arch->callbacks.context, intrinsic, count);
}
BINARYNINJACOREAPI void BNFreeNameAndTypeList(BNNameAndType* nt, size_t count)
{
	auto arch = firstArch();
	arch->callbacks.freeNameAndTypeList(arch->callbacks.context, nt, count);
}
BINARYNINJACOREAPI BNTypeWithConfidence* BNGetArchitectureIntrinsicOutputs(
	BNArchitecture* arch, uint32_t intrinsic, size_t* count)
{
	return arch->callbacks.getIntrinsicOutputs(arch->callbacks.context, intrinsic, count);
}
BINARYNINJACOREAPI void BNFreeOutputTypeList(BNTypeWithConfidence* types, size_t count)
{
	auto arch = firstArch();
	arch->callbacks.freeTypeList(arch->callbacks.context, types, count);
}

BINARYNINJACOREAPI bool BNCanArchitectureAssemble(BNArchitecture* arch)
{
	return arch->callbacks.canAssemble(arch->callbacks.context);
}
BINARYNINJACOREAPI bool BNAssemble(
	BNArchitecture* arch, const char* code, uint64_t addr, BNDataBuffer* result, char** errors)
{
	return arch->callbacks.assemble(arch->callbacks.context, code, addr, result, errors);
}

BINARYNINJACOREAPI bool BNIsArchitectureNeverBranchPatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len)
{
	return arch->callbacks.isNeverBranchPatchAvailable(arch->callbacks.context, data, addr, len);
}
BINARYNINJACOREAPI bool BNIsArchitectureAlwaysBranchPatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len)
{
	return arch->callbacks.isAlwaysBranchPatchAvailable(arch->callbacks.context, data, addr, len);
}
BINARYNINJACOREAPI bool BNIsArchitectureInvertBranchPatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len)
{
	return arch->callbacks.isInvertBranchPatchAvailable(arch->callbacks.context, data, addr, len);
}
BINARYNINJACOREAPI bool BNIsArchitectureSkipAndReturnZeroPatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len)
{
	return arch->callbacks.isSkipAndReturnZeroPatchAvailable(arch->callbacks.context, data, addr, len);
}
BINARYNINJACOREAPI bool BNIsArchitectureSkipAndReturnValuePatchAvailable(
	BNArchitecture* arch, const uint8_t* data, uint64_t addr, size_t len)
{
	return arch->callbacks.isSkipAndReturnValuePatchAvailable(arch->callbacks.context, data, addr, len);
}

BINARYNINJACOREAPI bool BNArchitectureConvertToNop(BNArchitecture* arch, uint8_t* data, uint64_t addr, size_t len)
{
	return arch->callbacks.convertToNop(arch->callbacks.context, data, addr, len);
}
BINARYNINJACOREAPI bool BNArchitectureAlwaysBranch(BNArchitecture* arch, uint8_t* data, uint64_t addr, size_t len)
{
	return arch->callbacks.alwaysBranch(arch->callbacks.context, data, addr, len);
}
BINARYNINJACOREAPI bool BNArchitectureInvertBranch(BNArchitecture* arch, uint8_t* data, uint64_t addr, size_t len)
{
	return arch->callbacks.invertBranch(arch->callbacks.context, data, addr, len);
}
BINARYNINJACOREAPI bool BNArchitectureSkipAndReturnValue(
	BNArchitecture* arch, uint8_t* data, uint64_t addr, size_t len, uint64_t value)
{
	return arch->callbacks.skipAndReturnValue(arch->callbacks.context, data, addr, len, value);
}
BINARYNINJACOREAPI void BNRegisterArchitectureFunctionRecognizer(BNArchitecture* arch, BNFunctionRecognizer* rec)
{
	arch->functionRecognizers.push_back(*rec);
}

BINARYNINJACOREAPI void BNArchitectureRegisterRelocationHandler(
	BNArchitecture* arch, const char* viewName, BNRelocationHandler* handler)
{
	arch->relocationHandlers.emplace(viewName, handler);
}
BINARYNINJACOREAPI BNRelocationHandler* BNCreateRelocationHandler(BNCustomRelocationHandler* handler)
{
	return new BNRelocationHandler(*handler);
}
BINARYNINJACOREAPI BNRelocationHandler* BNArchitectureGetRelocationHandler(BNArchitecture* arch, const char* viewName)
{
	auto it = arch->relocationHandlers.find(viewName);
	if (it == arch->relocationHandlers.end())
		return nullptr;
	return it->second;
}
BINARYNINJACOREAPI BNRelocationHandler* BNNewRelocationHandlerReference(BNRelocationHandler* handler)
{
	return BNRef::Add(handler);
}
BINARYNINJACOREAPI void BNFreeRelocationHandler(BNRelocationHandler* handler)
{
	BNRef::Release(handler);
}
BINARYNINJACOREAPI bool BNRelocationHandlerGetRelocationInfo(
	BNRelocationHandler* handler, BNBinaryView* data, BNArchitecture* arch, BNRelocationInfo* info, size_t infoCount)
{
	return handler->callbacks.getRelocationInfo(handler->callbacks.context, data, arch, info, infoCount);
}
BINARYNINJACOREAPI bool BNRelocationHandlerApplyRelocation(BNRelocationHandler* handler, BNBinaryView* view,
	BNArchitecture* arch, BNRelocation* reloc, uint8_t* dest, size_t len)
{
	return handler->callbacks.applyRelocation(handler->callbacks.context, view, arch, reloc, dest, len);
}
BINARYNINJACOREAPI bool BNRelocationHandlerDefaultApplyRelocation(BNRelocationHandler* handler, BNBinaryView* view,
	BNArchitecture* arch, BNRelocation* reloc, uint8_t* dest, size_t len)
{
	// TODO: correct?
	return handler->callbacks.applyRelocation(handler->callbacks.context, view, arch, reloc, dest, len);
}
BINARYNINJACOREAPI size_t BNRelocationHandlerGetOperandForExternalRelocation(BNRelocationHandler* handler,
	const uint8_t* data, uint64_t addr, size_t length, const BNLowLevelILFunction* il, BNRelocation* relocation)
{
	return handler->callbacks.getOperandForExternalRelocation(handler->callbacks.context, data, addr, length, (BNLowLevelILFunction*)il, relocation);
}