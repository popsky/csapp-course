/*************************************************************************
    > File Name: 2.95.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月18日 星期一 08时50分14秒
 ************************************************************************/

#include<stdio.h>
#include<types.h>

/* Compute 0.5*f. If f is NaN, then return f. */
float_bits float_half(float_bits f) {
	unsigned sign = f >> 31;
	unsigned exp = (f >> 23) & 0xff;
	unsigned frac = f & 0x7fffff;
	
	if(exp != 0xff) { /* Non NaN or infinite */
		if(exp == 0) {
			if((frac & 1) == 0) {
				frac = frac >> 1;
			} else {
				if((frac & 2) == 0) {
					frac = frac >> 1;
				} else {
					frac = (frac >> 1) + 1;
				}
			}
		}
		else if(exp == 1) {
			exp = 0;
			if((frac & 1) == 0) {
				frac = (frac >> 1) | 0x400000;
			} else {
				if((frac & 2) == 0) {
					frac = (frac >> 1) | 0x400000;
				} else {
					frac = ((frac >> 1) | 0x400000)+1;
				}
			}
		}
		else {
			exp -= 1;
		}
	}
	return (sign << 31) | (exp << 23) | frac;
}

float float_half_f(float f) {
	return (f/2.0f);
}

int main() {
	//test_fun(float_half,float_half_f);
	float f = u2f(0x7f8fffff) / 33352.0;
	show_float(&f);
}

