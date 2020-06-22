#include <stdio.h>

int main() {
	printf("Hello, World!");
	printf("Hello, World!");
	
	printf("Hello, World!\n");
	printf("Hello, World!");
	
	printf("\t만큼의 거리");
	
	return 0;
}
/*
	이스케이프 시퀀스란, \와 특정 문자를 결합하여 C언어 특성상 표현할 수 없는 기능이나
	문자를 표시해주는 문자를 말한다.
	문자열 뒤에서 엔터키를 쳐도, 코드에서는 문자열 안의 엔터를 인식하지 않기 때문에
	여전히 붙여진 상태로 출력이 된다.
	바로 이런 상황을 위해 이스케이프 시퀀스가 존재한다.
	\n은 줄바꿈을 실행하는 문자이다.
	\t은 탭을 한번 누른 효과를 보여준다.
	구글에 C 이스케이프 시퀀스라고 검색해 보자.
*/