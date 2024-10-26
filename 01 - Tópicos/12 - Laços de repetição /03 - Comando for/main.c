#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  O comando for permite executar, repetidamente,
  um conjunto de comandos de acordo com uma condição

  forma geral:
  for(inicialização; condição; incremento) {
    conjunto de comandos;
  }
  */

  // exemplo 1:
  int a, b, c;
  printf("Digite dois valores inteiros: ");
  scanf("%d %d", &a, &b);
  for (c = a; c <= b; c++)
  {
    printf("%d\n", c);
  }

  // exemplo 2:
  int x, y, z;
  printf("Digite dois valores inteiros: ");
  scanf("%d %d", &x, &y);
  for (z = x; z <= y && z > 0; z++)
  {
    printf("%d\n", z);
  }
  printf("---------------------\n");

  // exemplo 3:
  int i, j;
  for (i = 0, j = 10; i < j; i++, j--)
  {
    printf("i = %d e j = %d.\n", i, j);
  }
  printf("Fim do programa.\n");

  return 0;
}