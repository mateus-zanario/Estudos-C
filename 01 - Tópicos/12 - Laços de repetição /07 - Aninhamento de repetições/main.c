#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Definição:
  O aninhamento de repetições trata-se do uso
  de um comando de repetição(while, for ou
  do-while) dentro de um outro.

  Forma geral:
  repetição(condição1) {
    conjunto de comandos;
    repetição(condição2) {
      conjunto de comandos;
      repetição...
    }
  }
  */

  // exemplo:
  int i, j;
  for (i = 1; i < 5; i++)
  {
    for (j = 1; j < 5; j++)
    {
      if (i == j)
      {
        printf("1 ");
      }
      else
      {
        printf("0 ");
      }
    }
    printf("\n");
  }

  return 0;
}