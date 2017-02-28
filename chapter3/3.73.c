/*************************************************************************
    > File Name: 3.73.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月18日 星期三 10时23分34秒
 ************************************************************************/

#include<stdio.h>

typedef enum {NEG, ZERO, POS, OTHER} range_t;
range_t find_range(float x);

range_t find_range2(float x) {
	range_t result;
	unsigned char cf,zf,pf;
	asm (
			"xorps %%xmm1,%%xmm1	# %%xmm1 = 0\n\t"
			"ucomiss %[x], %%xmm1	# Compare 0:x\n\t"
			"setp %[p]	\n\t"
			"setb %[c]	\n\t"
			"sete %[z]  \n\t"
			: [c] "=r" (cf), [z] "=r" (zf), [p] "=r" (pf)
			: [x] "x" (x)
			);
	result = NEG;
	if(pf)
		result = OTHER;
	if(!pf&&cf)
		result = POS;
	if(!pf&&zf)
		result = ZERO;

	return result;
}

int main() {
	unsigned x = 0;
	float *f = &x;
	do{
		if(find_range(*f)!=find_range2(*f)){
			printf("err of x = %x ,find_range=%d,find_range2=%d\n",x,find_range(*f),find_range2(*f));
			return -1;
		}
		x++;
	}while(x!=0);
	printf("test ok!\n");
}
