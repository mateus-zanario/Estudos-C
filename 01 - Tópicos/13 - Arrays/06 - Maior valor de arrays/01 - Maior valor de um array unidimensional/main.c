#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Maior elemento de um array unidmensional
  int i, lista[5] = {1, 2, 3, 4, 5};
  int maior = lista[0];
  for (i = 1; i < 5; i++)
  {
    if (maior < lista[i])
    {
      maior = lista[i];
    }
  }
  printf("Maior elemento: %d\n", maior);

  return 0;
}