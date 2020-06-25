#include <stdio.h>

int main() {
  int number = 3;
  
  printf("%d\n", number++);
  printf("%d\n", ++number);
  printf("%d\n", number--);
  printf("%d\n", --number);

  return 0;
}