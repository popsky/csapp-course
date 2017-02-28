/*************************************************************************
    > File Name: 2.96.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月18日 星期一 12时33分38秒
 ************************************************************************/

#include<stdio.h>
#include<types.h>

/*
 * Compute (int) f.
 * If conversion causes overflow or f is NaN, return 0x80000000
 */
int float_f2i(float_bits f) {
	unsigned sign = f >> 31;
	unsigned exp = f >> 23 & 0xff;
	unsigned frac = f & 0x7fffff;
	int result,exponent;
	exponent = float_exponent(f);


	if(exp == 0xff) { /* NaN or infinite */
		return 0x80000000;
	}
	

	if(sign == 1) {  /* Nagetive */
		if((exponent > 31) || ((exponent == 31) && (frac != 0) )) { // Cause overflow
			return 0x80000000;
		} else {
			if(exponent < 0) {
				result = 0;
			} else {
				frac |= 0x800000;  // Convert fraction to significant
				int right_shift_size = 23 - exponent;
				if(right_shift_size >= 0) {
					result = (frac >> right_shift_size);
				} else {
					result = (frac << (-right_shift_size));
				}
			}
		}	
		result = -result;
	} else {  /* Positive */
		if(exponent >= 31) { // Cause overflow
			return 0x80000000;
		} else {
			if(exponent < 0) {  // f < 1, return 0;
				result = 0;
			} else {
				frac =frac | 0x800000; // Convert fraction to significant
				int right_shift_size = 23 - exponent;
				if(right_shift_size >= 0) {
					result = frac >> right_shift_size;
				} else {
					result = frac << (-right_shift_size);
				}
			}
		}
	}
	return result;
}

int float_f2i_f(float f) {
	return (int)f;
}

int test_fun_int(int(*fun1)(float_bits), int(*fun2)(float)) {
	unsigned x = 0;
	do{
		int i1 = fun1(x);
		int i2 = fun2(u2f(x));
		if(i1 != i2) {
			printf("error from %x\n",x);
			printf("float_f2i: ");
			show_int(&i1);
			printf("float_f2i_f: ");
			show_int(&i2);
			return 0;
		}
		x++;
	}while(x != 0);
	printf("test ok!");
	return 1;
}

int main() {
	test_fun_int(float_f2i,float_f2i_f);
}
