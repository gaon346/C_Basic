#include <stdio.h>
#include <string.h>

int main() {
	long long N;
	long long K;
	long long  count = 0;
	
	scanf("%ld %ld", &N, &K);
	long long box[K];
	for (long long i = 0; i < K; i++) {
		scanf("%ld", &box[i]);
	}
	for (long long i = K - 1; i >= 0; i--) {
		count += N / box[i];
		N -= (box[i] * (N / box[i]));
	}
	printf("%ld", count);
	return 0;
}
