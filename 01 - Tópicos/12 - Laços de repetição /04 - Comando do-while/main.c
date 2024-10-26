#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  O comando do-while permite executar, repetidamente
  e AO MENOS UMA VEZ, um conjunto de comandos de acordo
  com uma condição

  forma geral:
  do {
    conjunto de comandos;
  } while(condição);
  */
  // exemplo 1:
  int a, b;
  printf("Digite dois valores inteiros: ");
  scanf("%d %d", &a, &b);
  do
  {
    printf("%d\n", a);
    a++;
  } while (a <= b);

  // exemplo 2:
  int x, y;
  printf("Digite dois valores inteiros: ");
  scanf("%d %d", &x, &y);
  do
  {
    printf("%d\n", x);
    x++;
  } while ((x <= y) && (x > 0));

  // exepmplo 3:
  int i;
  do
  {
    printf("Escolha uma opção:\n");
    printf("(1) Opção 1:\n");
    printf("(2) Opção 2:\n");
    printf("(3) Opção 3:\n");
    scanf("%d", &i);
  } while ((i < 1) || (i > 3));
  printf("Você escolheu a opção %d\n", i);
  printf("Fim do programa.\n");

  return 0;
}