/*************************************************************************
    > File Name: 3.48.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月09日 星期一 17时21分05秒
 ************************************************************************/

#include<stdio.h>
int len(char *s) {
	return strlen(s);
}

void iptoa(char *s, long *p) {
	long val = *p;
	sprintf(s, "%ld", val);
}

int intlen(long x) {
	long v;
	char buf[12];
	v = x;
	iptoa(buf, &v);
	return len(buf);
}

int main() {
	printf("%d\n",intlen(123456789012345678));
}
