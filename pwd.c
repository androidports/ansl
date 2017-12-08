#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>

struct passwd *getpwent(void) {
  fprintf(stderr, "getpwent: stub!!!");
  return 0;
}

int setpwent(void) {
  fprintf(stderr, "setpwent: stub!!!");
  return 0;
}

void endpwent(void) {
  fprintf(stderr, "endpwent: stub!!!");
}

