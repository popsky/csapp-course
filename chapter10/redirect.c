#include "csapp.h"

int main(void)
{
    Open("foobar.txt",O_RDONLY, 0);
    Open("foobar.txt",O_RDONLY, 0);
    int fd;
    fd = Open("foobar.txt",O_RDONLY, 0);
    dup2(fd,STDIN_FILENO);
    char buf[10];
    rio_readn(STDIN_FILENO,buf,10);
    printf("read frome fd=%d :%s\n", STDIN_FILENO,buf);
    return 0;
}
