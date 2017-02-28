/* $begin sharing */
#include "csapp.h"
#define N 1000
void *thread(void *vargp);

char **ptr;  /* Global variable */ //line:conc:sharing:ptrdec
volatile int cnt = 0;

int main()
{
    int i;
    pthread_t tid;
    char *msgs[N] = {
	"Hello from foo",
	"Hello from bar"
    };

    ptr = msgs;
    for (i = 0; i < N; i++)
        Pthread_create(&tid, NULL, thread, (void *)i);
    int n = N;
    if(cnt != N)
        printf("N = %d,cnt = %d\n", n,cnt);
    Pthread_exit(NULL);
}

void *thread(void *vargp)
{
    int myid = (int)vargp;
    //static int cnt = 0; //line:conc:sharing:cntdec
    //printf("[%d]: %s (cnt=%d)\n", myid, ptr[myid], ++cnt); //line:conc:sharing:stack
    ++cnt;
    return NULL;
}
/* $end sharing */
