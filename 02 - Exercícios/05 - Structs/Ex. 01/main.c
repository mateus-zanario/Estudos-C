#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int idade;
  int sexo;
  int numero_filhos;
  float salario;

} Entrevistado;

int main()
{

  Entrevistado entrevistado[10];
  float soma = 0;
  float maior = 0, menor = 0;
  int qnt_pobres, qnt_maes;

  for (int i = 0; i < 9; i++)
  {
    printf("\nInforme o salário do funcionaro %d", i);
    scanf("%f", &entrevistado[i].salario);

    printf("\nInforme o sexo do funcionarrio %d\n\n1-Masculino\n2-Feminino", i);
    scanf("%d", &entrevistado[i].sexo);

    printf("\nInforme a quantidade de filhos do funcionaro %d", i);
    scanf("%d", &entrevistado[i].numero_filhos);

    soma = +entrevistado[i].salario;

    // Definindo maior e menor salario
    if (entrevistado[i].salario >= maior)
    {
      maior = entrevistado[i].salario;
    }

    if (entrevistado[i].salario <= menor)
    {
      menor = entrevistado[i].salario;
    }

    // Definindo quantidade de pessoas na regra definida
    if (entrevistado[i].salario < 1000 && entrevistado[i].numero_filhos > 5)
    {
      qnt_pobres++;
    }
    if (entrevistado[i].sexo == 2 && entrevistado[i].numero_filhos > 0)
    {
      qnt_maes++;
    }
  }

  printf("A media dos salarios eh de: ", soma / 10);
  printf("O maior salario eh de %.2f e o menor eh de %.2f.", maior, menor);
  printf("A quantidade de maes entrevistadas foi de", qnt_maes);
  printf("A quantidade de pessoas com mais de 5 filhos e com menos de 1000 reais de salario foi de", qnt_pobres);

  return 0;
}