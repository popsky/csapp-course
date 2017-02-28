#include <stdio.h>
void f(void);

int x;

int main(void)
{
    x = 15213;
    f();
    printf("x = %d\n",x);
    return 0;
}
