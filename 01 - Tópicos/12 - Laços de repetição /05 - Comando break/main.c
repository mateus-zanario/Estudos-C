#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Definiçãao:
  O comando break permite interromper a repetição
  de qualquer comando de laço(while, for ou do-while).

  Forma geral:
  repetição(condição1){
    if(condição2){
    break;
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
      break;
    }
    printf("%d\n", a);
  }

  return 0;
}