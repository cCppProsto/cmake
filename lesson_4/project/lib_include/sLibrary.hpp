#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#if defined(_WIN32) || defined(_WIN64)

  #define MYLIB_EXPORT __declspec(dllexport)
  #define MYLIB_IMPORT __declspec(dllimport)

#else
  #define MYLIB_EXPORT __attribute__((visibility("default")))
  #define MYLIB_IMPORT __attribute__((visibility("default")))
  #define MYLIB_HIDDEN __attribute__((visibility("hidden")))
#endif

struct MYLIB_IMPORT sLibrary
{
  void print_info();
};


#endif /* _LIBRARY_H_ */
