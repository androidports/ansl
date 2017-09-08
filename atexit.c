#include <stdlib.h>

int __real_atexit(void (*)(void));

int __wrap_atexit(void (*f)(void)) {
  return __real_atexit(f);
}
