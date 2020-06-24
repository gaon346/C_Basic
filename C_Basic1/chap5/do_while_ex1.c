#include <stdio.h>

int main() {

  int i = 0;

  printf("while 문의 경우\n");
  
  while(i == 1) {
    printf("while : 조건에 불만족하는데 출력할까?");
  }

  printf("do ~ while 문의 경우\n");

  do {
    printf("do while : while 조건을 불만족하는데 출력하네...?");
  }while(i == 1);

  return 0;
}