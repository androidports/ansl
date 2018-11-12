
lib_LIBRARIES=libansl.a libpthread.a librt.a

libansl_a_SOURCES=
nobase_include_HEADERS=

if ENABLE_WCHAR
libansl_a_SOURCES+=wchar.c
endif

if ENABLE_LOCALE
libansl_a_SOURCES+=locale.c
endif

if ENABLE_FPLUTIL
libansl_a_SOURCES+=fplutil/print.c
endif

if ENABLE_ATEXIT
libansl_a_SOURCES+=atexit.c
endif

if ENABLE_SHM
libansl_a_SOURCES+=shm.c
nobase_include_HEADERS+=sys/shm.h
endif

if ENABLE_PWD
libansl_a_SOURCES+=pwd.c
endif

if ENABLE_GRP
libansl_a_SOURCES+=grp.c
endif

if ENABLE_CRYPT
libansl_a_SOURCES+=crypt.c
endif

if ENABLE_SEM
libansl_a_SOURCES+=sem.c
nobase_include_HEADERS+=sys/sem.h
endif

libansl_a_LIBADD=$(LIBS)
libpthread_a_SOURCES=pthread.c
librt_a_SOURCES=rt.c
pkgconfigdir = @libdir@/pkgconfig
pkgconfig_DATA = zlib.pc

