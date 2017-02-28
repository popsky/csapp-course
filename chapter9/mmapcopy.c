#include "csapp.h"

void sigint_handler(int sig)
{
    Sio_puts("cougth the SIGINT");
    exit(0);
}
int main(int argc, char const* argv[])
{
    sigset_t mask;
    Sigfillset(&mask);
    Sigdelset(&mask,SIGINT);
    Signal(SIGINT,sigint_handler);
    int fd,offset,length;
    struct stat s;
    char *buf;
    if(argc != 4)
        app_error("usage:Mmapcopy filename offset length.");
    fd = Open(argv[1],O_RDWR,0);   // Open时若没指定该权限，mmap是无法成功映射的。如open时没有指定write，那么mmap就不能将area映射程可写
    Fstat(fd,&s);
    length = atoi(argv[3]);
    offset = atoi(argv[2]) & ~(sysconf(_SC_PAGE_SIZE)-1);  // offset for mmap must be page size aligned
    if(offset > s.st_size)
        app_error("offset past is past end of file.");
    if((offset + length) > s.st_size)
        length = s.st_size - offset;
    buf = Mmap(buf,length,PROT_WRITE | PROT_READ,MAP_PRIVATE,fd,offset);
    printf("area star at %p\n", buf);
    write(STDOUT_FILENO,buf,length);
    int i;
    for (i=0;i<length;i++)
        buf[i] = 'i';   // 映射私有的，对vm写入是不会写入源文件中，如果该文件映射程share，那么写入是会写入到file
    Sigsuspend(&mask);	// 暂停等待ctrl+c，以便观察映射情况。
    return 0;
}
