/*
for문에 연산자를 활용해서 직각삼각형을 만들어 봅시다.
1. 값을 입력받아 입력값만큼의 줄 수를 가진 직각삼각형을 출력해봅시다.
2. 별 수는 2개씩 늘어납니다.
*/

#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	for(int i = 1; i < num + 1; i++){
		for(int j = 1; j < i * 2; j++){
			printf("*");
		}
		printf("\n");
	}
  return 0;
}