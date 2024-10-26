#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x = 10, y = 10;
  /*
  Ao invés de fazer:
  x = x + 1;
  */
  // podemos utilizar incrementos:
  x++; // adcição de + 1 por pós incremento
  ++y; // adcição de + 1 por pré incremento
  printf("X: %d\n", x);
  printf("Y: %d\n", y);
  printf("--------\n");
  x--; // subtração de - 1 -> volta a valer 10
  --y; // subtração de - 1 -> volta a valer 10
  printf("X: %d\n", x);
  printf("Y: %d\n", y);
  printf("--------\n");

  return 0;
}