/*************************************************************************
    > File Name: 5.17.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年07月19日 星期二 16时48分51秒
 ************************************************************************/

#include<stdio.h>
void *word_memset(void *s, int c, size_t n) {
	unsigned char *schar = s;
	int i;
	size_t cnt = 0;
	size_t wsize = sizeof(unsigned long);
	unsigned long word;
	unsigned char* byte = &word;
	for(i = 0; i < wsize; i++) {
		*byte++ = (unsigned char)c;
	}
	while(((size_t)s) % wsize != 0 && cnt < n) {
		*schar++ = (unsigned char) c;
		cnt++;
	}
	if(n >= wsize) {
		size_t limit= n - wsize + 1;
		while(cnt < limit) {
			*((unsigned long *)schar) = word;
			cnt += wsize;
		}
	}

	for(cnt < n) {
		*schar++ = (unsigned char) c;
		cnt ++;
	}

	return s;

}
