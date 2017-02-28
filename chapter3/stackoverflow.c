/*************************************************************************
    > File Name: stackoverflow.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年06月13日 星期一 09时13分15秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void foo(char *bar) {
	char c[12];
	strcpy(c,bar);
}

int main(int argc, char **argv) {
	foo(argv[1]);
}
