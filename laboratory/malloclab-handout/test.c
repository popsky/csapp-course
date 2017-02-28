#include "memlib.h"
#include "mm.h"
#include "csapp.h"

int main(void)
{
    mem_init();
    int size = 120,i;
    void *bp[size];
    bp[0] = mm_malloc(1016);
    bp[1] = mm_malloc(1016);
    print_free();
    for(i=0;i<2;i++)
        mm_free(bp[i]);
    bp[2] = mm_malloc(4000);
    print_free();
    return 0;
}
