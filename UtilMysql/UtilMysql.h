#ifndef __UTIL_MYSQL__
#define __UTIL_MYSQL__

#include <UtilMysql/config.h>
#include <UtilMysql/define.h>
#include <UtilMysql/UtilMysqlDefine.h>

# if defined(BUILDING_UTIL_MYSQL_SHARED)
    /* Building shared library. */
#   define UTIL_MYSQL_EXTERN __declspec(dllexport)
# elif defined(USING_UTIL_MYSQL_SHARED)
    /* Using shared library. */
#   define UTIL_MYSQL_EXTERN __declspec(dllimport)
# else
    /* Building static library. */
#   define UTIL_MYSQL_EXTERN /* nothing */
# endif

#endif