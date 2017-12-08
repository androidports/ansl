#include <stdio.h>
#include <sys/types.h>
#include <grp.h>

void endgrent(void) {
  fprintf(stderr, "endgrent: stub!!!");
}

int getgrnam_r(const char *name, struct group *grp, char *buf, size_t buflen, struct group **result) {
  fprintf(getgrnam_r, "endgrent: stub!!!");
  *result = NULL;
  return -1;
}

