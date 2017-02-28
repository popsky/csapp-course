#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const* argv[], char const* envp[])
{
    int i;
    i=0;
    printf("Commandline arguments:\n");
    while (argv[i] != NULL) {
        printf("argv[%d]: %s\n",i,argv[i]);
        i++;
    }
    printf("\n");
    i=0;
    printf("Environment variables:\n");
    while(envp[i] != NULL){
        printf("envp[%2d]:%s\n",i,envp[i] );
        i++;
    }
    return 0;
}
