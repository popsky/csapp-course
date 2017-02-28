/*************************************************************************
    > File Name: read.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月08日 星期日 11时11分53秒
 ************************************************************************/

#include<stdio.h>
/* Implementation of library function gets() */
char *gets(char *s) {
	int c;
	char *dest = s;
	while((c = getchar()) != '\n' && c != EOF)
		*dest++ = c;
	if(c == EOF && dest == s) 
		/* No characters read */
		return NULL;
	*dest++ = '\0'; /* Terminate string */
	return s;
}

/* Read input line and write it back */
void echo() {
	char buf[8]; /* Way too small! */
	gets(buf);
	puts(buf);
}

void g_echo() {
	char buf[20];
	while((fgets(buf,sizeof(buf),stdin) != NULL) && buf[0]!='\n') {
		printf("%s",buf);
	}
}

int main() {
	g_echo();
	//echo();
}

