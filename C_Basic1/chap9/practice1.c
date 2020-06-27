#include <stdio.h>

int main() {
	int i, j;
	
	for(i = 0; i < 5; i++){
		printf("-----바깥 for 문 %d 시작-----\n", i);
		for(j = 0; j < 5; j++){
			printf("%d 번째 안쪽 for 문\n", j);
		}
		printf("-----바깥 for 문 %d 종료-----\n", i);
	}
  return 0;
}