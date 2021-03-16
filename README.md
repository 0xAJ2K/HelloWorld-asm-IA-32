# ~~~~~~~ COMPILE ASM

> Get assembly executable, for IA-32

```bash
nasm -f elf32 -o hello.o hello.asm
ld -o hello hello.o
```

# ~~~~~~~ COMPILE C

> Get Elf 32 bit executable

```bash
gcc -m32 -g -fno-stack-protector -z execstack -o exec-shellcode shellcode.c -w
```