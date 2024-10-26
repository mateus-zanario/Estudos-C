#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Aninhamento if-else:
  trata-se do uso de outro comando if
  dentro de um comando if ou else

  Exemplo:
  if(condição1) {
    if(condição 2) {
      primeiro conjunto de comandos;
    }else {
      segundo conjunto de comandos;
    }
  }else {
    terceito conjunto de comandos;
  }
  */

  // exemplo:
  int x;
  printf("Digite um número: ");
  scanf("%d", &x);
  if (x == 0)
  {
    printf("O número é igual a 0.\n");
  }
  else
  {
    if (x > 0)
    {
      printf("O número é maior que 0.\n");
    }
    else
    {
      printf("O número é menor que 0.\n");
    }
  }

  return 0;
}