#include <binaryninjaapi.h>

extern "C" BINARYNINJAPLUGIN bool CorePluginInit_arch_x86();

int main(int argc, char** argv)
{
	CorePluginInit_arch_x86();
}