#include <csapp.h>

int rcnt=0,wcnt=0;
sem_t mutex,r,w,res,tryread;  // All initialy 1

void writer(void){
    while(1){
        P(&w);
        wcnt++;
        if(wcnt == 1)
            P(&tryread);
        V(&w);

        P(&res);

        /* CS: writing happen */

        V(&res);

        P(&w);
        wcnt--;
        if(wcnt == 0)
            V(&tryread);
        V(&w);
    }
}

void reader(void){
    while (1) {
        P(&tryread);
        P(&r);
        rcnt++;
        if(rcnt==1)
            P(&res);
        V(&r);
        V(&tryread);

        /* CS: reading happen */

        P(&r);
        rcnt--;
        if(rcnt==0)
            V(&res);
        V(&r);
    }
}
