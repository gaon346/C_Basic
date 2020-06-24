//누적계산기
//값을 입력받고 1부터 입력받은 값까지의 합을 출력하세요.

#include <stdio.h>
int main() {
	int sum = 0;
	int i;
	int cnt = 0;
	scanf("%d", &i);
	
	do{
		cnt++;
		sum += cnt;
	} while(cnt < i);
	
	printf("%d", sum);
	return 0;
}
