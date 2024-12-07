#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  /*
  E se desejássemos, por exemplo, contar quantas
  vogais estão presentes em uma string, como
  faríamos para descobrir isso? Segue alguns exemplos.
  */

  // Exemplo 1:
  char string1[20] = "Linguagem C";
  int i, total = 0;
  int tam1 = strlen(string1);
  for (i = 0; i < tam1; i++)
  {
    if (string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u')
    {
      total++;
    }
  }
  printf("Número de vogais: %d\n", total);
  printf("---------------------\n");

  // Exemplo 2:
  char string2[20] = "Linguagem C";
  char vogais[11] = "aeiouAEIOU";
  int x, y, total_vogais = 0;
  int tam2 = strlen(string2);
  int tam3 = strlen(vogais);
  for (x = 0; x < tam2; x++)
  {
    for (y = 0; y < tam3; y++)
    {
      if (string2[x] == vogais[y])
      {
        total_vogais++;
        break;
      }
    }
  }
  printf("Número de vogais: %d\n", total_vogais);

  return 0;
}