#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vetor[10];
  int x, y;
  int i;
  int soma, subt;

  for (i = 0; i < 10; i++)
  {
    printf("Digite o valor do vetor %d:\n", i);
    scanf("%d", &vetor[i]);
  }

  printf("Digite o valor de X:\n");
  scanf("%d", &x);
  printf("Digite o valor de Y:\n");
  scanf("%d", &y);

  if (x > y)
  {
    soma = vetor[x] + vetor[y];
    printf("Soma da posição dos vetores: %d\n", soma);
  }
  else
  {
    vetor[x] - vetor[y];
    printf("Subtração da posição dos vetores: %d\n", subt);
  }

  printf("Fim do programa.\n");
  return 0;
}