/* 실습 내용 */
/*
	1. #대신에 알맞은 코드를 작성해주세요.
	2. 정수형 a 변수, b변수 / 실수형 c 변수, d 변수를 선언합니다.
	3. scanf를 이용하여 정수형 a 변수를 입력 받고 출력합니다.
	4. scanf를 이용하여 실수형 c 변수를 입력 받고 출력합니다.
	5. scanf를 이용하여 정수형 b 변수와 실수형 d 변수를 한번에 입력 받고 출력합니다.
*/

#include <stdio.h>

int main() {
	int a;
  	int b;
  	float c;
  	float d;
  
  	printf("정수 a 입력 : ");
  	scanf("%d", &a);
  	printf("입력받은 정수 a : %d \n", a);
  
  	printf("실수 c 입력 : ");
  	scanf("%f", &c);
  	printf("입력받은 실수 c : %f \n", c);
  
  	printf("정수 b 와 실수 d 입력 : ");
  	scanf("%d %f", &b, &d);
  	printf("입력받은 b d : %d %f \n", b, d);
  
  	return 0;
}
