#include <csapp.h>
#define MAXARG 20

int main(int argc, char const* argv[])
{
    char *cmd, *cmdarg[MAXARG],content[MAXBUF];
    char *buf, *ptr, *prog;
    int i=1;
    if((buf = getenv("QUERY_STRING")) != NULL){
        ptr = index(buf,'&');
        prog = rindex(buf,'/');   // 可执行文件名，提供给execve参数列表的第一个参数
        prog++;
        cmd = buf;     // 可执行文件路径
        cmdarg[0] = prog;
        cmdarg[1] = NULL;
        if(ptr) {
            *ptr = '\0';
            buf = ++ptr;
            while((ptr = index(ptr,'&'))){
                *ptr = '\0';
                cmdarg[i++] = buf;
                buf = ++ptr;
            }
            cmdarg[i++] = buf;
            cmdarg[i] = NULL;
        }
    } else {   // 默认执行 ls
        cmd = "/bin/ls";
        cmdarg[0] = "ls";
        cmdarg[1] = NULL;
    }

    /* Make a respose body */
    sprintf(content,"Welcome to Trifling Runer:");
    sprintf(content,"%sYou can run the program in server you want,hope have fun!\r\n<p>",content);
    sprintf(content,"%sStart run program: %s \r\n",content,cmd);

    /* Generate the respose header */
    printf("Connection: close\r\n");
    printf("Content-length: %d\r\n",(int)strlen(content));
    printf("Content-type: text/html\r\n\r\n");
    printf("%s",content);

    if(Fork() == 0){  // Child
        Execve(cmd,cmdarg,environ);
    }
    Wait(NULL);  // Parent waits for and reaps the child
    return 0;
}
