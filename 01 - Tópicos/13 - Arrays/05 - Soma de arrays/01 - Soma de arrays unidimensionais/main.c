#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Somando os elementos de um array unidimensional
  int i, lista[5] = {1, 2, 3, 4, 5};
  int soma = 0;
  for (i = 0; i < 5; i++)
  {
    soma = soma + lista[i];
    printf("Soma: %d\n", soma);
  }
  return 0;
}