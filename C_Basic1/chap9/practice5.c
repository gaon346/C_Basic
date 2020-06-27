/*
피라미드 형태를 출력합니다. 조건은 다음과 같습니다.
- 이중 반복문을 이용합니다.
- 공백 printf(" "); 별 printf("*"); 줄바꿈 printf("\n"); 세가지 출력만 이용해도 충분합니다.
- i가 몇일 때 공백과 별은 몇개씩 출력되는지, 상관관계를 잘 생각해보세요.
*/

#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	
	for(int i = 1; i < num + 1; i++){
		for(int j = num - i; j >= 0; j--){
			printf(" ");
		}
		
		for(int k = 1; k < i * 2; k++){
			printf("*");
		}
		printf("\n");
	}
  
  return 0;
}