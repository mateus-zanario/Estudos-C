#include <stdio.h>
#include <stdlib.h>

int main()
{
  // variávl = expressão
  int x = 5;  // atribuição com valor inteiro
  int y = x;  // atribuição com uma variável
  y = x + 10; // atribuição com uma expressão matemática

  // alguns erros em atribuição:
  // 5 = y; -> ordem errada
  // x + 10 = y; -> ordem errada

  // atribuições múltiplas:
  int a, b, c;
  a = b = c = 10;

  system("pause");
  return 0;
}