#include <stdio.h>
int main() {
	long long N;
	long long min;
	long long temp;
	long long result = 0;
	
	scanf("%lld", &N);
	
	long long A[N];
	for (int i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
	}
	for (int i = 0; i < N - 1; i++) {
		min = A[i];
		for (int j = i; j < N; j++) {
			if (min > A[j]) {
				min = A[j];
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i; j++) {
			result += A[j];
		}
	}
	printf("%lld", result);
	return 0;
}