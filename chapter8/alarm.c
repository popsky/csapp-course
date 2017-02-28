#include "csapp.h"
unsigned int snooze(unsigned int sec);

void sigalarm_handler(int sig)
{
    Sio_puts("the time has gone 5s\n");
}

int main(void)
{
    Signal(SIGALRM,sigalarm_handler);
    Alarm(5);
    snooze(5);
    return 0;
}
