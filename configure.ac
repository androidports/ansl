#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([ansl], [1.0], [androidports@users.noreply.github.com])
AM_INIT_AUTOMAKE(ansl, 1.0)
AC_CONFIG_SRCDIR([wchar.c])
AC_CONFIG_HEADERS([config.h])

# Parameters
AC_ARG_ENABLE([wchar],AS_HELP_STRING([--enable-wchar],[Enable wchar functions]),,enable_wchar=no)
AC_ARG_ENABLE([locale],AS_HELP_STRING([--enable-locale],[Enable locale functions]),,enable_locale=no)
AC_ARG_ENABLE([fplutil],AS_HELP_STRING([--enable-fplutil],[Enable fplutil functions]),,enable_fplutil=no)
AC_ARG_ENABLE([atexit],AS_HELP_STRING([--enable-atexit],[Enable atexit functions]),,enable_atexit=no)
AC_ARG_ENABLE([shm],AS_HELP_STRING([--enable-shm],[Enable shm functions]),,enable_shm=no)
AC_ARG_ENABLE([pwd],AS_HELP_STRING([--enable-pwd],[Enable pwd functions]),,enable_pwd=no)
AC_ARG_ENABLE([grp],AS_HELP_STRING([--enable-grp],[Enable grp functions]),,enable_grp=no)
AC_ARG_ENABLE([crypt],AS_HELP_STRING([--enable-crypt],[Enable crypt functions]),,enable_crypt=no)
AC_ARG_ENABLE([sem],AS_HELP_STRING([--enable-sem],[Enable sem functions]),,enable_sem=no)

# For Makefile.am
AM_CONDITIONAL([ENABLE_WCHAR],[test x$enable_wchar = xyes])
AM_CONDITIONAL([ENABLE_LOCALE],[test x$enable_locale = xyes])
AM_CONDITIONAL([ENABLE_FPLUTIL],[test x$enable_fplutil = xyes])
AM_CONDITIONAL([ENABLE_ATEXIT],[test x$enable_atexit = xyes])
AM_CONDITIONAL([ENABLE_SHM],[test x$enable_shm = xyes])
AM_CONDITIONAL([ENABLE_PWD],[test x$enable_pwd = xyes])
AM_CONDITIONAL([ENABLE_GRP],[test x$enable_grp = xyes])
AM_CONDITIONAL([ENABLE_CRYPT],[test x$enable_crypt = xyes])
AM_CONDITIONAL([ENABLE_SEM],[test x$enable_sem = xyes])

# Checks for programs.
AC_PROG_CC
AC_PROG_RANLIB

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([wchar.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_MBRTOWC
AC_CHECK_FUNCS([mblen mbrlen])

AC_SUBST(NDK_TOOLCHAIN_PATH,$NDK_TOOLCHAIN_PATH)

AC_CONFIG_FILES([Makefile zlib.pc:zlib.pc.in])
AC_OUTPUT
