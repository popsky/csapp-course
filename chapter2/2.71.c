/* Declaration of data type where 4 bytes are packed into an usigned */
 
 typedef unsigned packed_t; 
/* Extract byte from word. Return as signed integer */ 
int xbyte(packed_t word, int bytenum) {
	return ((int)(word << (( 3 - bytenum) << 3))) >> (3 << 3); 
}

int main() {
	printf("xbyte(0x81ffffff,3) = %.2x\n",xbyte(0x81ffffffU,3));
}
