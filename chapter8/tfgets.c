#include "csapp.h"
#define BUFSIZE 10

volatile int count;
jmp_buf env;
void sigalrm_handler(int sig)
{
    Sio_putl(count);
    if(!count)
        longjmp(env,1);
    return;
}

char *tfgets(char *str, int size, FILE *stream)
{
    count= 0;
    char *s = str;
    Alarm(5);
    switch(setjmp(env))
    {
        case 0:
            Signal(SIGALRM,sigalrm_handler);
            break;
        case 1:
            printf("time out and count = %d\n", count);
            return NULL;
            break;
    }
    while(count != size-1) {
        *s = (char)getc(stream);
        if(*s == EOF)
            break;
        if(*s == '\n') {
            s++;
            break;
        }
        s++;
        count++;
        printf("count = %d\n", count);
    }
    *s = '\0';
    return str;
}

int main(void)
{
    char str[BUFSIZE];
    if(tfgets(str,BUFSIZE,stdin)== NULL)
        printf("str = null\n");
    else
        printf("str = %s\n", str);
    return 0;
}
