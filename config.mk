# Sibble Version
VERSION = 0.0

# INCS / LIBS
INCS = -I. -I${GUIX_ENVIRONMENT}/include

# Flags
CPPFLAGS = -DVERSION=\"${VERSION}\" -D_DEFAULT_SOURCE -DHAVE_SHADOW_H
CFLAGS = -std=c11 -pedantic -Wall -Os ${INCS} ${CPPFLAGS}

# Compiler & Linker
CC = gcc
