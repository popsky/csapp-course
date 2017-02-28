#include "csapp.h"
sigjmp_buf env;

void tfgets_handler(int sig)
{
    signal(SIGALRM, SIG_DFL);
    siglongjmp(env, 1);

}

char *tfgets(char *buf, int bufsize, FILE *stream)
{
    static const int TimeLimitSecs = 5;
    signal(SIGALRM, tfgets_handler);
    alarm(TimeLimitSecs);
    int rc = sigsetjmp(env, 1);
    if(rc == 0)
        return fgets(buf, bufsize, stream);
    else
        return NULL; //alarm，time out

}

int main(void)
{
    char buf[10];
    if(!tfgets(buf,10,stdin))
        printf("buf = NULL\n");
    else {
        printf("buf = %s\n", buf);
    }
    return 0;
}
