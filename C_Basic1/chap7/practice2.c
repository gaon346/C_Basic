/*
30자 이내의 문자열을 입력받고, 문자열의 길이를 출력하는 프로그램을 작성하세요.
힌트: 문자열 끝에는 null(0)이 들어간다는 것을 이용해보세요.
*/
#include <stdio.h>
int main() {
	char ch[30];
	int cnt = 0;
	int i = 0;
	
	scanf("%s", &ch);
	
	while(ch[i] != NULL) {
		cnt++;
		i++;
	}
	
	printf("%d", cnt);
		
	return 0;
}