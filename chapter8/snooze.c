#include "csapp.h"
unsigned int snooze(unsigned int);

void sigint_handler(int sig) {
    Sio_puts("received a SIGINT");
}
int main(int argc, char const* argv[])
{
    if(argc < 2)
        return 1;   /* argvgument too few */
    /* Install the SIGINT handler */
    if(signal(SIGINT, sigint_handler) == SIG_ERR)
        unix_error("signal error");
    sigset_t sig,old_sig;
    sigemptyset(&sig);
    sigaddset(&sig,SIGINT);
    sigprocmask(SIG_BLOCK,&sig,&old_sig);
    snooze(atoi(argv[1]));
    sigprocmask(SIG_SETMASK,&old_sig,NULL);
    printf("unblock sigint\n");
    snooze(3);
    return 0;
}
