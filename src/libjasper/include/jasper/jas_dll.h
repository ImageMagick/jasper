#ifndef JAS_DLL_H
#define JAS_DLL_H

#if defined(JAS_DLL)
  # if defined(_DLL) && !defined(_LIB)
  #   if !defined(JAS_WIN_MSVC_BUILD)
  #     define JAS_DLLEXPORT __declspec(dllimport)
  #   else
  #     define JAS_DLLEXPORT __declspec(dllexport)
  #   endif
  # else
  #   define JAS_EXPORT
  # endif
  # define JAS_DLLLOCAL

#else
	#define JAS_DLLEXPORT
	#define JAS_DLLLOCAL
#endif

#endif
