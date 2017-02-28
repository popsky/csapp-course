#include "csapp.h"

int main(void)
{
    FILE *file;
    file = fopen("foobar.txt","r+");
    char buf[20];
    buf[0] = '0';
    buf[1] = '1';
    buf[2] = '2';
    buf[3] = '3';
    buf[4] = '4';
    buf[5] = '5';
    buf[6] = '6';
    buf[7] = '7';
    buf[8] = '8';
    buf[9] = '9';
    //fflush(file);
    printf("has read %d char\n",fread(buf,1,5,file));
    rewind(file);
    fwrite(buf,1,10,file);
    printf("buf = %s\n", buf);
    return 0;
}


