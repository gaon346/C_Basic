#include<stdio.h>

void go(int s, int sum);
int max(int ans, int sum);
int pay[11][11], check[11], ans, n, start;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &pay[i][j]);
	for (int i = 0; i < n; i++) {
		start = i;
		go(i, 0);
	}
	printf("%d", ans);
}

void go(int s, int sum) {
	if (s == start && sum) {
		ans = max(ans, sum);
		return;
	}
	for (int i = 0; i < n; i++) {
		if (check[i]) continue;
		if (pay[s][i]) {
			check[i] = 1;
			go(i, sum + pay[s][i]);
			check[i] = 0;
		}
	}
}

int max(int ans, int sum) {
	int temp;
	if(ans > sum) return ans;
	else return sum;
}