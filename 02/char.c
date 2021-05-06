#include <stdio.h>

int main(void) {
  char c;
  
  printf("O tamanho de c eh: %lu, %lu\n", sizeof c, sizeof c *8);

  // Três formas de escrever o falor 10
  c = 10;
  c = 0xa;
  c = '\n';
  printf("Valor de c: %i\n", c);

  return 0;
}
