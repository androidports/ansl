
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

char* __real_setlocale(int, const char*);

static struct lconv* g_lconv = NULL;

struct lconv* __wrap_localeconv(void) {
    if (!g_lconv) {
        g_lconv = malloc(sizeof(struct lconv));
        struct lconv l = { ".", "", "", "", "", "", "", "", "", "", UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX };
        *g_lconv = l;;
    }
    return g_lconv;
}

char* __wrap_setlocale(int category, const char* locale) {
    char* ret = __real_setlocale(category, locale);
    if (!ret) {
        ret = getenv("LANG");
    }
    return ret;
}

