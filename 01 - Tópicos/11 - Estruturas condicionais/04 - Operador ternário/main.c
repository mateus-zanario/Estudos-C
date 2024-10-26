#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Definição:
  O operador ternário(?) é tipicamente
  usado para fazer atribuições condicionais.

  Forma geral:
  variável = condição ? expressão1 : expressão2;
  */

  // exemplo 1:
  int x, y, z;
  printf("Digite X:");
  scanf("%d", &x);
  printf("Digite Y:");
  scanf("%d", &y);
  // sem usar o operador ternário:
  /*
  if (x > y)
  {
    z = x;
  }
  else
  {
    z = y;
  }
  */

  // usando o operador ternário:
  z = x > y ? x : y;
  printf("Maior: %d\n", z);
  printf("--------------------\n");

  // exemplo 2:
  int a, b, c;
  printf("Digite A:");
  scanf("%d", &a);
  printf("Digite B:");
  scanf("%d", &b);

  // pode ser usado sem atribuição
  (a > b) ? printf("A é maior que B.\n")
          : printf("B é maior que A.\n");
  return 0;
}