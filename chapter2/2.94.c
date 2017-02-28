/*************************************************************************
    > File Name: 2.94.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月17日 星期日 14时39分35秒
 ************************************************************************/

#include<stdio.h>
#include<types.h>

/* Compute 2*f. If f is NaN, then return f. */
float_bits float_twice(float_bits f) {
	/* Decompose bit representation into parts */
	unsigned sign = f >> 31;
	unsigned exp = f >> 23 & 0xff;
	unsigned frac = f & 0x7fffff;

	if(!((exp == 0xff) && (frac > 0))) {  /* Non NaN */
		if(exp == 0) {	/* Denormalized */
			if((frac & 0x400000) != 0) { 
				exp = 1;
				frac = (frac << 1) & 0x7fffff;
			} else {
				frac = (frac << 1) & 0x7fffff;
			}
		} else if(exp != 0xff) { /* Nomalized */
			if(exp == 0xfe) {  /* Cause overflow, set to infinite */
				exp = 0xff;
				frac = 0;
			} else {	
				exp += 1;
			}
		}
	}
	
	return (sign << 31) | (exp << 23) | frac;
}

float float_twice_f(float f) {
	return 2*f;
}

int main() {
	printf("NaN== %f\n",);

