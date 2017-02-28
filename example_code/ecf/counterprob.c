/* $begin counterprob */
#include "csapp.h"

int counter = 0;
pid_t pid;

void handler(int sig)
{
    counter++;
    sleep(1); /* Do some work in the handler */
    kill(pid,SIGUSR1);
    return;
}
void sigusr2_handler(int sig) {
    return ;
}
int main()
{
    int i;

    Signal(SIGUSR2, handler);

    if ((pid = Fork())== 0) {  /* Child */
    sigset_t mask,prav;
    Signal(SIGUSR1,sigusr2_handler);
    Sigfillset(&mask);
    Sigdelset(&mask,SIGUSR1);
	for (i = 0; i < 5; i++) {
	    Kill(getppid(), SIGUSR2);
	    printf("sent SIGUSR2 to parent\n");
        Sigsuspend(&mask);

	}
	exit(0);
    }

    Wait(NULL);
    printf("counter=%d\n", counter);
    exit(0);
}
/* $end counterprob */
