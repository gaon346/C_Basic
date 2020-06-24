#include <stdio.h>

// 1 ~ 10 까지의 합을 구하는 코드입니다.

int main() {
  int number = 0;
  int sum = 0; // 합
  
  do {
    number++;
    sum += number;
  }while(number < 10);
    
  printf("1~10 까지의 합 : %d", sum);

  return 0;
}
