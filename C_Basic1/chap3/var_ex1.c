#include <stdio.h>

int main() {
	int level;
	int hp;
	int damage;
	int defense;
	
	printf("%d, %d, %d, %d\n", level, hp, damage, defense);
	
  	level = 1;
  	hp = 50;
  	damage = 5;
  	defense = 2;
	
	printf("%d, %d, %d, %d\n", level, hp, damage, defense);

  
  return 0;
}

// 선언 후 대입한 예제
// 대입 전에는 쓰레기값이 들어있음.
