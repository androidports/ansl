
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

static struct lconv* g_lconv = NULL;

struct lconv* localeconv(void) {
    if (!g_lconv) {
        g_lconv = malloc(sizeof(struct lconv));
        struct lconv l = { ".", "", "", "", "", "", "", "", "", "", UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX };
        *g_lconv = l;;
    }
    return g_lconv;
}
