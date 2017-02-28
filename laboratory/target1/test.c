#include <stdio.h>
#include <string.h>

int main() {
    unsigned val = 0x59b997fa;
    char cbuf[20];
    sprintf(cbuf,"%.8x",val);
    size_t len = strlen(cbuf);
    size_t i;
    for(i=0; i < len; i++) {
        printf("%d ",cbuf[i]);
    }
}
