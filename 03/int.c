#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
  long i;
  
  printf("O tamanho de i eh: %zu bytes / %zu bits\n", sizeof i, sizeof i *8);


  printf("Valor de i: %u\n", i);

  return 0;
}

