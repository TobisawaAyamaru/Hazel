#pragma once

#ifdef HZ_PLATFORM_WINDOWS
   #ifdef HZ_BUILD_DLL
       #define HAZEL_API _declspec(dllexport) 
   #else
       #define HAZEL_API _declspec(dllimport) 
   #endif
#else
   #error Hazel only support Windows!
#endif 


#ifdef HZ_ENABLE_ASSERTS
   #define HZ_ASSERT(...) HZ_EXPAND_MACRO( HZ_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_, __VA_ARGS__) )
   #define HZ_CORE_ASSERT(...) HZ_EXPAND_MACRO( HZ_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_CORE_, __VA_ARGS__) )
#else
   #define HZ_ASSERT(...)
   #define HZ_CORE_ASSERT(...)
#endif



#define BIT(x)(1<<x)
