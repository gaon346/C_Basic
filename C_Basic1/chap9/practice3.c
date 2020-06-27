/*
역삼각형을 출력합니다. 조건은 다음과 같습니다.
- 이중 반복문을 이용합니다.
- 입력받은 값만큼의 줄 갯수를 가진 역삼각형을 출력합니다.
- printf("*");과 printf("\n"); 두가지 출력만 이용해도 충분합니다.
*/
#include <stdio.h>

int main() {
	int num;
  scanf("%d", &num);
	
	for(int i = 0; i < num; i++){
		for(int j = 0; j < num - i; j++){
			printf("*");
		}
		printf("\n");
	}

  return 0;
}