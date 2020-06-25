#include <stdio.h>
int main() {
	unsigned char input;
	char a = 6;
	
	scanf("%hhu", &input);
	
	char b = input & a;
	char c = input | a;
	char d = input ^ a;
	unsigned char e = ~input;
	
	printf("%d %d %d %d", b, c, d, e);
	
	return 0;
}