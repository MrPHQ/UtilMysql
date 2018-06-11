#ifndef __UTIL_MYSQL__
#define __UTIL_MYSQL__

#ifdef UTIL_MYSQL_EXPORTS
#define UTIL_MYSQL_API extern "C" __declspec(dllexport)
#else
#define UTIL_MYSQL_API extern "C" __declspec(dllimport)	
#endif

#endif