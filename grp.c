#include <stdio.h>
#include <sys/types.h>
#include <grp.h>

void endgrent(void) {
  fprintf(stderr, "endgrent: stub!!!");
}

int getgrnam_r(const char *name, struct group *grp, char *buf, size_t buflen, struct group **result) {
  fprintf(stderr, "getgrnam_r: stub!!!");
  *result = NULL;
  return -1;
}

int getgrgid_r(gid_t gid, struct group *grp, char *buf, size_t buflen, struct group **result) {
  fprintf(stderr, "getgrnam_r: stub!!!");
  *result = NULL;
  return -1;
}

