#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
  /*
  Definição:
  Um array(ou vetor) é um conjunto de variáveis
  do mesmo tipo usando o mesmo nome.

  Forma geral:
  tipo nome_array[tamanho];

  Algumas regras:
  O tamanho de um array deve ser sempre um
  valor ou expressão inteira e constante.

  Alguns exemplos:
  int n = 5;
  int vetor[n]   -> Errado
  float F[N + 1] -> Correto
  char texto[30] -> Correto
  int v[4.5]     -> Errado

  Para acessar os elementos de um array,
  usamos o que chamamamos de índice:
  float notas[100]; -> De 0 até a 99
  notas[0] = 81;    -> Primeiro índice
  notas[1] = 55;    -> Segundo índice
  notas[99] = 72;   -> Último índice

  Alguns comandos:
  float notas[100], vetor[100];
  scanf("%d", &notas[5]);         -> leitura
  notas[0] = 10;                  -> atribuição
  notas[1] = notas[5] + notas[0]; -> expressão
  notas = vetor                   -> errado
  */

  // exemplo:
  float notas[N], media = 0.0;
  int i;
  for (i = 0; i < N; i++)
  {
    printf("Digite a nota do aluno %d: ", i);
    scanf("%f", &notas[i]);
    media = media + notas[i];
  }

  media = media / N;
  for (i = 0; i < N; i++)
  {
    if (notas[i] > media)
    {
      printf("Aluno %d: %.2f\n", i, notas[i]);
    }
  }

  return 0;
}