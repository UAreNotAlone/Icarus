#pragma once


#ifdef IC_PLATFORM_WINDOWS
  #ifdef IC_BUILD_DLL
   #define ICARUS_API __declspec(dllexport)
#else
   #define ICARUS_API __declspec(dllimport)
  #endif // IC_BUILD_DLL
#else
  #error Icarus only support windows !
#endif