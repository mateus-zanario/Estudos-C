#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Maior elemento de um array bidimensional
  int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, j, maior = mat[0][0];
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (maior < mat[i][j])
      {
        maior = mat[i][j];
      }
    }
  }
  printf("Maior elemento: %d\n", maior);
  return 0;
}