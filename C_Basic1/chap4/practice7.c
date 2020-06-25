#include <stdio.h>
int main() {
	unsigned char input;
	unsigned char mul1;
	unsigned char div1;
	
	scanf("%hhu", &input);
	
	mul1 = input * 16;
	div1 = input / 8;
	
	printf("%hhu %hhu", mul1, div1);
	
	return 0;
}