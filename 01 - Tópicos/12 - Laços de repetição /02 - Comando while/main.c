#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Definição:
  O comando while permite executar, repetidamente,
  um conjunto de comandos acordo com uma condição.

  Forma geral:
  while(condição) {
    conjunto de comandos;
  }
  */

  // exemplos:
  int x, y;
  printf("Digite dois valores inteiros: ");
  scanf("%d %d", &x, &y);
  while (x < y)
  {
    printf("X: %d\n", x);
    x++;
  }
  printf("Fim do programa\n");

  return 0;
}