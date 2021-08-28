#ifndef GLOBAL_DEFINES_H
#define GLOBAL_DEFINES_H

#if defined(JCBLOGGER_EXPORTS)
#define LOG_UTIL_EXPORT __declspec(dllexport)
#else
#define LOG_UTIL_EXPORT __declspec(dllimport)
#endif

#endif // GLOBAL_DEFINES_H
