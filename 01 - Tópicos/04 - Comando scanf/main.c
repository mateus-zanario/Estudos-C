#include <stdio.h>
#include <stdlib.h>

int main()
{
  // declaração de variáveis
  // char letra;
  // int num;
  // float x;
  // double y;

  // leitura de dados do teclado para guardar nas variáveis
  // scanf("Tipos de entrada", &variável);
  // semrpre usar o "&" antes do nome da variável
  // scanf("%c", &letra); %c = caracter
  //  scanf("%d", &num);  %d = inteiro
  // scanf("%f", &x);     %f = real(float e double)
  // scanf("%f", &y);     %f = real(float e double)

  // exemplo 1:
  // declaração da variável
  int a;

  // pedido de valor ao usuário
  printf("Digite um número: ");

  // recebimento de valor e armazenamento na variável
  scanf("%d", &a);

  // exibição do número na tela
  printf("O número digitado foi: %d \n", a);

  // exempo 2:
  // declaração de variáveis
  int b;
  float c;

  // pedido de valores ao usuário
  printf("Digite dois números: ");

  // recebimento de valores e armazenamento nas variáveis
  scanf("%d%f", &b, &c);

  // exibição dos valores ao usuário
  printf("Os números digitados foram: %d e %f\n", b, c);

  system("pause");
  return 0;
}