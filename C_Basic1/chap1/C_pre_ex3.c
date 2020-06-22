#include <stdio.h>

int main() {
	int number;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &number);
	
	if(number > 0) {
		printf("입력받은 숫자는 양수입니다!");
	}else if(number == 0) {
		printf("양수도 음수도 아닌 0 입니다!");
	}else {
		printf("입력받은 숫자는 음수입니다!");
	}
	
	return 0;
}