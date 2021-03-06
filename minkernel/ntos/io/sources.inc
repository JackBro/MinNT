MAJORCOMP=ntos
MINORCOMP=io

TARGETNAME=io
TARGETTYPE=LIBRARY
TARGETPATH=obj

INCLUDES=..;..\..\inc;$(BASE_INC_PATH)

MIPS_OPTIONS=-nodwalign
GPSIZE=32

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\arcsec.c   \
        ..\assign.c   \
        ..\complete.c \
        ..\create.c   \
        ..\devctrl.c  \
        ..\dir.c      \
        ..\dumpctl.c  \
        ..\errorlog.c \
        ..\filter.c   \
        ..\fsctrl.c   \
        ..\internal.c \
        ..\iodata.c   \
        ..\ioinit.c   \
        ..\iosubs.c   \
        ..\loadunld.c \
        ..\lock.c     \
        ..\misc.c     \
        ..\objsup.c   \
        ..\open.c     \
        ..\parse.c    \
        ..\pnpdata.c  \
        ..\pnpdd.c    \
        ..\pnpinit.c  \
        ..\pnpioapi.c \
        ..\pnpsubs.c  \
        ..\qsea.c     \
        ..\qsfs.c     \
        ..\qsinfo.c   \
        ..\query.c    \
        ..\read.c     \
        ..\report.c   \
        ..\write.c

NTTEST=
OPTIONAL_NTTEST=tio

PRECOMPILED_INCLUDE=..\iop.h
PRECOMPILED_PCH=iop.pch
PRECOMPILED_OBJ=iop.obj

SOURCES_USED=..\sources.inc
