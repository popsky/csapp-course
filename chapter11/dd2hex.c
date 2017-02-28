#include <arpa/inet.h>

int main(int argc, char const* argv[])
{
    if(argc != 2){
        printf("usage: %s <ddd.ddd.ddd.ddd>\n",argv[0]);
        exit(0);
    }

    unsigned int inet;
    if(inet_pton(AF_INET,argv[1],&inet) == 1)
        printf("Ox%x\n", inet);
    return 0;
}
