#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  forma geral:
  expressão "operador lógico" expressão

  resultado da operação:
  0: a operação é falsa
  1: a operação é verdadeira

  operadores lógicos:
  && -> Operador "E"
  || -> Operador "OU"
  !  -> Operador "NEGAÇÃO"
  */

  // Operador E(&&): o resultado é 1 apenas se ambas
  //  as expressões também forem 1. Do contraário,
  //  o resultado é 0
  int z, x = 5, y = 3;
  z = (x > 2) && (y < x);
  printf("Resultado: %d\n", z);

  z = (x % 2 == 0) && (y > 0);
  printf("Resultado: %d\n", z);
  printf("------------\n");

  // Operador OU(||): o resultado é 1 apenas se
  // uma das expressões for 1 e 0 se ambas as
  // expressões forem 0
  int a, b = 5, c = 3;
  a = (b > 2) || (c > b);
  printf("Resultado: %d\n", a);

  a = (b % 2 == 0) || (c < 0);
  printf("Resultado: %d\n", a);
  printf("------------\n");

  // Operador NEGAÇÃO(!): inversão do resultado
  // o resultado é 1 se a expressão for 0
  // o resultado é 0 se a expressão for 1
  int m, n = 5, o = 3;
  m = !(n > 2);
  printf("Resultado: %d\n", m);

  m = !(n > 7) && (o > 0);
  printf("Resultado: %d\n", m);
  printf("------------\n");

  /*
  Tabela verdade:
  A  B  !A  !B  A&&B  A||B
  0  0  1   1    0     0
  0  1  1   0    0     1
  1  0  0   1    0     1
  1  1  0   0    1     1
  */
  return 0;
}