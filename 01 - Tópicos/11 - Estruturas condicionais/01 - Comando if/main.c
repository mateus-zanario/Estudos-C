#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Definição:
  O comando if permite executar ou não um
  conjunto de comandos de acordo com uma condição.

  Forma geral:
  if(condição) {
    conjunto de comandos;
  }
  */

  // exemplo 1:
  int x, y;
  printf("Digite um valor inteiro\nR:");
  scanf("%d", &x);
  if (x > 0)
  {
    printf("O valor é positivo.\n");
  }
  printf("-------------------\n");

  // exemplo 2:
  printf("Digite um valor inteiro\nR:");
  scanf("%d", &y);
  if ((y % 2 == 0) || (x < 0))
  {
    printf("O valor é par ou negativo.\n");
  }
  printf("-------------------\n");

  // exemplo 3:
  int a, b;
  printf("Digite um valor inteiro\nR:");
  scanf("%d", &a);
  if (a > 0)
  {
    b = a % 3;
    printf("O resto de %d/3 é: %d\n", a, b);
  }
  return 0;
}