#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  O comando else:
  permite executar um segundo conjunto de
  comandos se a condifição do comando if for falsa

  forma geral:
  if(condição) {
    primeiro conjunto de comandos;
  } else {
    segundo conjunto de comandos;
  }
  */

  // exemplos 1:
  int x;
  printf("Digite um valor inteiro: ");
  scanf("%d", &x);
  if (x % 2 == 0)
  {
    printf("O valor é PAR.\n");
  }
  else // não colocar condição no comando else
  {
    printf("O valor é ÍMPAR.\n");
  }

  return 0;
}