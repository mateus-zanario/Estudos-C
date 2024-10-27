#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Operadores relacionais:
  >   "Maior do que"
  >=  "Maior ou igual"
  <   "Menor do que"
  <=  "Menor ou igual"
  ==  "Igual a"
  !=  "Diferente de"

  Forma geral:
  valor1 "operador_relacional" valor2

  Resultado da comparação:
  0: a comparação é falsa
  1: a comparação é verdadeira
  */

  // exemplos:
  int x = 5, y = 3;

  printf("Resultado: %d\n", x > 4);      // 1
  printf("Resultado: %d\n", x >= y + 2); // 1
  printf("Resultado: %d\n", x == 4);     // 0
  printf("Resultado: %d\n", x - 2 != y); // 0

  return 0;
}