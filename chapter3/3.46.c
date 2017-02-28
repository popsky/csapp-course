/*************************************************************************
    > File Name: 3.46.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月08日 星期日 20时57分22秒
 ************************************************************************/

#include<stdio.h>
/* This is very low-quality code,
 * It is intended to illustrate bad progranmming practices.
 * See Practice Problem 3.46. 
 */

char *get_line() {
	char buf[4];
	char *result;
	gets(buf);
	result = malloc(strlen(buf));
	strcpy(result,buf);
	return result;
}
int main() {
	get_line();
}
