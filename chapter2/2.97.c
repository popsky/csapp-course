/*************************************************************************
    > File Name: 2.97.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月19日 星期二 10时20分52秒
 ************************************************************************/

#include<stdio.h>
#include<types.h>

/* Compute (float) i */
float_bits float_i2f(int i) {
	unsigned ui = (unsigned)i;
	unsigned sign = ui >> 31;
	if(sign == 1) {
		ui = (unsigned)(-i);  // Convert nagative integer to unsigned integer
	}
	int index;
	for(index = 31; index > -1; index--) {  // Index the leftmost bit
		if((ui & (1 << index)) != 0){
			break;
		}
	}
	if(index == -1) {  // i = (+0 or -0)
		return sign ? 0x80000000 : 0;
	}
	unsigned exp = index + 127;
	unsigned frac;
	if(index > 23) {  // Round is necessary
		int shift_size = index - 23;
		frac = (ui >> shift_size) & 0x7fffff;
		int lsb = frac & 1; // The least significant bit(lsb)
		int middle = 1 << (shift_size -1);  // Middle value
		int	rest = ui & ((1 << shift_size)-1); // Rest value
		/* Round_to_even */
		if(rest > middle) {
			if(frac == 0x7fffff) {
				frac = 0;
				exp += 1;
			}
			else {
				frac += 1;
			}
		} else if(rest == middle) {
			if(lsb == 1) {
				if(frac == 0x7fffff) {
					frac = 0; 
					exp += 1;
				}
				else {
					frac += 1;
				}
			}
		}

	} else {
		frac = (ui << (23 - index)) & 0x7fffff;
	}
	return (sign << 31) | (exp << 23) | frac;
}

int test_fun_i2f() {
	unsigned x = 0;
	do{
		float m = u2f(float_i2f(x));
		float n = (float)((int)x);
		if(m != n) {
			printf("err from %x %f %f",x,m,n);
			return 0;
		}
		x++;
	}while(x != 0);
		printf("test ok!");
		return 1;
}

int main() {
	test_fun_i2f();
}
