#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([ansl], [1.0], [androidports@users.noreply.github.com])
AM_INIT_AUTOMAKE(ansl, 1.0)
AC_CONFIG_SRCDIR([wchar.c])
AC_CONFIG_HEADERS([config.h])

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

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
