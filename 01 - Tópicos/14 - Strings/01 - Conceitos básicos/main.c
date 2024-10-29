#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Definição:
  Uma string é um array de caracteres
  que permite armazenar uma sequência
  de caracteres adjacentes na memória.

  Forma geral:
  char nome_array[tamanaho];

  Exemplo:
  char palavra[20];
  */

  // lendo e escrevendo uma string
  char palavra[20];
  printf("Digite uma palavra: ");
  scanf("%s", palavra);
  // gets(palavra);
  printf("Palavra lida: %s\n", palavra);
  printf("-----------------------\n");

  // inicialização de strings
  // forma convencional
  char nome1[20] = {'M', 'a', 't', 'e', 'u', 's', '\0'};
  printf("Nome: %s\n", nome1);
  // forma especial
  char nome2[20] = "Mateus";
  printf("Nome: %s\n", nome2);
  printf("-----------------------\n");

  // acesso aos elementos da string
  char string[20] = "Teste";
  printf("Palavra: %s\n", string);
  string[0] = 'L';
  printf("Palavra: %s\n", string);
  printf("-----------------------\n");

  /*
  A função do '\0' é desconsiderar
  as posições restantes da string.
  */

  // exemplo
  char termo[20] = "Oitenta";
  printf("Palavra: %s\n", termo);
  termo[2] = '\0';
  printf("Palavra: %s\n", termo);
  printf("-----------------------\n");

  return 0;
}