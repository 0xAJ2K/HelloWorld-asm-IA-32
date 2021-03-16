#!/bin/bash

echo "Building..."

nasm -f elf32 -o hello.o hello.asm
ld -o hello hello.o

printf "Running...\n\n"

./hello
