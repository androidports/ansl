#include <sys/shm.h>
#include <sys/mman.h>
#include <errno.h>

int shmget(key_t key, size_t size, int shmflg) {
  // only IPC_PRIVATE supported now
  if (key != IPC_PRIVATE) {
    errno = EINVAL;
    return -1;
  }
  void* addr = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
  if (addr == MAP_FAILED) {
    errno = ENOMEM;
    return -1;
  }
  return (int) addr;
}

void *shmat(int shmid, const void *shmaddr, int shmflg) {
  return (void*) shmid;
}

int shmdt(const void *shmaddr) {
  return munmap(shmaddr, 0);
}

int shmctl(int shmid, int cmd, void *buf) {
  return munmap((void*) shmid, 0);
}

