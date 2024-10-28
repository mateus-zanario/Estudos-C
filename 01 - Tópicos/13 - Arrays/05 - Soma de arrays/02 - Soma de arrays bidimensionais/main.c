#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Somando os elementos de um array bidimensional
  int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, j, soma = 0;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      soma = soma + mat[i][j];
    }
  }
  printf("Soma: %d\n", soma);

  return 0;
}