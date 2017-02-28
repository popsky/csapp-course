#include <stdlib.h>

int addcnt = 0;
extern multcnt;

void addvec(int *x, int *y,int *z, int n)
{
    int i;
    addcnt++;
    multcnt++;
    for(i = 0; i < n; i++)
        z[i] = x[i] + y[i];
    printf("123\n");
}
