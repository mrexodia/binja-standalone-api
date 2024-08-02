#include <binaryninjaapi.h>
#include <lowlevelilinstruction.h>

using namespace BinaryNinja;

extern "C" BINARYNINJAPLUGIN bool CorePluginInit_arch();

// Taken from: https://stackoverflow.com/a/24315631
static void ReplaceAll(std::string& s, const std::string& from, const std::string& to)
{
	size_t start_pos = 0;
	while ((start_pos = s.find(from, start_pos)) != std::string::npos)
	{
		s.replace(start_pos, from.length(), to);
		start_pos += to.length();  // Handles case where 'to' is a substring of 'from'
	}
}

static int hex2int(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	if (ch >= 'A' && ch <= 'F')
		return ch - 'A' + 10;
	if (ch >= 'a' && ch <= 'f')
		return ch - 'a' + 10;
	return -1;
}

static bool FromHexImpl(const std::string& text1, std::vector<unsigned char>& data, bool reverse)
{
	auto text = [&] {
		std::string r;
		for (auto ch : text1)
		{
			if (hex2int(ch) != -1)
				r.push_back(ch);
		}
		return r;
	}();
	auto size = text.size();
	if (size % 2)
		return false;
	data.resize(size / 2);
	for (size_t i = 0, j = 0; i < size; i += 2, j++)
	{
		auto high = hex2int(text[i]);
		auto low = hex2int(text[i + 1]);
		if (high == -1 || low == -1)
			return false;
		data[reverse ? data.size() - j - 1 : j] = (high << 4) | low;
	}
	return true;
}

static std::vector<uint8_t> fromhex(std::string text)
{
	std::vector<uint8_t> d;
	ReplaceAll(text, "0x", "");
	FromHexImpl(text, d, false);
	return d;
}

std::string tokensText(const std::vector<InstructionTextToken>& tokens)
{
	std::string text;
	for (const auto& token : tokens)
	{
		text += token.text;
	}
	return text;
}

int main(int argc, char** argv)
{
	CorePluginInit_arch();
	auto arch = Architecture::GetByName("x86_64");
	
	std::vector<std::vector<uint8_t>> tests;
	auto test = [&tests](const char* hex)
	{
		tests.push_back(fromhex(hex));
	};
	test("0x33, 0xFF"); // xor edi, edi
	test("0x2B, 0xC8"); // sub ecx, eax
	test("0xC7, 0x44, 0x24, 0x48, 0x16, 0x00, 0x18, 0x00"); // mov dword ptr ss:[rsp+0x48], 0x180016
	test("0x0F, 0x44, 0xD8"); // cmove ebx, eax
	test("0xF3, 0xAA"); // rep stosb
	test("0xF0, 0x0F, 0xB1, 0x35, 0x4B, 0x78, 0x0F, 0x00"); //
	test("F0 41 0F BA 2C 24 01"); // lock bts dword ptr ds:[r12], 0x1
	test("E8 1D 8F 05 00"); // call
	test("75 02"); // jne
	test("C3"); // ret
	test("488B4C2478"); // mov rcx, qword ptr [rsp+0x78]
	for (const auto& test : tests)
	{
		auto addr = 0x10000;
		Ref<LowLevelILFunction> il = new LowLevelILFunction(arch);
		auto size = test.size();
		std::vector<InstructionTextToken> tokens;
		arch->GetInstructionText(test.data(), addr, size, tokens);
		printf("disassembly: %s\n", tokensText(tokens).c_str());
		auto continueLifting = arch->GetInstructionLowLevelIL(test.data(), addr, size, *il);
		//printf("continueLifting: %d\n", continueLifting);
		puts("LLIL:");

		auto instructionCount = il->GetInstructionCount();
		for (size_t i = 1, j = 1; i < instructionCount; i++)
		{
			auto instr = il->GetInstruction(i);
			auto exprId = il->GetIndexForInstruction(i);
			for (; j < exprId; j++)
			{
				il->GetExprText(arch, j, tokens);
				printf("\t%%%zu = %s\n", j, tokensText(tokens).c_str());
			}
			auto prefix = "[" + std::to_string(i) + "]";
			il->GetExprText(arch, exprId, tokens);
			printf("[%zu]\t%%%zu = %s\n", i, exprId, tokensText(tokens).c_str());
			j++;
		}

		puts("");
	}
}