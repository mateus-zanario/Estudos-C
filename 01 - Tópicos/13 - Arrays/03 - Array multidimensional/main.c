#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Definição:
  Uma array multidimensional é um tipo de
  array que possui o número de dimensões
  superior a dois.

  Exemplo com 3 dimensões:
  float cubo[5][5][5];

  Exemplos com 4 dimensões:
  int array[5][5][5][5];
  */

  // exemplo:
  int cubo[5][5][5];
  int i, j, k;
  // preenchimento do array de 3 dimensões com zeros
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      for (k = 0; k < 5; k++)
      {
        cubo[i][j][k] = 0;
      }
    }
  }
  return 0;
}