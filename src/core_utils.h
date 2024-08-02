#pragma once

#if defined(_MSC_VER)
#include <intrin.h>
#elif defined(__clang__)
#define __debugbreak() __builtin_debugtrap()
#elif defined(__GNUC__)
#define __debugbreak() __builtin_trap()
#else
#warning Unsupported platform/compiler
#include <signal.h>
#define __debugbreak() raise(SIGTRAP)
#endif // _MSC_VER

#if defined(_MSC_VER)
#define _strdup strdup
#endif // _MSC_VER