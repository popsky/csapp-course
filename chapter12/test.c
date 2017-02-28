#include <csapp.h>
#define TNUMBER 2

void *gethost(void *name);
int main(int argc, char const* argv[])
{
    int i;
    pthread_t tid[TNUMBER];
    for(i=0;i < TNUMBER;i++){
        Pthread_create(&tid[i],NULL,gethost,argv[i+1]);
    }
    for(i=0;i<TNUMBER;i++)
        Pthread_join(tid[i],NULL);
}

void *gethost(void *name){
    struct hostent *p;
    p = gethostbyname(name);
    printf("%s", p->h_name);
}

