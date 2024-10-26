#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  O comando continue permite interromper a repetição
  atual de qualquer comando de laço(while, for ou do-while)
  e avança para a próxima repetição

  forma geral:
  repetição(condição1) {
    if(condição2){
      continue;
    }
  }
  */

  // exemplo:
  int a, b;
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  while (a <= b)
  {
    a++;
    if (a == 5)
    {
      continue;
    }
    printf("%d\n", a);
  }
  return 0;
}