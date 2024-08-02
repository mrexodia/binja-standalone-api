#pragma once

#include <type_traits>

struct BNRef
{
	int refCount = 1;

	template <typename T>
	static T* Add(T* obj)
	{
		static_assert(std::is_base_of_v<BNRef, T>, "T must be derived from BNRef");
		if (obj)
			obj->refCount++;
		return obj;
	}

	template <typename T>
	static void Release(T* obj)
	{
		static_assert(std::is_base_of_v<BNRef, T>, "T must be derived from BNRef");
		if (obj && --obj->refCount == 0)
			delete obj;
	}
};