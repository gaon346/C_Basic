#include <stdio.h>

int n, s, h, ans;
int seq[22];

void solve(int cur, int sum) {
	if (cur == n - 1) {
		if(sum == s)
			ans += 1;
		return;
	}
	solve(cur + 1, sum);
	solve(cur + 1, sum + seq[cur]);
}

int main() {
	scanf("%d", &n);
	scanf("%d", &s);
	scanf("%d", &h);
	
	for (int i = 0; i < n - 1; i++)
		scanf("%d", &seq[i]);
	solve(0, h);
	printf("%d", ans);
	return 0;
}