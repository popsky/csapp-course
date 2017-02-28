/*************************************************************************
    > File Name: 2.92.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月17日 星期日 12时22分21秒
 ************************************************************************/

#include<stdio.h>

typedef unsigned float_bits;

/* Compute -f. If f is NaN, then return f. */
float_bits float_negate(float_bits f) {
	/* Decompose bit representation into parts */
	unsigned sign = f >> 31;
	unsigned exp = f >> 23 & 0xff;
	unsigned frac = f & 0x007fffff;

	if(!((frac > 0)&&(exp == 0xff))) {  
		/* Non NaN,set sign bit */
		sign ^= 1;
	}
	/* Reassemble bits */
	return (sign << 31) | (exp << 23) | frac;
}
