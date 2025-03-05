#include <stdio.h>
#include <stdlib.h>
#include "../src/add.h"

void test_add() {
  int result = add(4, 3);
  if (result != 7) {
    fprintf(stderr, "test_add failed: expected 7, got %d\n", result);
    exit(1);
  }
}

int main() {
  test_add();
  printf("All tests passed!\n");
  return 0;
}
