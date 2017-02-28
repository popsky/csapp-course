#include <csapp.h>

unsigned int snooze(unsigned int secs) {
    unsigned int slept;
    slept = sleep(secs);
    printf("Slept for %u of %u\n",(secs - slept),secs);
    return slept;
}

