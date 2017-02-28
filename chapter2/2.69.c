#include <stdio.h>
#include <stdlib.h>
 
  /*
  * Do rotating left shift. Assume 0 <= n < w
  * Examples when x = 0x12345678 and w = 32:
  * 	n = 4 -> 0x23456781, n = 20 -> 0x67812345
  */

  unsigned rotate_left(unsigned x, int n) {
	size_t word_size = sizeof(int) << 3;
	int shift_size = word_size - n;
	n && (x = ((x << n) | (x >> shift_size))); 
	return x;
  }

  int main() {
	printf("rotate_left(0x12345678,20) == %.2x",rotate_left(0x12345678,20));
  }	
