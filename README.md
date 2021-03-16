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

# ~~~~~~~ RAW SHELLCODE 

```
\xeb\x1c\x59\x31\xc0\x6a\x04\x66\x58\x31\xdb\x6a\x01\x66\x5b\x31\xd2\xb2\x0e\xcd\x80\x31\xc0\xb0\x01\x83\xf3\x01\xcd\x80\xe8\xdf\xff\xff\xff\x48\x65\x6c\x6c\x6f\x20\x77\x6f\x72\x6c\x64\x21\x0d\x0a
```
