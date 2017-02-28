#include "csapp.h"

int main(void)
{
    pid_t pid;
    int x = 1;

    pid = Fork();
    if(pid == 0){  /* Child */
        printf("child : x=%d\n", ++x);
        exit(0);
    }
    /* Parent */
    printf("parent: x=%d\n", --x);
    return 0;
}
