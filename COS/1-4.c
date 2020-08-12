#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long num) {
    long long	answer = 0;
	char 		arr[18];
	int			tr = 0;
	
	++num;
	do {
		sprintf(arr, "%d", num);
		int i = 0;
		while (i < strlen(arr)) {
			if (arr[i] == '0') {
				num++;
				break;
			}
			i++;
		}
		if (strlen(arr) == i && arr[i] != '0')
			tr = 1;
	} while (tr == 0);
	
	answer = num;
	
    return answer;
}
int main() {
    long long num = 9949999;
    long long ret = solution(num);
	
    printf("solution 함수의 반환 값은 %lld 입니다.\n", ret);
}