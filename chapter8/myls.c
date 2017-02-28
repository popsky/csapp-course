#include <csapp.h>

int main(int argc, char const* argv[],char * env[])
{
    printf("COLUMNS = %d\n", atoi(getenv("COLUMNS")));
    if(execve("/bin/ls",argv,env) == -1)
        unix_error("execve error");
    return 0;
}
