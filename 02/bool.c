#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool b;
  
  b = true;
  b = false;

  printf("O tamnho de b (bool) eh: %lu\n", sizeof(b));

  return 0;
}

