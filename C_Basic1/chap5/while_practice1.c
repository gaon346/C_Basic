#include <stdio.h>

int main() {
  int input;
	int i = 1;
	scanf("%d", &input);
	


  while(i<=9) {
		printf("%d X %d = %d\n", input, i, input * i);
		i++;
  }

  return 0;
}