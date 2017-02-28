#include "csapp.h"
#define BUFSIZE 10
int main(void)
{
    char buf[BUFSIZE];
    fgets(buf,BUFSIZE,stdin);
    printf("\nread %s\n",buf);
    return 0;
}
