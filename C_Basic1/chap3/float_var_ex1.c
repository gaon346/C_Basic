#include <stdio.h>

int main() {
	float a = 1.3f;
	double b = 1.345232;
	
	printf("a는 %f 입니다\n", a);
	printf("b는 %f 입니다\n", b);
	
	return 0;
}

/*
C나 C++의 경우 실수값은 모두 double타입만큼 큰 실수로 인식한다.
float 크기의 숫자도 double형 크기의 숫자로 인식한다는 것이다.
따라서 f를 붙여주지 않으면 1.234 같은 실수도 double형의 실수값으로 인식하게 된다.
그렇기 때문에 이 실수를 float 변수에 넣어주려고 하면
정밀도가 큰 숫자를 작은 float에 넣으므로 숫자가 잘릴 수 있다는 에러 메시지를 출력한다.
에러 메세지를 방지하게 위해 값의 맨 뒤에 f흘 붙여 이 숫자는 float형이라는것을 확실히 나타내는 역할을 한다.
*/