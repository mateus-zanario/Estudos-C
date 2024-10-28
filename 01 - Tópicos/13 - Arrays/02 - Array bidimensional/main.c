#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
  /*
  Definição:
  Uma array bidimensional(ou matriz) é um tipo
  de array que possui duas dimensões, representadas
  por linhas e colunas.

  Forma geral:
  tipo nome_array[num_linhas][num_colunas];

  Alguns exemplos:
  int n = 5;
  int matriz[3][2];    -> Correto
  float F[N + 1][N];   -> Correto
  char frases[30][50]; -> Correto
  int mat[n][n];       -> Errado
  int M[4.5][5];       -> Errado

  Acesso aos elementos pelo índice:
  int mat[3][2];
  mat[0][0] = 5; -> Primeira posição
  mat[2][1] = 3; -> Última posição

  Alguns comandos:
  int mat[3][2], M[3][2];
  scanf("%d", &mat[2][0])           -> leitura
  mat[0][0] = 10;                   -> atribuição
  mat[1][1] = mat[0][0] + mat[2][0] -> expressão
  mat = M;                          -> errado
  */

  // exemplo:
  int mat[100][50];
  int i, j;
  for (i = 0; i < 100; i++)
  {
    for (j = 0; j < 50; j++)
    {
      printf("Digite mat[%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }

  return 0;
}