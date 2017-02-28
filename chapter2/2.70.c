#include <stdio.h>
#include <stdlib.h>

/*
 * Return 1 when x can be represented as an n-bit, 2's-complement
 * number; 0 otherwise
 * Assume 1 <= n <= w
 */

int fits_bits(int x, int n) {
	return ((x >> (n - 1))  >>  1) == 0;
}

int main() {
	printf("3 can be represented as an 1 bit ? %d",fits_bits(3,1));
}
