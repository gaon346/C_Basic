/*
배열 안의 요소들의 총합을 구하는 코드를 작성합니다.
조건은 다음과 같습니다.
- 배열(arr)과 배열의 총합을 가질 변수(sum)를 각각 하나씩 선언합니다.
- 반복문과 scanf를 이용해서 사용자에게 배열의 값들을 총 5개 입력받습니다.
- 입력받은 값들을 sum 변수에 더합니다.
- sum 변수를 출력합니다.
*/

#include <stdio.h>

int main() {
	int arr[5];
  	int sum = 0;
	
	for(int i; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	
	printf("%d", sum);
	
	return 0;
}
