#include "cachelab.h"
#include "stdio.h"
#include "unistd.h"
#include "getopt.h"
#include "stdlib.h"
#include "fcntl.h"
#include "errno.h"
#include "string.h"

int main(int argc, char **argv)
{
    int i,s,E,b,v = 0,fd;

    while ((i = getopt(argc,argv,"hvs:E:b:t:")) != -1) {
        switch(i){
            case 'h':
                printf("Usage: %s [-hv] -s <num> -E <num> -b <num> -t <file> \n Options: \n -h         Print this help message. \n  -v         Optional verbose flag. \n -s <num>   Number of set index bits. \n -E <num>   Number of lines per set. \n  -b <num>   Number of block offset bits. \n -t <file>  Trace filename. \n Examples: \n linux>  ./csim -s 4 -E 1 -b 4 -t traces/yi.trace \n linux>  ./csim -v -s 8 -E 2 -b 4 -t traces/yi.trace \n",argv[0]);
                return 1;
            case 'v':
                v = 1;
                break;

            case 's':
                s = atoi(optarg);
                break;

            case 'E':
                E = atoi(optarg);
                break;

            case 'b' :
                b = atoi(optarg);
                break;

            case 't':
                if ((fd = open(optarg,O_RDONLY)) == -1);
                printf("%s\n",strerror(errno));
                return -1;
            default:
                fprintf(stderr, "Usage: %s [-hv] -s <num> -E <num> -b <num> -t <file> \n Options: \n -h         Print this help message. \n  -v         Optional verbose flag. \n -s <num>   Number of set index bits. \n -E <num>   Number of lines per set. \n  -b <num>   Number of block offset bits. \n -t <file>  Trace filename. \n Examples: \n linux>  ./csim -s 4 -E 1 -b 4 -t traces/yi.trace \n linux>  ./csim -v -s 8 -E 2 -b 4 -t traces/yi.trace \n", argv[0]);
                return -1;
        }
    }
    fd = 0;
    printf("v = %d s=%d E=%d b=%d fd=%d\n",v,s,E,b,fd);
    printSummary(0, 0, 0);
    return 0;
}
