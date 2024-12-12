#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Exercício:
  Criar um vetor, preenche-lo e separar
  os números pares dos ímpares.
  */

  int qntP = 0, qntI = 0, i;
  int vetor[10];

  // Preenchimento do vetor
  for (i = 0; i < 10; i++)
  {
    printf("Insira o valor %d:\n", i);
    scanf("%d", &vetor[i]);
  }

  // Contagem de pares e ímpares
  for (i = 0; i < 10; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      qntP++;
    }
    else
    {
      qntI++;
    }
  }

  // Mostrar o resultado
  printf("O total de números pares é: %d", qntP);
  printf("O total de números pares é: %d", qntI);

  return 0;
}