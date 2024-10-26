#include <stdio.h>
#include <stdlib.h>

int main()
{
  // declaração de variáveis
  char letra = 'm'; // Usar aspas simples para um único caractere
  int num_1 = 10;
  float num_2 = 5.25;

  // comando para imprimir no console tudo que estiver entre aspas
  printf("Meu programa em C\n");
  printf("%c \n", letra); // %c = caracteres
  printf("%d \n", letra); // %d = inteiros (vai imprimir o valor ASCII de 'm')
  printf("%d \n", num_1); // %d = inteiros
  printf("%f \n", num_2); // %f = reais

  // combinações de variáveis no printf
  printf("Letra %c, inteiro %d \n", letra, num_1);
  printf("Número: %d; número + 1: %d \n", num_1, num_1 + 1);

  system("pause");
  return 0;
}