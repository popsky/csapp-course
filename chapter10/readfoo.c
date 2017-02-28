#include "csapp.h"

int main(void)
{
    size_t max = (unsigned long)-1;
    printf("max = %lx\n", max);
    char s[max];
    int fd;
    fd = Open("foo.txt", O_RDONLY, 0);
    printf("fd = %d\n", fd);
    if(Read(fd,s,max) == 0)
        printf("end of file= %d\n", EOF);
    printf("%s\n", s);
    return 0;
}
