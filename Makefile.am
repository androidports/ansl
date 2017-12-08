
lib_LIBRARIES=libansl.a libpthread.a librt.a
libansl_a_SOURCES=wchar.c locale.c fplutil/print.c atexit.c shm.c pwd.c grp.c crypt.c sem.c
libansl_a_LIBADD=$(LIBS)
libpthread_a_SOURCES=pthread.c
librt_a_SOURCES=rt.c
nobase_include_HEADERS = sys/shm.h sys/sem.h
pkgconfigdir = @libdir@/pkgconfig
pkgconfig_DATA = zlib.pc

