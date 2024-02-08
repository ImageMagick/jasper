
#ifndef JAS_EXPORT_CMAKE_H
#define JAS_EXPORT_CMAKE_H

#if defined(_LIB)
#  define JAS_EXPORT
#  define JAS_LOCAL
#else
#  ifndef JAS_EXPORT
#    if defined(JAS_WIN_MSVC_BUILD)
        /* We are building this library */
#      define JAS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define JAS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef JAS_LOCAL
#    define JAS_LOCAL 
#  endif
#endif

#ifndef LIBJASPER_DEPRECATED
#  define LIBJASPER_DEPRECATED __declspec(deprecated)
#endif

#ifndef LIBJASPER_DEPRECATED_EXPORT
#  define LIBJASPER_DEPRECATED_EXPORT JAS_EXPORT LIBJASPER_DEPRECATED
#endif

#ifndef LIBJASPER_DEPRECATED_NO_EXPORT
#  define LIBJASPER_DEPRECATED_NO_EXPORT JAS_LOCAL LIBJASPER_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef LIBJASPER_NO_DEPRECATED
#    define LIBJASPER_NO_DEPRECATED
#  endif
#endif

#endif /* JAS_EXPORT_CMAKE_H */
