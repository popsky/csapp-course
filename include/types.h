/*************************************************************************
    > File Name: types.h
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Author: ma6174
	> Define for csapp chapter2 to resolve practice problem.
 ************************************************************************/

#include<stdio.h>

typedef unsigned float_bits;
typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start, size_t size) {
	size_t i;
	for(i = 0; i < size; i++) {
		printf(" %.2x",start[i]);
	}
	printf("\n");
}

void show_int(int* p) {
	show_bytes((byte_pointer)p,sizeof(int));
}

void show_float(float* p) {
	show_bytes((byte_pointer)p,sizeof(float));
}

/* unsigned convert float */

float u2f(float_bits f) {
	return *((float *)&f);
}

/* float convert to unsigned */
float_bits f2u(float f) {
	return *((float_bits *)&f);
}

int is_nan(float_bits fb) {
	unsigned exp = fb >> 23 & 0xff;
	unsigned frac = fb & 0x7fffff;
	return (exp == 0xff) && frac != 0;
}

int is_infinite(float_bits fb) {
	unsigned exp = fb >> 23 & 0xff;
	unsigned frac = fb & 0x7fffff;
	return (exp == 0xff) && frac == 0;
}

int is_float_equal(float_bits f1, float f2) {
	return u2f(f1) == f2;
}

/* 
 * Compute the giving float bit representation exponent, if represented
 * float is NaN or infinite, return -127 
 */

int float_exponent (float_bits fb) {
	unsigned exp = fb >> 23 & 0xff;
	if(exp == 0xff) {
		return -127;
	}
	else if(exp <= 1) {
			return -126;
		} else {
			return exp - 127;
		}
}

int test_fun(float_bits(*fun1)(float_bits), float(*fun2)(float)) {
	unsigned x = 0;
	do { // test for all 2^32 value
		float_bits fb = fun1(x);
		float ff = fun2(u2f(x));
		if(!is_float_equal(fb,ff)) {
			printf("%x error\n",x);
			printf("float_bits : ");
			show_int((int*)&fb);
			printf("float : ");
			show_float(&ff);
			return 0;
		}
		x++;
	}while(x != 0);
	printf("Test OK\n");
	return 1;
}
