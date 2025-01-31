// Adapted from https://github.com/Vector35/binaryninja-api/blob/7a9a2503aae0c2b92b437b2ea7796efaae93a822/examples/llil_parser/src/llil_parser.cpp

#include <cstdio>
#include <cinttypes>
#include "binaryninjacore.h"
#include "binaryninjaapi.h"
#include "lowlevelilinstruction.h"

using namespace BinaryNinja;
using namespace std;


static void PrintIndent(size_t indent)
{
	for (size_t i = 0; i < indent; i++)
		printf("    ");
}


static void PrintOperation(BNLowLevelILOperation operation)
{
#define ENUM_PRINTER(op) \
	case op: \
		printf(#op); \
		break

	switch (operation)
	{
		ENUM_PRINTER(LLIL_NOP);
		ENUM_PRINTER(LLIL_SET_REG);
		ENUM_PRINTER(LLIL_SET_REG_SPLIT);
		ENUM_PRINTER(LLIL_SET_FLAG);
		ENUM_PRINTER(LLIL_LOAD);
		ENUM_PRINTER(LLIL_STORE);
		ENUM_PRINTER(LLIL_PUSH);
		ENUM_PRINTER(LLIL_POP);
		ENUM_PRINTER(LLIL_REG);
		ENUM_PRINTER(LLIL_CONST);
		ENUM_PRINTER(LLIL_CONST_PTR);
		ENUM_PRINTER(LLIL_EXTERN_PTR);
		ENUM_PRINTER(LLIL_FLAG);
		ENUM_PRINTER(LLIL_FLAG_BIT);
		ENUM_PRINTER(LLIL_ADD);
		ENUM_PRINTER(LLIL_ADC);
		ENUM_PRINTER(LLIL_SUB);
		ENUM_PRINTER(LLIL_SBB);
		ENUM_PRINTER(LLIL_AND);
		ENUM_PRINTER(LLIL_OR);
		ENUM_PRINTER(LLIL_XOR);
		ENUM_PRINTER(LLIL_LSL);
		ENUM_PRINTER(LLIL_LSR);
		ENUM_PRINTER(LLIL_ASR);
		ENUM_PRINTER(LLIL_ROL);
		ENUM_PRINTER(LLIL_RLC);
		ENUM_PRINTER(LLIL_ROR);
		ENUM_PRINTER(LLIL_RRC);
		ENUM_PRINTER(LLIL_MUL);
		ENUM_PRINTER(LLIL_MULU_DP);
		ENUM_PRINTER(LLIL_MULS_DP);
		ENUM_PRINTER(LLIL_DIVU);
		ENUM_PRINTER(LLIL_DIVU_DP);
		ENUM_PRINTER(LLIL_DIVS);
		ENUM_PRINTER(LLIL_DIVS_DP);
		ENUM_PRINTER(LLIL_MODU);
		ENUM_PRINTER(LLIL_MODU_DP);
		ENUM_PRINTER(LLIL_MODS);
		ENUM_PRINTER(LLIL_MODS_DP);
		ENUM_PRINTER(LLIL_NEG);
		ENUM_PRINTER(LLIL_NOT);
		ENUM_PRINTER(LLIL_SX);
		ENUM_PRINTER(LLIL_ZX);
		ENUM_PRINTER(LLIL_LOW_PART);
		ENUM_PRINTER(LLIL_JUMP);
		ENUM_PRINTER(LLIL_JUMP_TO);
		ENUM_PRINTER(LLIL_CALL);
		ENUM_PRINTER(LLIL_CALL_STACK_ADJUST);
		ENUM_PRINTER(LLIL_TAILCALL);
		ENUM_PRINTER(LLIL_RET);
		ENUM_PRINTER(LLIL_NORET);
		ENUM_PRINTER(LLIL_IF);
		ENUM_PRINTER(LLIL_GOTO);
		ENUM_PRINTER(LLIL_FLAG_COND);
		ENUM_PRINTER(LLIL_CMP_E);
		ENUM_PRINTER(LLIL_CMP_NE);
		ENUM_PRINTER(LLIL_CMP_SLT);
		ENUM_PRINTER(LLIL_CMP_ULT);
		ENUM_PRINTER(LLIL_CMP_SLE);
		ENUM_PRINTER(LLIL_CMP_ULE);
		ENUM_PRINTER(LLIL_CMP_SGE);
		ENUM_PRINTER(LLIL_CMP_UGE);
		ENUM_PRINTER(LLIL_CMP_SGT);
		ENUM_PRINTER(LLIL_CMP_UGT);
		ENUM_PRINTER(LLIL_TEST_BIT);
		ENUM_PRINTER(LLIL_BOOL_TO_INT);
		ENUM_PRINTER(LLIL_ADD_OVERFLOW);
		ENUM_PRINTER(LLIL_SYSCALL);
		ENUM_PRINTER(LLIL_BP);
		ENUM_PRINTER(LLIL_TRAP);
		ENUM_PRINTER(LLIL_UNDEF);
		ENUM_PRINTER(LLIL_UNIMPL);
		ENUM_PRINTER(LLIL_UNIMPL_MEM);
		ENUM_PRINTER(LLIL_SET_REG_SSA);
		ENUM_PRINTER(LLIL_SET_REG_SSA_PARTIAL);
		ENUM_PRINTER(LLIL_SET_REG_SPLIT_SSA);
		ENUM_PRINTER(LLIL_REG_SPLIT_DEST_SSA);
		ENUM_PRINTER(LLIL_REG_SSA);
		ENUM_PRINTER(LLIL_REG_SSA_PARTIAL);
		ENUM_PRINTER(LLIL_SET_FLAG_SSA);
		ENUM_PRINTER(LLIL_FLAG_SSA);
		ENUM_PRINTER(LLIL_FLAG_BIT_SSA);
		ENUM_PRINTER(LLIL_CALL_SSA);
		ENUM_PRINTER(LLIL_SYSCALL_SSA);
		ENUM_PRINTER(LLIL_TAILCALL_SSA);
		ENUM_PRINTER(LLIL_CALL_PARAM);
		ENUM_PRINTER(LLIL_CALL_STACK_SSA);
		ENUM_PRINTER(LLIL_CALL_OUTPUT_SSA);
		ENUM_PRINTER(LLIL_LOAD_SSA);
		ENUM_PRINTER(LLIL_STORE_SSA);
		ENUM_PRINTER(LLIL_REG_PHI);
		ENUM_PRINTER(LLIL_FLAG_PHI);
		ENUM_PRINTER(LLIL_MEM_PHI);
	default:
		printf("<invalid operation %" PRId32 ">", operation);
		break;
	}
}


static void PrintFlagCondition(BNLowLevelILFlagCondition cond)
{
	switch (cond)
	{
		ENUM_PRINTER(LLFC_E);
		ENUM_PRINTER(LLFC_NE);
		ENUM_PRINTER(LLFC_SLT);
		ENUM_PRINTER(LLFC_ULT);
		ENUM_PRINTER(LLFC_SLE);
		ENUM_PRINTER(LLFC_ULE);
		ENUM_PRINTER(LLFC_SGE);
		ENUM_PRINTER(LLFC_UGE);
		ENUM_PRINTER(LLFC_SGT);
		ENUM_PRINTER(LLFC_UGT);
		ENUM_PRINTER(LLFC_NEG);
		ENUM_PRINTER(LLFC_POS);
		ENUM_PRINTER(LLFC_O);
		ENUM_PRINTER(LLFC_NO);
	default:
		printf("<invalid condition>");
		break;
	}
}


static void PrintRegister(LowLevelILFunction* func, uint32_t reg)
{
	if (LLIL_REG_IS_TEMP(reg))
		printf("temp%d", LLIL_GET_TEMP_REG_INDEX(reg));
	else
	{
		string name = func->GetArchitecture()->GetRegisterName(reg);
		if (name.size() == 0)
			printf("<no name>");
		else
			printf("%s", name.c_str());
	}
}


static void PrintFlag(LowLevelILFunction* func, uint32_t flag)
{
	if (LLIL_REG_IS_TEMP(flag))
		printf("cond:%d", LLIL_GET_TEMP_REG_INDEX(flag));
	else
	{
		string name = func->GetArchitecture()->GetFlagName(flag);
		if (name.size() == 0)
			printf("<no name>");
		else
			printf("%s", name.c_str());
	}
}


static void PrintILExpr(const LowLevelILInstruction& instr, size_t indent)
{
	PrintIndent(indent);
	PrintOperation(instr.operation);
	printf("\n");

	indent++;

	for (auto& operand : instr.GetOperands())
	{
		switch (operand.GetType())
		{
		case IntegerLowLevelOperand:
			PrintIndent(indent);
			printf("int 0x%" PRIx64 "\n", operand.GetInteger());
			break;

		case IndexLowLevelOperand:
			PrintIndent(indent);
			printf("index %" PRIdPTR "\n", operand.GetIndex());
			break;

		case ExprLowLevelOperand:
			PrintILExpr(operand.GetExpr(), indent);
			break;

		case RegisterLowLevelOperand:
			PrintIndent(indent);
			printf("reg ");
			PrintRegister(instr.function, operand.GetRegister());
			printf("\n");
			break;

		case FlagLowLevelOperand:
			PrintIndent(indent);
			printf("flag ");
			PrintFlag(instr.function, operand.GetFlag());
			printf("\n");
			break;

		case FlagConditionLowLevelOperand:
			PrintIndent(indent);
			printf("flag condition ");
			PrintFlagCondition(operand.GetFlagCondition());
			printf("\n");
			break;

		case SSARegisterLowLevelOperand:
			PrintIndent(indent);
			printf("ssa reg ");
			PrintRegister(instr.function, operand.GetSSARegister().reg);
			printf("#%" PRIdPTR "\n", operand.GetSSARegister().version);
			break;

		case SSAFlagLowLevelOperand:
			PrintIndent(indent);
			printf("ssa flag ");
			PrintFlag(instr.function, operand.GetSSAFlag().flag);
			printf("#%" PRIdPTR "\n", operand.GetSSAFlag().version);
			break;

		case IndexListLowLevelOperand:
			PrintIndent(indent);
			printf("index list ");
			for (auto i : operand.GetIndexList())
				printf("%" PRIdPTR " ", i);
			printf("\n");
			break;

		case SSARegisterListLowLevelOperand:
			PrintIndent(indent);
			printf("ssa reg list ");
			for (auto i : operand.GetSSARegisterList())
			{
				PrintRegister(instr.function, i.reg);
				printf("#%" PRIdPTR " ", i.version);
			}
			printf("\n");
			break;

		case SSAFlagListLowLevelOperand:
			PrintIndent(indent);
			printf("ssa reg list ");
			for (auto i : operand.GetSSAFlagList())
			{
				PrintFlag(instr.function, i.flag);
				printf("#%" PRIdPTR " ", i.version);
			}
			printf("\n");
			break;

		default:
			PrintIndent(indent);
			printf("<invalid operand>\n");
			break;
		}
	}
}

Ref<LowLevelILFunction> GetLowLevelILTestFunction(Architecture* arch)
{
	static auto platform = BNCreatePlatform(arch->GetObject(), "test-platform");
	auto addr = 0x10000;
	Ref<Function> fn = new Function(BNCreateUserFunction(nullptr, platform, addr));
	Ref<LowLevelILFunction> il = new LowLevelILFunction(arch, fn);
	std::vector<uint8_t> test = { 0x48, 0x8B, 0x42, 0x24, 0x78 }; // mov rax, qword ptr [rdx+0x78]
	size_t size = test.size();
	arch->GetInstructionLowLevelIL(test.data(), addr, size, *il);
	il->Finalize();
	return il;
}

int main(int argc, char* argv[])
{
	if (!InitPlugins())
	{
		puts("Failed to initialize plugins");
		return EXIT_FAILURE;
	}

	auto arch = Architecture::GetByName("x86_64");
	if(!arch)
	{
		puts("Failed to get x86_64 architecture");
		return EXIT_FAILURE;
	}

	auto il = GetLowLevelILTestFunction(arch);
	if (!il)
	{
		printf("    Does not have LLIL\n\n");
		return EXIT_FAILURE;
	}

	// Loop through all blocks in the function
	for (auto& block : il->GetBasicBlocks())
	{
		// Loop though each instruction in the block
		for (size_t instrIndex = block->GetStart(); instrIndex < block->GetEnd(); instrIndex++)
		{
			// Fetch IL instruction
			LowLevelILInstruction instr = (*il)[instrIndex];

			// Display core's intrepretation of the IL instruction
			vector<InstructionTextToken> tokens;
			il->GetInstructionText(nullptr, il->GetArchitecture(), instrIndex, tokens);
			printf("    %" PRIdPTR " @ 0x%" PRIx64 "  ", instrIndex, instr.address);
			for (auto& token : tokens)
				printf("%s", token.text.c_str());
			printf("\n");

			// Generically parse the IL tree and display the parts
			PrintILExpr(instr, 2);

			// Example of using visitors to find all constants in the instruction
			instr.VisitExprs([&](const LowLevelILInstruction& expr) {
				switch (expr.operation)
				{
				case LLIL_CONST:
				case LLIL_CONST_PTR:
				case LLIL_EXTERN_PTR:
					printf("        Found constant 0x%" PRIx64 "\n", expr.GetConstant());
					return false;  // Done parsing this
				default:
					break;
				}
				return true;  // Parse any subexpressions
			});

			// Example of using the templated accessors for efficiently parsing load instructions
			instr.VisitExprs([&](const LowLevelILInstruction& expr) {
				switch (expr.operation)
				{
				case LLIL_LOAD:
					if (expr.GetSourceExpr<LLIL_LOAD>().operation == LLIL_CONST_PTR)
					{
						printf("        Loading from address 0x%" PRIx64 "\n",
							expr.GetSourceExpr<LLIL_LOAD>().GetConstant<LLIL_CONST_PTR>());
						return false;  // Done parsing this
					}
					else if (expr.GetSourceExpr<LLIL_LOAD>().operation == LLIL_EXTERN_PTR)
					{
						printf("        Loading from address 0x%" PRIx64 "\n",
							expr.GetSourceExpr<LLIL_LOAD>().GetConstant<LLIL_EXTERN_PTR>());
						return false;  // Done parsing this
					}
					break;
				default:
					break;
				}
				return true;  // Parse any subexpressions
			});
		}
	}

	printf("\n");

	return EXIT_SUCCESS;
}