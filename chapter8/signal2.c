/* WARNING: This code is buggy! */
#include "csapp.h"

void handler2(int sig)
{
    int olderrno = errno;
    while(waitpid(-1, NULL, 0) > 0)
        Sio_puts("Handler reaped child\n");
    if(errno != ECHILD)
        Sio_error("waitpid error");
    Sleep(1);
    errno = olderrno;
}

int main(void)
{
    int i,n;
    char buf[MAXBUF];

    if(signal(SIGCHLD, handler2) == SIG_ERR)
        unix_error("signal error");

    /* Parent creates children */
    for(i=0; i<3; i++){
        if(Fork() == 0){
            printf("Hello from child %d\n", (int)getpid());
            exit(0);
        }
    }

    /* Parent waits for terminal input and then processes it */
    if((n = read(STDIN_FILENO, buf, sizeof(buf))) < 0)
        unix_error("read");

    printf("Parent processing input\n");
    while(1)
        ;

    return 0;
}
