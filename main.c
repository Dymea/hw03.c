// Author: Dymea Schippers dxs5940@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digits_sum(int n) {
  if (n==0) {
    return 0;
  } else {
    return n % 10 + digits_sum(n/10);
  }
}
  

int main(void) {
  int n = atoi(readline("Enter an int: "));
  printf("sum of digits of %i is %i.\n", n, digits_sum(n));
  return 0;
}