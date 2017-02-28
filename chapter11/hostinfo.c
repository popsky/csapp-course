#include <csapp.h>

int main(int argc,char **argv)
{
    struct addrinfo *p,*listp, hints;
    char buf[20];

    if(argc != 2){
        fprintf(stderr, "usage:%s <domain name>\n",argv[0]);
        exit(0);
    }

    memset(&hints,0,sizeof(struct addrinfo));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;
    Getaddrinfo(NULL,"80",&hints,&listp);

    for(p=listp;p;p=p->ai_next){
        Inet_ntop(p->ai_family,&(((struct sockaddr_in *)(p->ai_addr))->sin_addr),buf,16);
        printf("%s\n", buf);
    }

    Freeaddrinfo(listp);

    return 0;
}
