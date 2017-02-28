#include <arpa/inet.h>
#include <stdlib.h>
int main(int argc, char const* argv[])
{
    if(argc != 2){
        printf("usage: %s <0xnumber>\n",argv[0]);
        exit(0);
    }
    unsigned int src = (unsigned)strtol(argv[1],NULL,16);
    char buf[INET_ADDRSTRLEN+1];
    if(inet_ntop(AF_INET,&src,buf,INET_ADDRSTRLEN) != NULL){
        buf[INET_ADDRSTRLEN] = NULL;
        printf("%s\n", buf);
    }
    return 0;
}
