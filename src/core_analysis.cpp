// Analysis

#include "core_impl.h"

BINARYNINJACOREAPI void BNAddAnalysisOption(BNBinaryView* view, const char* name) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNAddFunctionForAnalysis(
	BNBinaryView* view, BNPlatform* platform, uint64_t addr, bool autoDiscovered, BNType* type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddEntryPointForAnalysis(BNBinaryView* view, BNPlatform* platform, uint64_t addr) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveAnalysisFunction(BNBinaryView* view, BNFunction* func, bool updateRefs) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNCreateUserFunction(BNBinaryView* view, BNPlatform* platform, uint64_t addr)
{
	// TODO: for now we allow creating a function without view
	return new BNFunction(platform->mArch, addr);
}
BINARYNINJACOREAPI void BNRemoveUserFunction(BNBinaryView* view, BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI bool BNHasInitialAnalysis(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetAnalysisHold(BNBinaryView* view, bool enable) { __debugbreak(); }
BINARYNINJACOREAPI void BNUpdateAnalysisAndWait(BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI void BNUpdateAnalysis(BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI void BNAbortAnalysis(BNBinaryView* view) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsFunctionUpdateNeeded(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNRequestAdvancedFunctionAnalysisData(BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNReleaseAdvancedFunctionAnalysisData(BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNReleaseAdvancedFunctionAnalysisDataMultiple(BNFunction* func, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI BNFunction* BNNewFunctionReference(BNFunction* func)
{
	return BNRef::Add(func);
}
BINARYNINJACOREAPI void BNFreeFunction(BNFunction* func)
{
	BNRef::Release(func);
}
BINARYNINJACOREAPI BNFunction** BNGetAnalysisFunctionList(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeFunctionList(BNFunction** funcs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNHasFunctions(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNHasSymbols(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNHasDataVariables(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction* BNGetAnalysisFunction(BNBinaryView* view, BNPlatform* platform, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction* BNGetRecentAnalysisFunctionForAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction** BNGetAnalysisFunctionsForAddress(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction** BNGetAnalysisFunctionsContainingAddress(
	BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction* BNGetAnalysisEntryPoint(BNBinaryView* view) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNFunction** BNGetAllEntryFunctions(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddToEntryFunctions(BNBinaryView* view, BNFunction* func) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetGlobalCommentForAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetGlobalCommentedAddresses(BNBinaryView* view, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetGlobalCommentForAddress(BNBinaryView* view, uint64_t addr, const char* comment) { __debugbreak(); }

BINARYNINJACOREAPI BNBinaryView* BNGetFunctionData(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNGetFunctionArchitecture(BNFunction* func)
{
	func->mArch->AddRef(); // TODO: correct?
	return func->mArch;
}
BINARYNINJACOREAPI BNPlatform* BNGetFunctionPlatform(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetFunctionStart(BNFunction* func)
{
	return func->mStart;
}
BINARYNINJACOREAPI BNSymbol* BNGetFunctionSymbol(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNWasFunctionAutomaticallyDiscovered(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFunctionHasUserAnnotations(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNCanFunctionReturn(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBoolWithConfidence BNIsFunctionPure(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetFunctionAutoType(BNFunction* func, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetFunctionUserType(BNFunction* func, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI bool BNFunctionHasUserType(BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI char* BNGetFunctionComment(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI char* BNGetCommentForAddress(BNFunction* func, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetCommentedAddresses(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeAddressList(uint64_t* addrs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetFunctionComment(BNFunction* func, const char* comment) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetCommentForAddress(BNFunction* func, uint64_t addr, const char* comment) { __debugbreak(); }

BINARYNINJACOREAPI void BNAddUserCodeReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, uint64_t toAddr) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserCodeReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, uint64_t toAddr) { __debugbreak(); }

BINARYNINJACOREAPI void BNAddUserTypeReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, BNQualifiedName* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserTypeReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, BNQualifiedName* name) { __debugbreak(); }
BINARYNINJACOREAPI void BNAddUserTypeFieldReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, BNQualifiedName* name, uint64_t offset, size_t size) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserTypeFieldReference(
	BNFunction* func, BNArchitecture* fromArch, uint64_t fromAddr, BNQualifiedName* name, uint64_t offset, size_t size) { __debugbreak(); }

BINARYNINJACOREAPI BNBasicBlock* BNNewBasicBlockReference(BNBasicBlock* block)
{
	return BNRef::Add(block);
}
BINARYNINJACOREAPI void BNFreeBasicBlock(BNBasicBlock* block)
{
	BNRef::Release(block);
}
BINARYNINJACOREAPI BNBasicBlock** BNGetFunctionBasicBlockList(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBasicBlockList(BNBasicBlock** blocks, size_t count)
{
	// TODO: use count somehow?
	delete[] blocks;
}
BINARYNINJACOREAPI BNBasicBlock* BNGetFunctionBasicBlockAtAddress(
	BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetRecentBasicBlockForAddress(BNBinaryView* view, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlocksForAddress(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlocksStartingAtAddress(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint64_t BNGetFunctionHighestAddress(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetFunctionLowestAddress(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNAddressRange* BNGetFunctionAddressRanges(BNFunction* func, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNLowLevelILFunction* BNGetFunctionLowLevelIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetFunctionLowLevelILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLowLevelILForInstruction(BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelILInstructionsForAddress(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLowLevelILExitsForInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeILInstructionList(size_t* list) { __debugbreak(); }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetFunctionMediumLevelIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetFunctionMediumLevelILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetFunctionMappedMediumLevelIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetFunctionMappedMediumLevelILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetFunctionHighLevelIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetFunctionHighLevelILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLanguageRepresentationFunction* BNGetFunctionLanguageRepresentation(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLanguageRepresentationFunction* BNGetFunctionLanguageRepresentationIfAvailable(BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDataBuffer* BNGetConstantData(
	BNFunction* func, BNRegisterValueType state, uint64_t value, size_t size) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRegisterValue BNGetRegisterValueAtInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetRegisterValueAfterInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, uint32_t reg) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetStackContentsAtInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, int64_t offset, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetStackContentsAfterInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, int64_t offset, size_t size) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetParameterValueAtInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, BNType* functionType, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValue BNGetParameterValueAtLowLevelILInstruction(
	BNFunction* func, size_t instr, BNType* functionType, size_t i) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreePossibleValueSet(BNPossibleValueSet* value) { __debugbreak(); }
BINARYNINJACOREAPI uint32_t* BNGetRegistersReadByInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetRegistersWrittenByInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStackVariableReference* BNGetStackVariablesReferencedByInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNStackVariableReference* BNGetStackVariablesReferencedByInstructionIfAvailable(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeStackVariableReferenceList(BNStackVariableReference* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI BNConstantReference* BNGetConstantsReferencedByInstruction(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNConstantReference* BNGetConstantsReferencedByInstructionIfAvailable(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeConstantReferenceList(BNConstantReference* refs) { __debugbreak(); }

BINARYNINJACOREAPI BNLowLevelILFunction* BNGetFunctionLiftedIL(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetFunctionLiftedILIfAvailable(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetLiftedILForInstruction(BNFunction* func, BNArchitecture* arch, uint64_t addr) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLiftedILInstructionsForAddress(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLiftedILFlagUsesForDefinition(BNFunction* func, size_t i, uint32_t flag, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t* BNGetLiftedILFlagDefinitionsForUse(BNFunction* func, size_t i, uint32_t flag, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetFlagsReadByLiftedILInstruction(BNFunction* func, size_t i, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint32_t* BNGetFlagsWrittenByLiftedILInstruction(BNFunction* func, size_t i, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNType* BNGetFunctionType(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNTypeWithConfidence BNGetFunctionReturnType(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterSetWithConfidence BNGetFunctionReturnRegisters(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNCallingConventionWithConfidence BNGetFunctionCallingConvention(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNParameterVariablesWithConfidence BNGetFunctionParameterVariables(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeParameterVariables(BNParameterVariablesWithConfidence* vars) { __debugbreak(); }
BINARYNINJACOREAPI BNBoolWithConfidence BNFunctionHasVariableArguments(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNOffsetWithConfidence BNGetFunctionStackAdjustment(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterStackAdjustment* BNGetFunctionRegisterStackAdjustments(BNFunction* func, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRegisterStackAdjustments(BNRegisterStackAdjustment* adjustments) { __debugbreak(); }
BINARYNINJACOREAPI BNRegisterSetWithConfidence BNGetFunctionClobberedRegisters(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeRegisterSet(BNRegisterSetWithConfidence* regs) { __debugbreak(); }

BINARYNINJACOREAPI void BNSetAutoFunctionReturnType(BNFunction* func, BNTypeWithConfidence* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionReturnRegisters(BNFunction* func, BNRegisterSetWithConfidence* regs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionCallingConvention(
	BNFunction* func, BNCallingConventionWithConfidence* convention) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionParameterVariables(BNFunction* func, BNParameterVariablesWithConfidence* vars) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionHasVariableArguments(BNFunction* func, BNBoolWithConfidence* varArgs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionCanReturn(BNFunction* func, BNBoolWithConfidence* returns) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionPure(BNFunction* func, BNBoolWithConfidence* pure) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionStackAdjustment(BNFunction* func, BNOffsetWithConfidence* stackAdjust) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionRegisterStackAdjustments(
	BNFunction* func, BNRegisterStackAdjustment* adjustments, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetAutoFunctionClobberedRegisters(BNFunction* func, BNRegisterSetWithConfidence* regs) { __debugbreak(); }

BINARYNINJACOREAPI void BNSetUserFunctionReturnType(BNFunction* func, BNTypeWithConfidence* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionReturnRegisters(BNFunction* func, BNRegisterSetWithConfidence* regs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionCallingConvention(
	BNFunction* func, BNCallingConventionWithConfidence* convention) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionParameterVariables(BNFunction* func, BNParameterVariablesWithConfidence* vars) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionHasVariableArguments(BNFunction* func, BNBoolWithConfidence* varArgs) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionCanReturn(BNFunction* func, BNBoolWithConfidence* returns) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionPure(BNFunction* func, BNBoolWithConfidence* pure) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionStackAdjustment(BNFunction* func, BNOffsetWithConfidence* stackAdjust) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionRegisterStackAdjustments(
	BNFunction* func, BNRegisterStackAdjustment* adjustments, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionClobberedRegisters(BNFunction* func, BNRegisterSetWithConfidence* regs) { __debugbreak(); }

BINARYNINJACOREAPI void BNApplyImportedTypes(BNFunction* func, BNSymbol* sym, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI void BNApplyAutoDiscoveredFunctionType(BNFunction* func, BNType* type) { __debugbreak(); }
BINARYNINJACOREAPI bool BNFunctionHasExplicitlyDefinedType(BNFunction* func) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDisassemblyTextLine* BNGetFunctionTypeTokens(
	BNFunction* func, BNDisassemblySettings* settings, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNRegisterValueWithConfidence BNGetFunctionGlobalPointerValue(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNFunctionUsesIncomingGlobalPointer(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNRegisterValueWithConfidence BNGetFunctionRegisterValueAtExit(BNFunction* func, uint32_t reg) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNBoolWithConfidence BNIsFunctionInlinedDuringAnalysis(BNFunction* func) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetAutoFunctionInlinedDuringAnalysis(BNFunction* func, BNBoolWithConfidence inlined) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetUserFunctionInlinedDuringAnalysis(BNFunction* func, BNBoolWithConfidence inlined) { __debugbreak(); }

BINARYNINJACOREAPI bool BNGetInstructionContainingAddress(
	BNFunction* func, BNArchitecture* arch, uint64_t addr, uint64_t* start) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNFunction* BNGetBasicBlockFunction(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNGetBasicBlockArchitecture(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetBasicBlockSource(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t BNGetBasicBlockStart(BNBasicBlock* block)
{
	return block->start;
}
BINARYNINJACOREAPI uint64_t BNGetBasicBlockEnd(BNBasicBlock* block)
{
	return block->end;
}
BINARYNINJACOREAPI uint64_t BNGetBasicBlockLength(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlockEdge* BNGetBasicBlockOutgoingEdges(BNBasicBlock* block, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlockEdge* BNGetBasicBlockIncomingEdges(BNBasicBlock* block, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeBasicBlockEdgeList(BNBasicBlockEdge* edges, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI bool BNBasicBlockHasUndeterminedOutgoingEdges(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNBasicBlockCanExit(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNBasicBlockSetCanExit(BNBasicBlock* block, bool value) { __debugbreak(); }
BINARYNINJACOREAPI bool BNBasicBlockHasInvalidInstructions(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI size_t BNGetBasicBlockIndex(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockDominators(BNBasicBlock* block, size_t* count, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockStrictDominators(BNBasicBlock* block, size_t* count, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetBasicBlockImmediateDominator(BNBasicBlock* block, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockDominatorTreeChildren(BNBasicBlock* block, size_t* count, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockDominanceFrontier(BNBasicBlock* block, size_t* count, bool post) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock** BNGetBasicBlockIteratedDominanceFrontier(
	BNBasicBlock** blocks, size_t incomingCount, size_t* outputCount) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsILBasicBlock(BNBasicBlock* block)
{
	return block->type != BNBasicBlock::Type::Disassembly;
}
BINARYNINJACOREAPI bool BNIsLowLevelILBasicBlock(BNBasicBlock* block)
{
	return block->type == BNBasicBlock::Type::LLIL;
}
BINARYNINJACOREAPI bool BNIsMediumLevelILBasicBlock(BNBasicBlock* block)
{
	return block->type == BNBasicBlock::Type::MLIL;
}
BINARYNINJACOREAPI bool BNIsHighLevelILBasicBlock(BNBasicBlock* block)
{
	return block->type == BNBasicBlock::Type::HLIL;
}
BINARYNINJACOREAPI BNFunctionGraphType BNGetBasicBlockFunctionGraphType(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetBasicBlockLowLevelILFunction(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetBasicBlockMediumLevelILFunction(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetBasicBlockHighLevelILFunction(BNBasicBlock* block) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetBasicBlockInstructionContainingAddress(
	BNBasicBlock* block, uint64_t addr, uint64_t* start) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetBasicBlockSourceBlock(BNBasicBlock* block) { __debugbreak(); return {}; }

BINARYNINJACOREAPI BNDisassemblyTextLine* BNGetBasicBlockDisassemblyText(
	BNBasicBlock* block, BNDisassemblySettings* settings, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDisassemblyTextLines(BNDisassemblyTextLine* lines, size_t count) { __debugbreak(); }

BINARYNINJACOREAPI char* BNGetDisplayStringForInteger(
	BNBinaryView* binaryView, BNIntegerDisplayType type, uint64_t value, size_t inputWidth, bool isSigned) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNCreateDisassemblyTextRenderer(
	BNFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNCreateLowLevelILDisassemblyTextRenderer(
	BNLowLevelILFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNCreateMediumLevelILDisassemblyTextRenderer(
	BNMediumLevelILFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNCreateHighLevelILDisassemblyTextRenderer(
	BNHighLevelILFunction* func, BNDisassemblySettings* settings) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextRenderer* BNNewDisassemblyTextRendererReference(
	BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeDisassemblyTextRenderer(BNDisassemblyTextRenderer* renderer) { __debugbreak(); }
BINARYNINJACOREAPI BNFunction* BNGetDisassemblyTextRendererFunction(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNLowLevelILFunction* BNGetDisassemblyTextRendererLowLevelILFunction(
	BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNMediumLevelILFunction* BNGetDisassemblyTextRendererMediumLevelILFunction(
	BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNHighLevelILFunction* BNGetDisassemblyTextRendererHighLevelILFunction(
	BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNBasicBlock* BNGetDisassemblyTextRendererBasicBlock(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNArchitecture* BNGetDisassemblyTextRendererArchitecture(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblySettings* BNGetDisassemblyTextRendererSettings(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNSetDisassemblyTextRendererBasicBlock(
	BNDisassemblyTextRenderer* renderer, BNBasicBlock* block) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetDisassemblyTextRendererArchitecture(
	BNDisassemblyTextRenderer* renderer, BNArchitecture* arch) { __debugbreak(); }
BINARYNINJACOREAPI void BNSetDisassemblyTextRendererSettings(
	BNDisassemblyTextRenderer* renderer, BNDisassemblySettings* settings) { __debugbreak(); }
BINARYNINJACOREAPI bool BNIsILDisassemblyTextRenderer(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNDisassemblyTextRendererHasDataFlow(BNDisassemblyTextRenderer* renderer) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetDisassemblyTextRendererInstructionAnnotations(
	BNDisassemblyTextRenderer* renderer, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetDisassemblyTextRendererInstructionText(
	BNDisassemblyTextRenderer* renderer, uint64_t addr, size_t* len, BNDisassemblyTextLine** result, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNGetDisassemblyTextRendererLines(
	BNDisassemblyTextRenderer* renderer, uint64_t addr, size_t* len, BNDisassemblyTextLine** result, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextLine* BNPostProcessDisassemblyTextRendererLines(BNDisassemblyTextRenderer* renderer,
	uint64_t addr, size_t len, BNDisassemblyTextLine* inLines, size_t inCount, size_t* outCount,
	const char* indentSpaces) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNResetDisassemblyTextRendererDeduplicatedComments(BNDisassemblyTextRenderer* renderer) { __debugbreak(); }
BINARYNINJACOREAPI bool BNGetDisassemblyTextRendererSymbolTokens(BNDisassemblyTextRenderer* renderer, uint64_t addr,
	size_t size, size_t operand, BNInstructionTextToken** result, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetDisassemblyTextRendererStackVariableReferenceTokens(
	BNDisassemblyTextRenderer* renderer, BNStackVariableReference* ref, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI bool BNIsIntegerToken(BNInstructionTextTokenType type) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNInstructionTextToken* BNGetDisassemblyTextRendererIntegerTokens(
	BNDisassemblyTextRenderer* renderer, BNInstructionTextToken* token, BNArchitecture* arch, uint64_t addr,
	size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNDisassemblyTextLine* BNDisassemblyTextRendererWrapComment(BNDisassemblyTextRenderer* renderer,
	const BNDisassemblyTextLine* inLine, size_t* outLineCount, const char* comment, bool hasAutoAnnotations,
	const char* leadingSpaces, const char* indentSpaces) { __debugbreak(); return {}; }

BINARYNINJACOREAPI void BNMarkFunctionAsRecentlyUsed(BNFunction* func) { __debugbreak(); }
BINARYNINJACOREAPI void BNMarkBasicBlockAsRecentlyUsed(BNBasicBlock* block) { __debugbreak(); }

BINARYNINJACOREAPI BNReferenceSource* BNGetCodeReferences(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI BNReferenceSource* BNGetCodeReferencesInRange(
	BNBinaryView* view, uint64_t addr, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNFreeCodeReferences(BNReferenceSource* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferences(BNTypeFieldReference* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeILReferences(BNILReferenceSource* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI uint64_t* BNGetCodeReferencesFrom(BNBinaryView* view, BNReferenceSource* src, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetCodeReferencesFromInRange(
	BNBinaryView* view, BNReferenceSource* src, uint64_t len, size_t* count) { __debugbreak(); return {}; }

BINARYNINJACOREAPI uint64_t* BNGetDataReferences(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetDataReferencesInRange(BNBinaryView* view, uint64_t addr, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetDataReferencesFrom(BNBinaryView* view, uint64_t addr, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI uint64_t* BNGetDataReferencesFromInRange(
	BNBinaryView* view, uint64_t addr, uint64_t len, size_t* count) { __debugbreak(); return {}; }
BINARYNINJACOREAPI void BNAddUserDataReference(BNBinaryView* view, uint64_t fromAddr, uint64_t toAddr) { __debugbreak(); }
BINARYNINJACOREAPI void BNRemoveUserDataReference(BNBinaryView* view, uint64_t fromAddr, uint64_t toAddr) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeDataReferences(uint64_t* refs) { __debugbreak(); }

BINARYNINJACOREAPI void BNFreeTypeReferences(BNTypeReferenceSource* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferenceSizeInfo(BNTypeFieldReferenceSizeInfo* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferenceTypeInfo(BNTypeFieldReferenceTypeInfo* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferenceSizes(size_t* refs, size_t count) { __debugbreak(); }
BINARYNINJACOREAPI void BNFreeTypeFieldReferenceTypes(BNTypeWithConfidence* refs, size_t count) { __debugbreak(); }