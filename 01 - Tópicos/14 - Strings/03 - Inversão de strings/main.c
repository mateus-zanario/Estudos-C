#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  // Inversão de strings
  // Exemplo 1
  char palavra1[120] = "Linguagem C";
  int i;
  for (i = strlen(palavra1) - 1; i >= 0; i--)
  {
    printf("%c", palavra1[i]);
  }
  printf("\n");
  printf("------------------\n");

  // Exemplo 2
  char palavra2[20] = "Linguagem C";
  char palavra3[20];
  int x, y = 0;
  for (x = strlen(palavra2) - 1; x >= 0; x--)
  {
    palavra3[y] = palavra2[x];
    y++;
  }
  palavra3[y] = '\0';
  printf("palavra3 = %s\n", palavra3);

  return 0;
}