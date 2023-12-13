CFLAGS=-Wall -Werror -Wextra -std=c17

all:
	style

build:
	g++ http-tcp-server.cc server_linux.cc -o server


style:
	clang-format --style=Google -i *.cc *.h
