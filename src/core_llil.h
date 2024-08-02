#pragma once

#include "core_architecture.h"

BINARYNINJACOREAPI BNLowLevelILFunction* BNCreateLowLevelILFunction(BNArchitecture* arch, BNFunction* func)
{
	return new BNLowLevelILFunction(func);
}
BINARYNINJACOREAPI BNLowLevelILFunction* BNNewLowLevelILFunctionReference(BNLowLevelILFunction* func)
{
	return BNRef::Add(func);
}
BINARYNINJACOREAPI void BNFreeLowLevelILFunction(BNLowLevelILFunction* func)
{
	BNRef::Release(func);
}
BINARYNINJACOREAPI BNFunction* BNGetLowLevelILOwnerFunction(BNLowLevelILFunction* func)
{
	return func->mOwner;
}
BINARYNINJACOREAPI uint64_t BNLowLevelILGetCurrentAddress(BNLowLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNLowLevelILSetCurrentAddress(BNLowLevelILFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI void BNLowLevelILSetCurrentSourceBlock(BNLowLevelILFunction* func, BNBasicBlock* source) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNLowLevelILGetInstructionStart(
	BNLowLevelILFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNLowLevelILClearIndirectBranches(BNLowLevelILFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNLowLevelILSetIndirectBranches(
	BNLowLevelILFunction* func, BNArchitectureAndAddress* branches, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI size_t BNLowLevelILAddExpr(BNLowLevelILFunction* func, BNLowLevelILOperation operation, size_t size,
	uint32_t flags, uint64_t a, uint64_t b, uint64_t c, uint64_t d)
{
	return func->AddExpr(operation, {}, size, flags, a, b, c, d);
}
BINARYNINJACOREAPI size_t BNLowLevelILAddExprWithLocation(BNLowLevelILFunction* func, uint64_t addr,
	uint32_t sourceOperand, BNLowLevelILOperation operation, size_t size, uint32_t flags, uint64_t a, uint64_t b,
	uint64_t c, uint64_t d)
{
	return func->AddExpr(operation, {addr, sourceOperand}, size, flags, a, b, c, d);
}
BINARYNINJACOREAPI void BNLowLevelILSetExprSourceOperand(BNLowLevelILFunction* func, size_t expr, uint32_t operand)
{
	func->SetExprSourceOperand(expr, operand);
}
BINARYNINJACOREAPI size_t BNLowLevelILAddInstruction(BNLowLevelILFunction* func, size_t expr)
{
	return func->AddInstruction(expr);
}
BINARYNINJACOREAPI size_t BNLowLevelILGoto(BNLowLevelILFunction* func, BNLowLevelILLabel* label)
{
	return func->Goto(*label, {});
}
BINARYNINJACOREAPI size_t BNLowLevelILGotoWithLocation(
	BNLowLevelILFunction* func, BNLowLevelILLabel* label, uint64_t addr, uint32_t sourceOperand)
{
	return func->Goto(*label, {addr, sourceOperand});
}
BINARYNINJACOREAPI size_t BNLowLevelILIf(
	BNLowLevelILFunction* func, uint64_t op, BNLowLevelILLabel* t, BNLowLevelILLabel* f)
{
	return func->If(op, *t, *f, {});
}
BINARYNINJACOREAPI size_t BNLowLevelILIfWithLocation(BNLowLevelILFunction* func, uint64_t op, BNLowLevelILLabel* t,
	BNLowLevelILLabel* f, uint64_t addr, uint32_t sourceOperand)
{
	return func->If(op, *t, *f, {addr, sourceOperand});
}
BINARYNINJACOREAPI void BNLowLevelILInitLabel(BNLowLevelILLabel* label)
{
	label->resolved = false;
	label->ref = 0;
	label->operand = 0;
}
BINARYNINJACOREAPI void BNLowLevelILMarkLabel(BNLowLevelILFunction* func, BNLowLevelILLabel* label)
{
	func->MarkLabel(*label);
}
BINARYNINJACOREAPI void BNFinalizeLowLevelILFunction(BNLowLevelILFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNGenerateLowLevelILSSAForm(BNLowLevelILFunction* func) { __debugbreak(); }

BINARYNINJACOREAPI void BNPrepareToCopyLowLevelILFunction(BNLowLevelILFunction* func, BNLowLevelILFunction* src) { __debugbreak(); }
BINARYNINJACOREAPI void BNPrepareToCopyLowLevelILBasicBlock(BNLowLevelILFunction* func, BNBasicBlock* block) { __debugbreak(); }
BINARYNINJACOREAPI BNLowLevelILLabel* BNGetLabelForLowLevelILSourceInstruction(
	BNLowLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNLowLevelILAddLabelMap(
	BNLowLevelILFunction* func, uint64_t* values, BNLowLevelILLabel** labels, size_t count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNLowLevelILAddOperandList(BNLowLevelILFunction* func, uint64_t* operands, size_t count)
{
	return func->AddOperandList(std::vector<uint64_t>(operands, operands + count));
}
BINARYNINJACOREAPI uint64_t* BNLowLevelILGetOperandList(
	BNLowLevelILFunction* func, size_t expr, size_t operand, size_t* count)
{
	__debugbreak();
	return nullptr;
}
BINARYNINJACOREAPI void BNLowLevelILFreeOperandList(uint64_t* operands)
{
	__debugbreak();
}

BINARYNINJACOREAPI BNLowLevelILInstruction BNGetLowLevelILByIndex(BNLowLevelILFunction* func, size_t i)
{
	return func->mExpressions.at(i);
}
BINARYNINJACOREAPI size_t BNGetLowLevelILIndexForInstruction(BNLowLevelILFunction* func, size_t i)
{
	auto exprId = func->mInstructions.at(i);
	return exprId;
}
BINARYNINJACOREAPI size_t BNGetLowLevelILInstructionForExpr(BNLowLevelILFunction* func, size_t expr)
{
	return func->mExpressions.at(expr).instructionIndex;
}
BINARYNINJACOREAPI size_t BNGetLowLevelILInstructionCount(BNLowLevelILFunction* func)
{
	return func->mInstructions.size();
}
BINARYNINJACOREAPI size_t BNGetLowLevelILExprCount(BNLowLevelILFunction* func)
{
	return func->mExpressions.size();
}

BINARYNINJACOREAPI void BNUpdateLowLevelILOperand(
	BNLowLevelILFunction* func, size_t instr, size_t operandIndex, uint64_t value) { __debugbreak(); }
BINARYNINJACOREAPI void BNReplaceLowLevelILExpr(BNLowLevelILFunction* func, size_t expr, size_t newExpr) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetLowLevelILExprAttributes(BNLowLevelILFunction* func, size_t expr, uint32_t attributes) { __debugbreak(); }

BINARYNINJACOREAPI void BNAddLowLevelILLabelForAddress(BNLowLevelILFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI BNLowLevelILLabel* BNGetLowLevelILLabelForAddress(
	BNLowLevelILFunction* func, BNArchitecture* arch, uint64_t addr)
{
	return func->GetLabelForAddress(arch, addr);
}

BINARYNINJACOREAPI bool BNGetLowLevelILExprText(BNLowLevelILFunction* func, BNArchitecture* arch, size_t i,
	BNDisassemblySettings* settings, BNInstructionTextToken** tokens, size_t* count)
{
	auto vecTokens = func->ExprText(arch, i, settings);
	*tokens = BinaryNinja::InstructionTextToken::CreateInstructionTextTokenList(vecTokens);
	*count = vecTokens.size();
	return !vecTokens.empty(); // TODO
}
BINARYNINJACOREAPI bool BNGetLowLevelILInstructionText(BNLowLevelILFunction* il, BNFunction* func, BNArchitecture* arch,
	size_t i, BNDisassemblySettings* settings, BNInstructionTextToken** tokens, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint32_t BNGetLowLevelILTemporaryRegisterCount(BNLowLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t BNGetLowLevelILTemporaryFlagCount(BNLowLevelILFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBasicBlock** BNGetLowLevelILBasicBlockList(BNLowLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetLowLevelILBasicBlockForInstruction(BNLowLevelILFunction* func, size_t i) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNLowLevelILFunction* BNGetLowLevelILSSAForm(BNLowLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetLowLevelILNonSSAForm(BNLowLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILSSAInstructionIndex(BNLowLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILNonSSAInstructionIndex(BNLowLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILSSAExprIndex(BNLowLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILNonSSAExprIndex(BNLowLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t BNGetLowLevelILSSARegisterDefinition(
	BNLowLevelILFunction* func, uint32_t reg, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILSSAFlagDefinition(BNLowLevelILFunction* func, uint32_t reg, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILSSAMemoryDefinition(BNLowLevelILFunction* func, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelILSSARegisterUses(
	BNLowLevelILFunction* func, uint32_t reg, size_t version, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelILSSAFlagUses(
	BNLowLevelILFunction* func, uint32_t reg, size_t version, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelILSSAMemoryUses(BNLowLevelILFunction* func, size_t version, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRegisterValue BNGetLowLevelILSSARegisterValue(
	BNLowLevelILFunction* func, uint32_t reg, size_t version) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetLowLevelILSSAFlagValue(
	BNLowLevelILFunction* func, uint32_t flag, size_t version) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRegisterValue BNGetLowLevelILExprValue(BNLowLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetLowLevelILPossibleExprValues(
	BNLowLevelILFunction* func, size_t expr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRegisterValue BNGetLowLevelILRegisterValueAtInstruction(
	BNLowLevelILFunction* func, uint32_t reg, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetLowLevelILRegisterValueAfterInstruction(
	BNLowLevelILFunction* func, uint32_t reg, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetLowLevelILPossibleRegisterValuesAtInstruction(
	BNLowLevelILFunction* func, uint32_t reg, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetLowLevelILPossibleRegisterValuesAfterInstruction(
	BNLowLevelILFunction* func, uint32_t reg, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetLowLevelILFlagValueAtInstruction(
	BNLowLevelILFunction* func, uint32_t flag, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetLowLevelILFlagValueAfterInstruction(
	BNLowLevelILFunction* func, uint32_t flag, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetLowLevelILPossibleFlagValuesAtInstruction(
	BNLowLevelILFunction* func, uint32_t flag, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetLowLevelILPossibleFlagValuesAfterInstruction(
	BNLowLevelILFunction* func, uint32_t flag, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetLowLevelILStackContentsAtInstruction(
	BNLowLevelILFunction* func, int64_t offset, size_t len, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetLowLevelILStackContentsAfterInstruction(
	BNLowLevelILFunction* func, int64_t offset, size_t len, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetLowLevelILPossibleStackContentsAtInstruction(BNLowLevelILFunction* func,
	int64_t offset, size_t len, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNPossibleValueSet BNGetLowLevelILPossibleStackContentsAfterInstruction(BNLowLevelILFunction* func,
	int64_t offset, size_t len, size_t instr, BNDataFlowQueryOption* options, size_t optionCount) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint32_t* BNGetLowLevelRegisters(BNLowLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetLowLevelRegisterStacks(BNLowLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetLowLevelFlags(BNLowLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint32_t* BNGetLowLevelSSARegistersWithoutVersions(BNLowLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetLowLevelSSARegisterStacksWithoutVersions(BNLowLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetLowLevelSSAFlagsWithoutVersions(BNLowLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t* BNGetLowLevelRegisterSSAVersions(
	BNLowLevelILFunction* func, const uint32_t var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelRegisterStackSSAVersions(
	BNLowLevelILFunction* func, const uint32_t var, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelFlagSSAVersions(BNLowLevelILFunction* func, const uint32_t var, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI size_t* BNGetLowLevelMemoryVersions(BNLowLevelILFunction* func, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNFreeLLILVariablesList(uint32_t* vars) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeLLILVariableVersionList(size_t* versions) { __debugbreak(); }

BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetMediumLevelILForLowLevelIL(BNLowLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetMappedMediumLevelIL(BNLowLevelILFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILInstructionIndex(BNLowLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMediumLevelILExprIndex(BNLowLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetMediumLevelILExprIndexes(BNLowLevelILFunction* func, size_t expr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMappedMediumLevelILInstructionIndex(BNLowLevelILFunction* func, size_t instr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetMappedMediumLevelILExprIndex(BNLowLevelILFunction* func, size_t expr) { __debugbreak(); return {}; }