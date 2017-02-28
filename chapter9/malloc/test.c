#include "mm.h"
#include <stdlib.h>

int main(void)
{
    void *bp;
    int i;
    mem_init();
    for(i=0;i<100;i++) {
        bp = mm_malloc(i+1);
        printf("malloc block %p\n", bp);
    }
    return 0;
}
