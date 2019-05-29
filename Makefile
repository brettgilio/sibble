include config.mk

SRC = sibble.c
OBJ = ${SRC:.c=.o}

all: options sibble

options:
	@echo Sibble builder:
	@echo "CFLAGS = ${CFLAGS}"
	@echo "CC = ${CC}"

${OBJ}: sibble.c

sibble: ${OBJ}
	@echo CC -o $@
	@${CC} -o $@ ${OBJ}

clean:
	@echo Cleaning the directory...
	@rm -f sibble
