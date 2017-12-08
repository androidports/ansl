#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "sys/sem.h"
#include <semaphore.h>

int semget(key_t key, int nsems, int semflg) {
  int oflag;
  char buffer [100];
  if (snprintf(buffer, 100, "%d", key) < 0) {
    return -1;
  }
  if (semflg & IPC_CREAT)
    oflag |= O_CREAT;
  if (semflg & IPC_EXCL)
   oflag |= O_EXCL;
  sem_t* sem = sem_open(buffer, oflag, S_IRUSR | S_IWUSR, nsems);
  if (sem == SEM_FAILED) {
    fprintf(stderr, "semget: sem_open failed\n");
    return -1;
  }
  return (int) sem;
}

int semop(int semid, struct sembuf *sops, size_t nsops) {
  int i, j;
  for (i = 0; i < nsops; i++) {
    if (sops[i].sem_op > 0) {
      for (j = 0; j < sops[i].sem_op; j++)
        if (!sem_post((sem_t*)semid)) {
          fprintf(stderr, "semop: sem_wait failed\n");
          return -1;
        }
    } else if (sops[i].sem_op == 0) {
      if (!sem_wait((sem_t*)semid)) {
        fprintf(stderr, "semop: sem_wait failed\n");
        return -1;
      }
    } else {
      for (j = 0; j < sops[i].sem_op; j++)
        if (!sem_trywait((sem_t*)semid)) {
          fprintf(stderr, "semop: sem_wait failed\n");
          return -1;
        }
    }
  }
  return 0;
}

int semctl(int semid, int semnum, int cmd, ...) {
  if (cmd == IPC_RMID) {
    return sem_close((sem_t*)semid);
  }
  fprintf(stderr, "semctl: unsupported command:%d", cmd);
  return -1;
}

