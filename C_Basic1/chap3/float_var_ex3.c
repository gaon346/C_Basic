/* 실습 내용 */
/*
	1. #대신에 알맞은 코드를 작성해주세요.
	2. float형 a 변수 45.f를 선언합니다.
	3. double형 b 변수를 1.234를 선언합니다.
	4. 변수 a는 소수점 4 번째 자리까지 표시합니다.
	5. 변수 b는 소수점 1 번째 자리까지 표시합니다.
	6. printf 문의 # 표시된 곳에 출력이 바르게 되도록 값을 채워넣습니다.
*/

#include <stdio.h>

int main() {
	float a = 4.5f;
	double b = 1.234;
	
	printf("a 는 %.4f 입니다", a);
	printf("b 는 %.1f 입니다", b);
}