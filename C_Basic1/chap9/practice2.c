/*
이중 반복문을 이용하여 3단 직각삼각형을 출력합니다. 조건은 다음과 같습니다.
- 이중 반복문과 printf만을 이용합니다.
- 이중 반복문을 사용하지 않고 printf만 사용해서 별을 찍는 것은 반칙입니다.
*/
#include <stdio.h>

int main() {
	for(int i = 0; i < 3; i++){
		for(int j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
  return 0;
}
