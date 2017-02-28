#include <stdio.h>
#include <unistd.h>

extern char** environ;
int main(int argc, char const* argv[])
{
    int i;
    char **env=environ;
    printf("Commandline arguments:\n");
    for(i=0;i<argc;i++){
        printf("argv[%d]: %s\n", i,argv[i]);
    }
    printf("Environment variables:\n");
    i=0;
    while(env[i] != NULL) {
        printf("evnp[%d]:%s\n",i, env[i++]);
    }
    return 0;
}
