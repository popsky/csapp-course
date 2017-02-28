/*************************************************************************
    > File Name: 2.96.blog.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月19日 星期二 09时41分42秒
 ************************************************************************/
#include<stdio.h>
#include<types.h>
int float_f2i(float_bits f){
	unsigned sign = f>>31;
	int exp = (f>>23) & 0xFF;
	int frac = (f&0x7FFFFF) | (1<<23);
	exp -= 127;
	if(exp < 0) return 0;
	if(exp >= 31) return 0x80000000; //绝对值不大于2^31（1<<31）
	if(exp > 23) frac <<= (exp - 23);
	else frac >>= (23 - exp);
	return sign? -frac : frac;
}

int main() {
	int x = 0;
	do {
		int i = float_f2i(x);
		int j = (int)u2f(x);
		if(i != j) {
			printf("error in %x: %d %d",x,i,j);
			return 0;
		}
		x++;
	}while(x != 0);
	printf("test ok!");
	return 1;
}

