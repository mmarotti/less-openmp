CC = gcc
SRC = src/*.c

check:
	${CC} ${SRC} -fsyntax-only -Wall

release:
	mkdir -p build/release
	${CC} ${SRC} -Wall -o build/release/main -fopenmp

run: release
	./build/release/main -fopenmp