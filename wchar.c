
#include <wchar.h>

int __wrap_wctomb(char *s, wchar_t wc) { return wcrtomb(s,wc,NULL); }
int __wrap_mbtowc(wchar_t *pwc, const char *s, size_t n) { return mbrtowc(pwc, s, n, NULL); }
int __wrap_mblen(const char *s, size_t n) { return mbrlen(s, n, NULL); }

