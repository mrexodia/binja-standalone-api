#pragma once

#include "binaryninjaapi.h"
#include "core_ref.h"
#include "lowlevelilinstruction.h"
#include <map>

struct BNCallingConvention : BNRef
{
	std::string name;
	BNCustomCallingConvention callbacks;

	BNCallingConvention(std::string name, BNCustomCallingConvention callbacks) :
		name(std::move(name)), callbacks(callbacks)
	{}

	~BNCallingConvention() { callbacks.freeObject(callbacks.context); }
};

struct BNRelocationHandler : BNRef
{
	BNCustomRelocationHandler callbacks;

	explicit BNRelocationHandler(BNCustomRelocationHandler callbacks) : callbacks(callbacks) {}

	~BNRelocationHandler() { callbacks.freeObject(callbacks.context); }
};

struct BNArchitecture
{
	BNCustomArchitecture callbacks;
	std::map<std::string, BNCallingConvention*> callingConventions;
	std::map<std::string, BNRelocationHandler*> relocationHandlers;
	BNCallingConvention* defaultCallingConvention = nullptr;
	BNCallingConvention* cdeclCallingConvention = nullptr;
	BNCallingConvention* stdcallCallingConvention = nullptr;
	BNCallingConvention* fastcallCallingConvention = nullptr;

	explicit BNArchitecture(BNCustomArchitecture callbacks) : callbacks(callbacks)
	{
		callbacks.init(callbacks.context, this);
	}
};

using ExprId = size_t;
using InstructionId = size_t;

inline uint64_t labelEncode(const BNLowLevelILLabel& label)
{
	return label.operand | label.ref << 3;
}

inline BNLowLevelILLabel labelDecode(uint64_t op)
{
	BNLowLevelILLabel label;
	label.resolved = false;
	label.operand = op & 7;
	label.ref = op >> 3;
	return label;
}

struct BNLowLevelILFunction : BNRef
{
	BNFunction* mOwner = nullptr;
	BNArchitecture* mArch = nullptr;  // TODO: remove?
	std::vector<BinaryNinja::LowLevelILInstruction> mExpressions;
	std::vector<ExprId> mInstructions;
	uint64_t mCurrentAddress = -1;
	std::map<uint64_t, BNLowLevelILLabel> mBasicBlocks;
	std::map<uint64_t, std::string> mDisassembledInstructions;
	std::vector<std::vector<uint64_t>> mOperandLists;

	explicit BNLowLevelILFunction(BNFunction* owner) : mOwner(owner)
	{
		mExpressions.emplace_back();
		mInstructions.push_back(0);
	}

	BinaryNinja::LowLevelILInstruction* NewExpr()
	{
		auto id = mExpressions.size();
		mExpressions.emplace_back();
		auto& expr = mExpressions.back();
		expr.exprIndex = id;
		// expr.instructionIndex = -1;
		return &expr;
	}

	ExprId AddExpr(BNLowLevelILOperation operation, const BinaryNinja::ILSourceLocation& loc, size_t size,
		uint32_t flags, uint64_t a, uint64_t b, uint64_t c, uint64_t d)
	{
		auto expr = NewExpr();
		expr->operation = operation;
		if (loc.valid)
		{
			expr->address = loc.address;
			expr->sourceOperand = loc.sourceOperand;
			mCurrentAddress = loc.address;  // TODO: HACK
		}
		else
		{
			if (mCurrentAddress == -1)
				__debugbreak();
			expr->address = mCurrentAddress;
			expr->sourceOperand = -1;
		}
		expr->size = size;
		expr->flags = flags;
		expr->operands[0] = a;
		expr->operands[1] = b;
		expr->operands[2] = c;
		expr->operands[3] = d;
		return expr->exprIndex;
	}

	void SetExprSourceOperand(ExprId expr, uint32_t operand) { mExpressions[expr].sourceOperand = operand; }

	InstructionId AddInstruction(ExprId expr)
	{
		auto instructionIndex = mInstructions.size();
		mInstructions.push_back(expr);
		return instructionIndex;
	}

	ExprId Goto(BNLowLevelILLabel& label, const BinaryNinja::ILSourceLocation& loc)
	{
		auto gotoExprId = AddExpr(LLIL_GOTO, loc, 0, 0, labelEncode(label), 0, 0, 0);
		if (!label.resolved)
		{
			label.ref = gotoExprId;
			label.operand = 0;
		}
		return gotoExprId;
	}

	ExprId If(ExprId operand, BNLowLevelILLabel& t, BNLowLevelILLabel& f, const BinaryNinja::ILSourceLocation& loc)
	{
		// We can only adjust one operand, so we need to optimize this
		if (&t == &f)
		{
			// TODO: verify this is loc
			return Goto(t, loc);
		}
		else
		{
			auto exprId = AddExpr(LLIL_IF, {}, 0, 0, operand, labelEncode(t), labelEncode(f), 0);
			if (!t.resolved)
			{
				t.ref = exprId;
				t.operand = 1;
			}
			if (!f.resolved)
			{
				f.ref = exprId;
				f.operand = 2;
			}
			return exprId;
		}
	}

	void MarkLabel(BNLowLevelILLabel& label)
	{
		if (label.resolved)
			return;

		auto nextInstructionId = mInstructions.size();

		// Walk back the linked list and fix the label references
		BNLowLevelILLabel iter = label;
		while (iter.ref != 0)
		{
			auto& fixupExpr = mExpressions[iter.ref];
			auto& fixupOperand = fixupExpr.operands[iter.operand];
			iter = labelDecode(fixupOperand);
			fixupOperand = nextInstructionId;
		}

		label.resolved = true;
		label.ref = 0;
		label.operand = nextInstructionId;
	}

	size_t AddOperandList(std::vector<uint64_t> operands)
	{
		auto id = mOperandLists.size();
		mOperandLists.emplace_back(std::move(operands));
		return id;
	}

	BNLowLevelILLabel* GetLabelForAddress(BNArchitecture* arch, ExprId addr)
	{
		auto found = mBasicBlocks.find(addr);
		return found == mBasicBlocks.end() ? nullptr : &found->second;
	}

	static const char* op2str(BNLowLevelILOperation op)
	{
		switch (op)
		{
		case LLIL_NOP:
			return "NOP";
		case LLIL_SET_REG:
			return "SET_REG";
		case LLIL_SET_REG_SPLIT:
			return "SET_REG_SPLIT";
		case LLIL_SET_FLAG:
			return "SET_FLAG";
		case LLIL_SET_REG_STACK_REL:
			return "SET_REG_STACK_REL";
		case LLIL_REG_STACK_PUSH:
			return "REG_STACK_PUSH";
		case LLIL_LOAD:
			return "LOAD";
		case LLIL_STORE:
			return "STORE";
		case LLIL_PUSH:
			return "PUSH";
		case LLIL_POP:
			return "POP";
		case LLIL_REG:
			return "REG";
		case LLIL_REG_SPLIT:
			return "REG_SPLIT";
		case LLIL_REG_STACK_REL:
			return "REG_STACK_REL";
		case LLIL_REG_STACK_POP:
			return "REG_STACK_POP";
		case LLIL_REG_STACK_FREE_REG:
			return "REG_STACK_FREE_REG";
		case LLIL_REG_STACK_FREE_REL:
			return "REG_STACK_FREE_REL";
		case LLIL_CONST:
			return "CONST";
		case LLIL_CONST_PTR:
			return "CONST_PTR";
		case LLIL_EXTERN_PTR:
			return "EXTERN_PTR";
		case LLIL_FLOAT_CONST:
			return "FLOAT_CONST";
		case LLIL_FLAG:
			return "FLAG";
		case LLIL_FLAG_BIT:
			return "FLAG_BIT";
		case LLIL_ADD:
			return "ADD";
		case LLIL_ADC:
			return "ADC";
		case LLIL_SUB:
			return "SUB";
		case LLIL_SBB:
			return "SBB";
		case LLIL_AND:
			return "AND";
		case LLIL_OR:
			return "OR";
		case LLIL_XOR:
			return "XOR";
		case LLIL_LSL:
			return "LSL";
		case LLIL_LSR:
			return "LSR";
		case LLIL_ASR:
			return "ASR";
		case LLIL_ROL:
			return "ROL";
		case LLIL_RLC:
			return "RLC";
		case LLIL_ROR:
			return "ROR";
		case LLIL_RRC:
			return "RRC";
		case LLIL_MUL:
			return "MUL";
		case LLIL_MULU_DP:
			return "MULU_DP";
		case LLIL_MULS_DP:
			return "MULS_DP";
		case LLIL_DIVU:
			return "DIVU";
		case LLIL_DIVU_DP:
			return "DIVU_DP";
		case LLIL_DIVS:
			return "DIVS";
		case LLIL_DIVS_DP:
			return "DIVS_DP";
		case LLIL_MODU:
			return "MODU";
		case LLIL_MODU_DP:
			return "MODU_DP";
		case LLIL_MODS:
			return "MODS";
		case LLIL_MODS_DP:
			return "MODS_DP";
		case LLIL_NEG:
			return "NEG";
		case LLIL_NOT:
			return "NOT";
		case LLIL_SX:
			return "SX";
		case LLIL_ZX:
			return "ZX";
		case LLIL_LOW_PART:
			return "LOW_PART";
		case LLIL_JUMP:
			return "JUMP";
		case LLIL_JUMP_TO:
			return "JUMP_TO";
		case LLIL_CALL:
			return "CALL";
		case LLIL_CALL_STACK_ADJUST:
			return "CALL_STACK_ADJUST";
		case LLIL_TAILCALL:
			return "TAILCALL";
		case LLIL_RET:
			return "RET";
		case LLIL_NORET:
			return "NORET";
		case LLIL_IF:
			return "IF";
		case LLIL_GOTO:
			return "GOTO";
		case LLIL_FLAG_COND:
			return "FLAG_COND";
		case LLIL_FLAG_GROUP:
			return "FLAG_GROUP";
		case LLIL_CMP_E:
			return "CMP_E";
		case LLIL_CMP_NE:
			return "CMP_NE";
		case LLIL_CMP_SLT:
			return "CMP_SLT";
		case LLIL_CMP_ULT:
			return "CMP_ULT";
		case LLIL_CMP_SLE:
			return "CMP_SLE";
		case LLIL_CMP_ULE:
			return "CMP_ULE";
		case LLIL_CMP_SGE:
			return "CMP_SGE";
		case LLIL_CMP_UGE:
			return "CMP_UGE";
		case LLIL_CMP_SGT:
			return "CMP_SGT";
		case LLIL_CMP_UGT:
			return "CMP_UGT";
		case LLIL_TEST_BIT:
			return "TEST_BIT";
		case LLIL_BOOL_TO_INT:
			return "BOOL_TO_INT";
		case LLIL_ADD_OVERFLOW:
			return "ADD_OVERFLOW";
		case LLIL_SYSCALL:
			return "SYSCALL";
		case LLIL_BP:
			return "BP";
		case LLIL_TRAP:
			return "TRAP";
		case LLIL_INTRINSIC:
			return "INTRINSIC";
		case LLIL_UNDEF:
			return "UNDEF";
		case LLIL_UNIMPL:
			return "UNIMPL";
		case LLIL_UNIMPL_MEM:
			return "UNIMPL_MEM";
		case LLIL_FADD:
			return "FADD";
		case LLIL_FSUB:
			return "FSUB";
		case LLIL_FMUL:
			return "FMUL";
		case LLIL_FDIV:
			return "FDIV";
		case LLIL_FSQRT:
			return "FSQRT";
		case LLIL_FNEG:
			return "FNEG";
		case LLIL_FABS:
			return "FABS";
		case LLIL_FLOAT_TO_INT:
			return "FLOAT_TO_INT";
		case LLIL_INT_TO_FLOAT:
			return "INT_TO_FLOAT";
		case LLIL_FLOAT_CONV:
			return "FLOAT_CONV";
		case LLIL_ROUND_TO_INT:
			return "ROUND_TO_INT";
		case LLIL_FLOOR:
			return "FLOOR";
		case LLIL_CEIL:
			return "CEIL";
		case LLIL_FTRUNC:
			return "FTRUNC";
		case LLIL_FCMP_E:
			return "FCMP_E";
		case LLIL_FCMP_NE:
			return "FCMP_NE";
		case LLIL_FCMP_LT:
			return "FCMP_LT";
		case LLIL_FCMP_LE:
			return "FCMP_LE";
		case LLIL_FCMP_GE:
			return "FCMP_GE";
		case LLIL_FCMP_GT:
			return "FCMP_GT";
		case LLIL_FCMP_O:
			return "FCMP_O";
		case LLIL_FCMP_UO:
			return "FCMP_UO";
		case LLIL_SET_REG_SSA:
			return "SET_REG_SSA";
		case LLIL_SET_REG_SSA_PARTIAL:
			return "SET_REG_SSA_PARTIAL";
		case LLIL_SET_REG_SPLIT_SSA:
			return "SET_REG_SPLIT_SSA";
		case LLIL_SET_REG_STACK_REL_SSA:
			return "SET_REG_STACK_REL_SSA";
		case LLIL_SET_REG_STACK_ABS_SSA:
			return "SET_REG_STACK_ABS_SSA";
		case LLIL_REG_SPLIT_DEST_SSA:
			return "REG_SPLIT_DEST_SSA";
		case LLIL_REG_STACK_DEST_SSA:
			return "REG_STACK_DEST_SSA";
		case LLIL_REG_SSA:
			return "REG_SSA";
		case LLIL_REG_SSA_PARTIAL:
			return "REG_SSA_PARTIAL";
		case LLIL_REG_SPLIT_SSA:
			return "REG_SPLIT_SSA";
		case LLIL_REG_STACK_REL_SSA:
			return "REG_STACK_REL_SSA";
		case LLIL_REG_STACK_ABS_SSA:
			return "REG_STACK_ABS_SSA";
		case LLIL_REG_STACK_FREE_REL_SSA:
			return "REG_STACK_FREE_REL_SSA";
		case LLIL_REG_STACK_FREE_ABS_SSA:
			return "REG_STACK_FREE_ABS_SSA";
		case LLIL_SET_FLAG_SSA:
			return "SET_FLAG_SSA";
		case LLIL_FLAG_SSA:
			return "FLAG_SSA";
		case LLIL_FLAG_BIT_SSA:
			return "FLAG_BIT_SSA";
		case LLIL_CALL_SSA:
			return "CALL_SSA";
		case LLIL_SYSCALL_SSA:
			return "SYSCALL_SSA";
		case LLIL_TAILCALL_SSA:
			return "TAILCALL_SSA";
		case LLIL_CALL_PARAM:
			return "CALL_PARAM";
		case LLIL_CALL_STACK_SSA:
			return "CALL_STACK_SSA";
		case LLIL_CALL_OUTPUT_SSA:
			return "CALL_OUTPUT_SSA";
		case LLIL_SEPARATE_PARAM_LIST_SSA:
			return "SEPARATE_PARAM_LIST_SSA";
		case LLIL_SHARED_PARAM_SLOT_SSA:
			return "SHARED_PARAM_SLOT_SSA";
		case LLIL_MEMORY_INTRINSIC_OUTPUT_SSA:
			return "MEMORY_INTRINSIC_OUTPUT_SSA";
		case LLIL_LOAD_SSA:
			return "LOAD_SSA";
		case LLIL_STORE_SSA:
			return "STORE_SSA";
		case LLIL_INTRINSIC_SSA:
			return "INTRINSIC_SSA";
		case LLIL_MEMORY_INTRINSIC_SSA:
			return "MEMORY_INTRINSIC_SSA";
		case LLIL_REG_PHI:
			return "REG_PHI";
		case LLIL_REG_STACK_PHI:
			return "REG_STACK_PHI";
		case LLIL_FLAG_PHI:
			return "FLAG_PHI";
		case LLIL_MEM_PHI:
			return "MEM_PHI";
		}
		return "<unknown>";
	}

	static const char* usage2str(BinaryNinja::LowLevelILOperandUsage usage)
	{
		using namespace BinaryNinja;
		switch (usage)
		{
		case SourceExprLowLevelOperandUsage:
			return "SourceExpr";
		case SourceRegisterLowLevelOperandUsage:
			return "SourceRegister";
		case SourceRegisterStackLowLevelOperandUsage:
			return "SourceRegisterStack";
		case SourceFlagLowLevelOperandUsage:
			return "SourceFlag";
		case SourceSSARegisterLowLevelOperandUsage:
			return "SourceSSARegister";
		case SourceSSARegisterStackLowLevelOperandUsage:
			return "SourceSSARegisterStack";
		case SourceSSAFlagLowLevelOperandUsage:
			return "SourceSSAFlag";
		case DestExprLowLevelOperandUsage:
			return "DestExpr";
		case DestRegisterLowLevelOperandUsage:
			return "DestRegister";
		case DestRegisterStackLowLevelOperandUsage:
			return "DestRegisterStack";
		case DestFlagLowLevelOperandUsage:
			return "DestFlag";
		case DestSSARegisterLowLevelOperandUsage:
			return "DestSSARegister";
		case DestSSARegisterStackLowLevelOperandUsage:
			return "DestSSARegisterStack";
		case DestSSAFlagLowLevelOperandUsage:
			return "DestSSAFlag";
		case SemanticFlagClassLowLevelOperandUsage:
			return "SemanticFlagClass";
		case SemanticFlagGroupLowLevelOperandUsage:
			return "SemanticFlagGroup";
		case PartialRegisterLowLevelOperandUsage:
			return "PartialRegister";
		case PartialSSARegisterStackSourceLowLevelOperandUsage:
			return "PartialSSARegisterStackSource";
		case StackSSARegisterLowLevelOperandUsage:
			return "StackSSARegister";
		case StackMemoryVersionLowLevelOperandUsage:
			return "StackMemoryVersion";
		case TopSSARegisterLowLevelOperandUsage:
			return "TopSSARegister";
		case LeftExprLowLevelOperandUsage:
			return "LeftExpr";
		case RightExprLowLevelOperandUsage:
			return "RightExpr";
		case CarryExprLowLevelOperandUsage:
			return "CarryExpr";
		case ConditionExprLowLevelOperandUsage:
			return "ConditionExpr";
		case HighRegisterLowLevelOperandUsage:
			return "HighRegister";
		case HighSSARegisterLowLevelOperandUsage:
			return "HighSSARegister";
		case LowRegisterLowLevelOperandUsage:
			return "LowRegister";
		case LowSSARegisterLowLevelOperandUsage:
			return "LowSSARegister";
		case IntrinsicLowLevelOperandUsage:
			return "Intrinsic";
		case ConstantLowLevelOperandUsage:
			return "Constant";
		case VectorLowLevelOperandUsage:
			return "Vector";
		case StackAdjustmentLowLevelOperandUsage:
			return "StackAdjustment";
		case TargetLowLevelOperandUsage:
			return "Target";
		case TrueTargetLowLevelOperandUsage:
			return "TrueTarget";
		case FalseTargetLowLevelOperandUsage:
			return "FalseTarget";
		case BitIndexLowLevelOperandUsage:
			return "BitIndex";
		case SourceMemoryVersionLowLevelOperandUsage:
			return "SourceMemoryVersion";
		case DestMemoryVersionLowLevelOperandUsage:
			return "DestMemoryVersion";
		case FlagConditionLowLevelOperandUsage:
			return "FlagCondition";
		case OutputSSARegistersLowLevelOperandUsage:
			return "OutputSSARegisters";
		case OutputMemoryVersionLowLevelOperandUsage:
			return "OutputMemoryVersion";
		case ParameterExprsLowLevelOperandUsage:
			return "ParameterExprs";
		case SourceSSARegistersLowLevelOperandUsage:
			return "SourceSSARegisters";
		case SourceSSARegisterStacksLowLevelOperandUsage:
			return "SourceSSARegisterStacks";
		case SourceSSAFlagsLowLevelOperandUsage:
			return "SourceSSAFlags";
		case OutputRegisterOrFlagListLowLevelOperandUsage:
			return "OutputRegisterOrFlagList";
		case OutputSSARegisterOrFlagListLowLevelOperandUsage:
			return "OutputSSARegisterOrFlagList";
		case OutputMemoryIntrinsicLowLevelOperandUsage:
			return "OutputMemoryIntrinsic";
		case SourceMemoryVersionsLowLevelOperandUsage:
			return "SourceMemoryVersions";
		case TargetsLowLevelOperandUsage:
			return "Targets";
		case RegisterStackAdjustmentsLowLevelOperandUsage:
			return "RegisterStackAdjustments";
		case OffsetLowLevelOperandUsage:
			return "Offset";
		}
		return "<unknown>";
	}

	std::vector<BinaryNinja::InstructionTextToken> ExprText(
		BNArchitecture* arch, ExprId id, BNDisassemblySettings* settings)
	{
		using namespace BinaryNinja;
		std::vector<InstructionTextToken> tokens;
		auto& expr = mExpressions.at(id);
		BNLowLevelILOperation operation = expr.operation;
		tokens.emplace_back(OpcodeToken, op2str(operation));
		if (expr.size > 0)
		{
			tokens.emplace_back(TextToken, ":" + std::to_string(expr.size * 8));
		}
		tokens.emplace_back(OperandSeparatorToken, " ");
		// TODO: switch to LowLevelILInstruction::operationOperandIndex
		// TODO: check out LowLevelILInstruction::operandTypeForUsage
		auto itr = LowLevelILInstruction::operationOperandUsage.find(operation);
		if (itr != LowLevelILInstruction::operationOperandUsage.end())
		{
			const auto& operandUsage = itr->second;
			for (size_t usageIndex = 0, operandIndex = 0; usageIndex < operandUsage.size();
				 usageIndex++, operandIndex++)
			{
				if (usageIndex > 0)
					tokens.emplace_back(OperandSeparatorToken, ", ");
				auto usage = operandUsage[usageIndex];
				if (operandIndex >= 4)
					__debugbreak();
				auto operand = expr.operands[operandIndex];
				tokens.emplace_back(TextToken, usage2str(usage));
				tokens.emplace_back(TextToken, ":");
				switch (usage)
				{
				case SourceExprLowLevelOperandUsage:
				case DestExprLowLevelOperandUsage:
				case LeftExprLowLevelOperandUsage:
				case RightExprLowLevelOperandUsage:
				case CarryExprLowLevelOperandUsage:
				case ConditionExprLowLevelOperandUsage:
					tokens.emplace_back(TextToken, "%" + std::to_string(operand));
					break;
				case SourceRegisterLowLevelOperandUsage:
				case DestRegisterLowLevelOperandUsage:
				{
					auto name = arch->callbacks.getRegisterName(arch->callbacks.context, (uint32_t)operand);
					tokens.emplace_back(RegisterToken, name);
					BNFreeString(name);
					break;
				}
				case ConstantLowLevelOperandUsage:
				{
					char hex[64] = "";
					sprintf(hex, "0x%llX", operand);
					tokens.emplace_back(IntegerToken, hex);
					break;
				}
				case SemanticFlagGroupLowLevelOperandUsage:
				{
					auto name = arch->callbacks.getSemanticFlagGroupName(arch->callbacks.context, (uint32_t)operand);
					tokens.emplace_back(RegisterToken, name);
					BNFreeString(name);
					break;
				}
				case SourceFlagLowLevelOperandUsage:
				case DestFlagLowLevelOperandUsage:
				{
					auto name = arch->callbacks.getFlagName(arch->callbacks.context, (uint32_t)operand);
					tokens.emplace_back(RegisterToken, name);
					BNFreeString(name);
					break;
				}
				case IntrinsicLowLevelOperandUsage:
				{
					auto name = arch->callbacks.getIntrinsicName(arch->callbacks.context, (uint32_t)operand);
					tokens.emplace_back(KeywordToken, name);
					BNFreeString(name);
					break;
				}
				case OutputRegisterOrFlagListLowLevelOperandUsage:
				{
					auto count = operand;
					operand = expr.operands[++operandIndex];
					tokens.emplace_back(TextToken, "RegOrFlagList:[");
					const auto& operandList = mOperandLists.at(operand);
					if (count != operandList.size())
						__debugbreak();
					for (size_t i = 0; i < operandList.size(); i++)
					{
						if (i > 0)
						{
							tokens.emplace_back(OperandSeparatorToken, ",");
						}
						auto regOrFlag = RegisterOrFlag::FromIdentifier(operandList[i]);
						if (regOrFlag.IsFlag())
						{
							auto name = arch->callbacks.getFlagName(arch->callbacks.context, regOrFlag.GetFlag());
							tokens.emplace_back(RegisterToken, name);
							BNFreeString(name);
						}
						else
						{
							auto name =
								arch->callbacks.getRegisterName(arch->callbacks.context, regOrFlag.GetRegister());
							tokens.emplace_back(RegisterToken, name);
							BNFreeString(name);
						}
					}
					tokens.emplace_back(TextToken, "]");
					break;
				}
				case TargetLowLevelOperandUsage:
				case TrueTargetLowLevelOperandUsage:
				case FalseTargetLowLevelOperandUsage:
				{
					auto label = labelDecode(operand);
					tokens.emplace_back(TextToken, "[" + std::to_string(label.operand) + "]");
					if (label.ref != 0)
						tokens.emplace_back(TextToken, "->%" + std::to_string(label.ref) + ":unresolved");
					break;
				}
				case ParameterExprsLowLevelOperandUsage:
				{
					if (operandIndex == 0)
					{
						auto count = operand;
						const auto& operandList = mOperandLists.at(operand);
						if (operandList.size() != count)
							__debugbreak();

						tokens.emplace_back(TextToken, "OperandList:[");
						for (size_t i = 0; i < operandList.size(); i++)
						{
							if (i > 0)
								tokens.emplace_back(OperandSeparatorToken, ", ");
							tokens.emplace_back(TextToken, "%" + std::to_string(operandList[i]));
						}
						tokens.emplace_back(TextToken, "]");
					}
					else
					{
						tokens.emplace_back(TextToken, "%" + std::to_string(operand));
					}
					break;
				}
				default:
					tokens.emplace_back(TextToken, "unsupported:" + std::to_string(operand));
					break;
				}
			}
		}
		else if (operation == LLIL_CALL_PARAM)
		{
			auto count = expr.operands[0];
			auto operandListId = expr.operands[1];
			const auto& operandList = mOperandLists.at(operandListId);
			if (operandList.size() != count)
				__debugbreak();
			tokens.emplace_back(TextToken, "OperandList:[");
			for (size_t i = 0; i < count; i++)
			{
				if (i > 0)
					tokens.emplace_back(OperandSeparatorToken, ", ");
				tokens.emplace_back(TextToken, "%" + std::to_string(operandList[i]));
			}
			tokens.emplace_back(TextToken, "]");
		}
		else
		{
			__debugbreak();
			tokens.emplace_back(TextToken, "(unknown operand usage)");
		}
		return tokens;
	}
};
