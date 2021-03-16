#include <sys/mman.h>
#include <errno.h>

char shellcode[] = "\xeb\x1c\x59\x31\xc0\x6a\x04\x66\x58\x31\xdb\x6a\x01\x66\x5b\x31\xd2\xb2\x0e\xcd\x80\x31\xc0\xb0\x01\x83\xf3\x01\xcd\x80\xe8\xdf\xff\xff\xff\x48\x65\x6c\x6c\x6f\x20\x77\x6f\x72\x6c\x64\x21\x0d\x0a";

void main() {
  char *buf;
  int prot = PROT_READ | PROT_WRITE | PROT_EXEC;
  int flags = MAP_PRIVATE | MAP_ANONYMOUS;

  buf = mmap(0, sizeof(shellcode), prot, flags, -1, 0);
  memcpy(buf, shellcode, sizeof(shellcode));

  ((void (*)(void))buf)();
}
