/*************************************************************************
    > File Name: pp4.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年05月17日 星期二 21时28分00秒
 ************************************************************************/

#include<stdio.h>
int odd_parity(unsigned long x) {
	int result = 0;
	while(x != 0) {
		char bresult;
		unsigned char bx = x & 0xff;
		asm (
				"testb %[bx],%[bx]		# Test value of low-order byte\n\t"
				"setnp %[v]				#Set if odd parity"
				:[v] "=r" (bresult)
				:[bx] "r" (bx)
			);
		result ^= (int) bresult;
		x >>= 8;
	}
	return result;
}

