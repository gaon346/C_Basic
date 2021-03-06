#include <stdio.h>

void go(int s, int sum);
int power[11][11], check[11], sel[11], ans, seq[11];

int main() {
	int n = 11;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &power[i][j]);
		}
	}
	go(0, 0);

	printf("%d\n", ans);
	for (int i = 0; i < n; i++)
		printf("%d ", seq[i]);
	return 0;
}
void go(int s, int sum) {
	if (s == 11) {
		if (ans < sum) {
			ans = sum;
			for (int i = 0; i < 11; i++)
				seq[i] = sel[i];
		}
		return;
	}

	for (int i = 0; i < 11; i++) {
		if (check[i]) continue;
		check[i] = 1;
		sel[s] = i + 1;
		go(s + 1, sum + power[s][i]);
		sel[s] = 0;
		check[i] = 0;
	}
}