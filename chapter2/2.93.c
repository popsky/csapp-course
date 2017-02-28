/*************************************************************************
    > File Name: 2.93.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月17日 星期日 12时41分39秒
 ************************************************************************/

#include<stdio.h>
#include<types.h>

/* Compute |f|. If f is NaN, then return f. */
float_bits float_absval(float_bits f) {
	/* Decompose bit representation into parts */
	unsigned sign = f >> 31;
	unsigned exp = f >> 23 & 0xff;
	unsigned frac = f & 0x7fffff;

	if(!((exp == 0xff) && (frac > 0))) {
		sign = 0;
	}
	
	return (sign << 31) | (exp << 23) | frac;
}
