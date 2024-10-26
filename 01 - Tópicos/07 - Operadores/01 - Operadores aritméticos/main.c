#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  soma:          +
  subtração:     -
  multiplicação: *
  divisão:       /
  resto:         %
  */

  // declaração de variáveis
  int x1, x2 = 10, x3 = 12;
  char ch1, ch2 = '0', ch3 = 'A';
  float f1, f2 = 5.25, f3 = 10.5;

  // soma:
  x1 = x2 + x3;    // soma de valores inteiros
  ch1 = ch2 + ch3; // soma de caracteres
  f1 = f2 + f3;    // soma de valores reais
  printf("Somas:\n");
  printf("x1: %d\n", x1);
  printf("ch1: %c\n", ch1);
  printf("f1: %f\n", f1);
  printf("----------------\n");

  // subtração:
  x1 = x2 - x3; // subtração de valores inteiros
  f1 = f2 - f3; // subtração de valores reais
  printf("Subtrações:\n");
  printf("x1: %d\n", x1);
  printf("f1: %f\n", f1);
  printf("----------------\n");

  // multiplicação:
  x1 = x2 * x3; // multiplicação de valores inteiros
  f1 = 3 * f2;  // multiplicação de valores reais
  printf("Multiplicações:\n");
  printf("x1: %d\n", x1);
  printf("f1: %f\n", f1);
  printf("----------------\n");

  // divisão:
  x2 = 9;        // declaração de variável
  x1 = x2 / 2;   // perde-se a parte decimal, pois a variável é inteira
  f1 = x2 / 2;   // perde-se a parte decimal, pois são 2 números inteiros
  f2 = x2 / 2.0; // a parte decimal permanece
  printf("Divisões:\n");
  printf("x1: %d\n", x1);
  printf("f1: %f\n", f1);
  printf("f2: %f\n", f2);
  printf("----------------\n");

  // resto(só funciona com números inteiros):
  printf("Restos:\n");
  int a, b = 9;
  a = b % 2; // resto 1
  printf("a: %d\n", a);
  a = b % 5; // resto 4
  printf("a: %d\n", a);
  printf("----------------\n");

  return 0;
}