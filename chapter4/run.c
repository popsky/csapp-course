/*************************************************************************
    > File Name: run.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月31日 星期二 10时20分44秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main(int argc, char** argv) {
	execl("./sim/pipe/psim",argv[1],"-g",argv[1],NULL);
}
