#include <stdio.h>
#include "../src/divide.h"

void test_divide() {
  double result = divide(6, 4);
  if (result != 1.5) {
    fprintf(stderr, "test_divide failed: expected 1.5, got %f\n", result);
    exit(1);
  }
}


int main() {
  test_divide();
  printf("All tests passed!\n");
  return 0;
}
