#include "stdlib.h"
#include "stdio.h"
int main(void)
{
    int *buf,i;
    buf = (int *)malloc(7);
    printf("addr = %p\n", buf);
    free(buf);
    return 0;
}
