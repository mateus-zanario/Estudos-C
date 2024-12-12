#include <stdio.h>
#include <stdlib.h>

int main()
{
  int cont, qnt_p, qnt_n, soma_p, soma_n, num;

  qnt_p = 0;
  qnt_n = 0;
  soma_p = 0;
  soma_n = 0;
  cont = 0;

  while (cont < 6)
  {
    cont = cont + 1;
    printf("Digite um número:\n");
    scanf("%d", &num);
    if (num >= 0)
    {
      qnt_p = +;
      soma_p = +num;
    }
    else
    {
      qnt_n = +1;
      soma_n = +num;
    }
  }

  printf("Quantidade de números positivos: %d\n", qnt_p);
  printf("Quantidade de números negativos: %d\n", qnt_n);
  printf("Soma dos números positivos: %d\n", soma_p);
  printf("Soma dos números negativos: %d\n", soma_n);
  return 0;
}