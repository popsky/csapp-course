#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,int size) {
		int i;
		for(i = 0; i < size; i++)
			printf(" %.2x ",start[i]);
		printf("\n");
}

/* Copy integer into buffer if space is available */

void copy_int(int val, void *buf, int maxbytes){
	if(maxbytes >= sizeof(val))
		memcpy(buf,(void*)&val, sizeof(val));
}
int main(){
	char buff[4];
	copy_int(0x12345678,(void *)buff,4);
	show_bytes((byte_pointer)buff,4);
}
