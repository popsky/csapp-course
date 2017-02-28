#include "csapp.h"
#define MAXCMD 20
extern char ** envpviron;

int mysystem(char *command)
{
    pid_t pid;
    int state,i;
    char * argv[4] = {"sh","-c",command,NULL};
    if((pid = Fork()) == 0){  // child
        execve("/bin/sh",argv,environ);
        unix_error("execve error");
        exit(1);
    }
    // parent
    if(Wait(&state) < 0)
        unix_error("wait error");
    if(WIFEXITED(state))
        return WEXITSTATUS(state);  // command exit normally

    return state;  // command exit abnormaly
}

int main(int argc, char **argv,char **envp)
{
    if(argc < 2)
        app_error("usage: mysystem command");
    int i,j;
    char command[MAXCMD];
    for(i=1,j=0;i<argc;i++) {
        char *s = argv[i];
        while(*s != '\0'){
            command[j] = *s;
            s++;
            j++;
        }
        command[j] = ' ';
        j++;
    }
    command[j] = '\0';
    mysystem(command);
    return 0;
}
