#include <stdio.h>

int main() {
	int arr[] = { 519, 31, 7988, 165326, 100, 150 };
	
	printf("%ld\n", sizeof(arr));
	printf("%ld\n", sizeof(arr) / sizeof(arr[0]));
	
	return 0;
}

// %ld = 부호있는 10진수 정수, long 자료형