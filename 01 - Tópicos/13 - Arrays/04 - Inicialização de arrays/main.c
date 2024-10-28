#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Podemos definir uma lista de
  valores para colocar no array.

  Forma geral:
  tipo nome_array[tam1]...[tamN] = {valores};
  */

  // exemplos:
  // inicializando vetores:
  int vetor1[5] = {1, 3, 5, 7, 6};
  float vetor2[3] = {1.5, 2.5, 8.8};

  // inicializando matrizes:
  int matriz1[2][3] = {1, 2, 3, 4, 5, 6};
  int matriz2[2][3] = {{1, 2, 3}, {4, 5, 6}};

  // inicialização sem tamanho:
  // declaração de um array de 10 posições
  int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // o número de linhas de matriz será 5
  int matriz[][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  return 0;
}