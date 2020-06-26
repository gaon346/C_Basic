/*
배열과 char 그리고 scanf를 이용하여 1000자 이내로 입력받을 수 있도록 합니다.
1. 1000자 이내의 문자열을 입력받습니다.
2. 입력받은 문자열을 그대로 다시 출력합니다.
*/
#include <stdio.h>

int main() {
	char ch[1000];
	
	scanf("%s", &ch);
	printf("%s", &ch);
	
	return 0;
}