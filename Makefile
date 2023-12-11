CFLAGS=-Wall -Werror -Wextra -std=c17

build:
	gcc ${CFLAGS} tcp-server.c -o server


all:
	style

style:
	clang-format --style=Google -i *.c *.h
