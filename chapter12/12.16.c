#include <csapp.h>

void *thread(void *);

int main(int argc, char const* argv[])
{
    if(argc != 2){
        printf("usage: %s <thread_num>\n", argv[0]);
        exit(0);
    }

    pthread_t *tidp;
    unsigned i,tn = (unsigned)atoi(argv[1]);
    printf("tn:%u\n", tn);
    tidp = (pthread_t *)Malloc(tn * sizeof(pthread_t));

    for(i=0; i<tn; i++) {
        Pthread_create(&tidp[i],NULL,thread,(void *)i);
    }

    for(i=0; i<tn; i++){
        Pthread_join(tidp[i],NULL);
    }

    return 0;
}

void *thread(void *arg){
    printf("%d:Hello, world!\n", (int)arg);
}
