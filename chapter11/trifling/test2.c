#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    FILE* file = popen("ntpdate", "r");
    char buffer[100];
    memset(buffer,0,100);
    fscanf(file, "%100s", buffer);
    pclose(file);
    printf("buffer is :%s\n", buffer);
    return 0;
}
