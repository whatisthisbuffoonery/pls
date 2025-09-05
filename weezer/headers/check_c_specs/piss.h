#ifndef CHECK_STDC_MACROS_H
#define CHECK_STDC_MACROS_H

#include <stdio.h>

static inline void check_stdc_macros(void) {
#ifdef __STDC_ISO_10646__
    printf("__STDC_ISO_10646__: defined with value %ld\n", (long)__STDC_ISO_10646__);
#else
    printf("__STDC_ISO_10646__: not defined\n");
#endif

#ifdef __STDC_MB_MIGHT_NEQ_WC__
    printf("__STDC_MB_MIGHT_NEQ_WC__: defined with value %d\n", __STDC_MB_MIGHT_NEQ_WC__);
#else
    printf("__STDC_MB_MIGHT_NEQ_WC__: not defined\n");
#endif

#ifdef __STDC_UTF_16__
    printf("__STDC_UTF_16__: defined with value %d\n", __STDC_UTF_16__);
#else
    printf("__STDC_UTF_16__: not defined\n");
#endif

#ifdef __STDC_UTF_32__
    printf("__STDC_UTF_32__: defined with value %d\n", __STDC_UTF_32__);
#else
    printf("__STDC_UTF_32__: not defined\n");
#endif

#ifdef __STDC_ANALYZABLE__
    printf("__STDC_ANALYZABLE__: defined with value %d\n", __STDC_ANALYZABLE__);
#else
    printf("__STDC_ANALYZABLE__: not defined\n");
#endif

#ifdef __STDC_IEC_559__
    printf("__STDC_IEC_559__: defined with value %d\n", __STDC_IEC_559__);
#else
    printf("__STDC_IEC_559__: not defined\n");
#endif

#ifdef __STDC_IEC_559_COMPLEX__
    printf("__STDC_IEC_559_COMPLEX__: defined with value %d\n", __STDC_IEC_559_COMPLEX__);
#else
    printf("__STDC_IEC_559_COMPLEX__: not defined\n");
#endif

#ifdef __STDC_LIB_EXT1__
    printf("__STDC_LIB_EXT1__: defined with value %d\n", __STDC_LIB_EXT1__);
#else
    printf("__STDC_LIB_EXT1__: not defined\n");
#endif

#ifdef __STDC_NO_ATOMICS__
    printf("__STDC_NO_ATOMICS__: defined with value %d\n", __STDC_NO_ATOMICS__);
#else
    printf("__STDC_NO_ATOMICS__: not defined\n");
#endif

#ifdef __STDC_NO_COMPLEX__
    printf("__STDC_NO_COMPLEX__: defined with value %d\n", __STDC_NO_COMPLEX__);
#else
    printf("__STDC_NO_COMPLEX__: not defined\n");
#endif

#ifdef __STDC_NO_THREADS__
    printf("__STDC_NO_THREADS__: defined with value %d\n", __STDC_NO_THREADS__);
#else
    printf("__STDC_NO_THREADS__: not defined\n");
#endif

#ifdef __STDC_NO_VLA__
    printf("__STDC_NO_VLA__: defined with value %d\n", __STDC_NO_VLA__);
#else
    printf("__STDC_NO_VLA__: not defined\n");
#endif
}

#endif // CHECK_STDC_MACROS_H

