#include <stdio.h>

int main() {
  int number = 5;
  
  printf("%d", number > 3);
	
  printf("number 가 4보다 큽니까? %d\n", number > 4);    // 크므로 1(참)
  printf("number 가 5보다 큽니까? %d\n", number > 5);    // 크지 않으므로 0(거짓)
  printf("number 가 10보다 큽니까? %d\n", number > 10);   // 크지 않으므로 0(거짓)
  
  printf("number 가 10보다 작습니까? %d\n", number < 10); // 작으므로 1(참)
  printf("number 가 5보다 작습니까? %d\n", number < 5);   // 작지 않으므로 0(거짓)
  printf("number 가 4보다 작습니까? %d\n", number < 4);  // 작지 않으므로 0(거짓)

  printf("number 가 5보다 크거나 같습니까? %d\n", number >= 5); // 크거나 같으므로 1(참)
  printf("number 가 5보다 작거나 같습니까? %d\n", number <= 5); // 작거나 같으므로 1(참)

  printf("number 는 5와 같습니까? %d\n", number == 5);  // 같으므로 1(참)
  printf("number 는 4와 같습니까? %d\n", number == 4);  // 같지 않으므로 0(거짓)

  printf("number 는 5와 같지 않습니까? %d\n", number != 5); // 같으므로 0(거짓)
  printf("number 는 4와 같지 않습니까? %d\n", number != 4); // 같지 않으므로 1(참)
  return 0;
}