#include "csapp.h"

int main(void)
{
    int fd;
    size_t length;
    char *buf;
    struct stat s;
    fd = Open("hello.txt",O_RDWR, 0);
    Fstat(fd,&s);
    length = s.st_size;
    buf = Mmap(NULL,length,PROT_WRITE,MAP_SHARED,fd,0);
    int i;
    *buf = 'J';
    Munmap(buf,length);
    return 0;
}
