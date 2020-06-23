#include <stdio.h>

int main() {
	int input;
	scanf("%d", &input);
	
	for(int i = 1; i <=9; i++) {
		printf("%d X %d = %d\n", input, i, input * i);
	}
	
	return 0;
}
/*
for문을 이용하여 구구단을 출력해보도록 합니다.
조건은 다음과 같습니다.
- #대신에 알맞은 코드를 적어주세요.
- 사용자로부터 몇 단인지를 입력받습니다.(정수값)
- 입력받은 정수값을 이용하여 구구단을 출력합니다.
*/