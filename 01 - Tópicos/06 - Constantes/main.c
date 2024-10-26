#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415 // primeira forma de declarar uma constante(substituição durante a compilação)

int main()
{
  float x = PI + 1;
  printf("PI = %f\n", x);

  // segunda forma de declarar uma constante(alocação na memória)
  const int num = 10; // obrigatório declarar um valor
  int soma = num + 1;
  printf("Número: %d\n", soma);

  system("pause");
  return 0;
}
