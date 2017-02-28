#include <csapp.h>

int main(void)
{
    if(Fork() == 0) {
        printf("a");
        fflush(stdout);
    } else {
        printf("b");
        fflush(stdout);
        waitpid(-1, NULL, 0);
    }
    printf("c");
    fflush(stdout);
    return 0;
}
