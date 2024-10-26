#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  atribuição simplificadda:
  variável "operação=" expressão;
  variável = variiável "operação" expressão;
  */

  // soma simplificada:
  int x = 10, y = 10;
  int z = 2;
  x = x + z;
  printf("X: %d\n", x);
  y += z;
  printf("Y: %d\n", y);
  printf("--------\n");

  // subtração simplificada:
  int a = 10, b = 10;
  int c = 2;
  a = a - c; // forma não simplfificada
  b -= c;    // forma simplidicada
  printf("A: %d\n", a);
  printf("B: %d\n", b);
  printf("--------\n");

  // produto simplificado:
  int m = 10, n = 10;
  int o = 2;
  m = m * o; // forma não simplfificada
  n *= o;    // forma simplidicada
  printf("M: %d\n", m);
  printf("N: %d\n", n);
  printf("--------\n");

  // divisão simplificada:
  int p = 10, q = 10;
  int r = 2;
  p = p / r; // forma não simplfificada
  q /= r;    // forma simplificada
  printf("P: %d\n", p);
  printf("Q: %d\n", q);
  printf("--------\n");

  // resto da divisão simplificada:
  int t = 10, u = 10;
  int v = 2;
  t = t % v; // forma não simplfificada
  u %= v;    // forma simplificada
  printf("T: %d\n", t);
  printf("U: %d\n", u);
  printf("--------\n");

  return 0;
}