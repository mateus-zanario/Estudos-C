#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Definição:
  O comando switch permite fazer seleções
  multiplas com base no valor de uma variável
  do tipo int ou char.

  Forma geral:
  switch(variável) {
    case valor1:
      conjunto de comandos;
      break;
    case valor2:
      conjunto de comandos;
      break;
    case valorN:
      conjunto de comandos;
      break;
    default:
      conjunto de comandos;
  }
  */

  // exemplos:
  char ch;
  printf("Digite um símbolo de pontuação: ");
  scanf("%c", &ch);
  switch (ch)
  {
  case '.':
    printf("Ponto.\n");
    break;
  case ',':
    printf("Vírgula.\n");
    break;
  case ':':
    printf("Dois pontos.\n");
    break;
  case ';':
    printf("Ponto e vírgula.\n");
    break;
  default:
    printf("Não é pontuação.\n");
  }

  return 0;
}