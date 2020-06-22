#include <stdio.h>

int main() {
  	int a;
  
  	printf("아무 정수나 입력해주세요 : ");
  	scanf("%d", &a);
  	printf("입력받은 정수 : %d", a);
	
	return 0;
}

/*
printf와 매우 유사한 형식이지만, scanf의 경우 저장할 변수의 앞에 &을 붙인다.
&은 주소값을 나타내는 문자로 변수 이름 앞에 &이 붙으면 그 변수의 주소를 나타내게 된다.
즉, 입력받은 값을 저장하는 변수의 주소를 알려주는 것이다.

여기서 주의할 점은 scanf를 쓸 때에는 변수 앞에 반드시 &를 써주어야 한다는 것이다.
이 &를 사용하지 않으면 scanf는 입력받은 값을 어떤 주소에 저장할지 모르기 때문에 에러가 발생하게 된다.
&a는 a의 주소값이지만, a는 주소값이 아니기 때문이다.

단, 문자열 배열의 경우에는 &를 써주지 않아도 에러가 나지 않는데 이 부분은 후에 문자열 배열을 배울때 알아보자.
*/