#include <stdio.h>

int main() {
  int a;
  int b;
  
  printf("정수 a 와 정수 b 입력 : ");
  scanf("%d %d", &a, &b);
  printf("입력받은 a b : %d %d", a, b);
  
  return 0;
}

/*
space 나 enter 로 값을 구분하며, 여러 개를 입력할 수 있다.
단 enter가 입력되어야만 최종적으로 값이 인식되므로,
마지막에는 enter를 쳐주어야 한다.
*/
