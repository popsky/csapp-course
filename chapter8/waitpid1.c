#include <csapp.h>
#define N 2

int main(void)
{
    int status, i, *p;
    p = (int *) 0x400930;  /* 0x400930 is a position in read-only text segment */
    pid_t pid;
    /* Parent creates N children */
    for (i = 0; i < N; i++) {
        if((pid = Fork()) == 0) {/* Child */
            *p = 1200;          /* Write to read-only text position */
        }
    }

    /* Parent reaps N children in no particular order */
    while ((pid = waitpid(-1, &status, 0)) > 0) {
        if(WIFEXITED(status))
            printf("child %d terminated normally with exit status=%d\n", pid, WEXITSTATUS(status));
        else if(WIFSIGNALED(status)) {
            char* s[40];
            sprintf(s,"child %d terminated by signal %d",pid,WTERMSIG(status));
            psignal(WTERMSIG(status),s);
        }
    }

    /* The only normal termination is if there are no more children */
    if(errno != ECHILD)
        unix_error("waitpid error");

    exit(0);
}
