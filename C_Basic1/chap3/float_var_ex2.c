#include <stdio.h>

int main() {
	float a = 1.345f;
	double b = 1.346;
	
	printf("a 는 %.3f 입니다\n", a);
	printf("b 는 %.2f 입니다\n", b);
	
	return 0;
}

/*
%.3f는 소수점 3자리까지 표시한다는 것을 의미하고
%.2f는 소수점 2자리까지 표시한다는 것을 의미한다.
변수 b와 같이 소수점 3자리인 변수를 2자리까지 표시하게 되면
소수점 3번째 자리의 숫자를 반올림하여 표시하게 된다.

소수점을 길게 10자리 정도로 늘려서 출력시키면 소수점이 정확하지 않게 나오는것을 볼수 있다.
이는 컴퓨터가 2진수로 구성되어 있어 소수점인 10진수를 정확하게 표현할 수 없기 때문이다.
*/