#include <stdio.h>

int main() {
  int a, b, c;
  char letter;
  float floating_number;
  printf("Input a number");
  scanf("%d", &a);
  printf("You entered %d", a);
  if (a < 5) {
    printf("value of variable is less than 5");
  } else {
    printf("valur of variable is greater than 5");
  }
  getchar();
  return 0;
}
