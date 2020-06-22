#include <stdio.h>
//선언과 동시에 대입. 초기화


int main() {
  	int level = 1;
	int hp = 50;
  	int damage = 5;
  	int defense = 2;
  
	printf("%d, %d, %d, %d\n", level, hp, damage, defense);
	
  	defense = 5; // 대입을 통해 변수의 값을 바꿀 수 있다
	
	printf("%d, %d, %d, %d\n", level, hp, damage, defense);
  
  	return 0;
}