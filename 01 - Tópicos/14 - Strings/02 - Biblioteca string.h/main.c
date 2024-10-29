#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  /*
  A linguagem C possui algumas funções
  para manipulação de strings. Isso é
  possível graças a biblioteca <string.h>.

  Alguns comandos da biblioteca <string.h>:
  strlen -> tamanho da string
  strcpy -> copiar uma string
  srtcat -> concatenar duas strings
  strcmp -> comparar duas strings
  */

  // o tamanho de uma string
  char palavra1[20] = "Linguagem C";
  int tamanho = strlen(palavra1);
  printf("Tamanho: %d\n", tamanho);
  printf("-----------------------\n");

  // copiando uma string
  char palavra2[20] = "Linguagem C";
  char nova_palavra[30];
  strcpy(nova_palavra, palavra2);
  printf("Cópia: %s\n", nova_palavra);
  printf("-----------------------\n");

  // concatenando duas strings
  char palavra3[20] = "Bom ";
  char palavra4[30] = "dia";
  strcat(palavra3, palavra4);
  printf("Palavra: %s\n", palavra3);
  printf("-----------------------\n");

  // comparando duas strings
  char palavra5[20] = "Linguagem C";
  char palavra6[30] = "LINGUAGEM C";
  if (strcmp(palavra5, palavra6) == 0)
  {
    printf("Strings iguais\n");
  }
  else
  {
    printf("Strings diferentes\n");
  }

  return 0;
}