/*************************************************************************
    > File Name: 3.74.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月18日 星期三 11时27分54秒
 ************************************************************************/

#include<stdio.h>
typedef enum {NEG, ZERO, POS, OTHER} range_t;

range_t find_range(float f);

range_t find_range3(float f) {
	range_t type;
	int zero,one,two,three;

	zero = NEG;
	one = ZERO;
	two = POS;
	three=OTHER;
	asm(
			"xorps		%%xmm1, %%xmm1	# Set %%xmm1 to 0\n\t"
			"ucomiss	%[f], %%xmm1	# Compare 0:f\n\t"
			"movl %[zero], %[t]			# \n\t"
			"cmove %[one], %[t]				# Move 1 if f=0\n\t"
			"cmovb %[two], %[t]				# Move 2 if f>0\n\t"
			"cmovp %[three], %[t]				# Move 3 if f is NaN\n\t"
			: [t] "=r" (type)
			: [f] "x" (f),[zero] "r" (zero), [one] "r" (one), [two] "r" (two), [three] "r" (three)
			: "%xmm1"
		);
	return type;
}

int main() {
	unsigned x = 0;	
	float *f = &x;	
	do{	
		if(find_range(*f)!=find_range3(*f)){
			printf("err of x = %x ,find_range=%d,find_range2=%d\n",x,find_range(*f),find_range3(*f));
			return -1;	
		}
		x++;
	}while(x!=0);
	printf("test ok!\n");
}


