#pragma once

#include <string.h>

#include "binaryninjacore.h"

BINARYNINJACOREAPI char* BNAllocString(const char* contents)
{
	return strdup(contents);
}

BINARYNINJACOREAPI void BNFreeString(char* str)
{
	free(str);
}

BINARYNINJACOREAPI char** BNAllocStringList(const char** contents, size_t size)
{
	char** result = (char**)malloc(size * sizeof(char*));
	for (size_t i = 0; i < size; i++)
		result[i] = BNAllocString(contents[i]);
	return result;
}
BINARYNINJACOREAPI void BNFreeStringList(char** strs, size_t count)
{
	for (size_t i = 0; i < count; i++)
		BNFreeString(strs[i]);
	free(strs);
}