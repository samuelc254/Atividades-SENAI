//Programa com objetivo de calcular media aritimetica e utilizar condição if

#include <stdio.h>

float m, n1, n2; // declaração de variavel com valor real

int main(void)
{

  while (1)
  {
    printf("--Programa para calcular média escolar--\n");
    printf("Insira suas duas notas: ");
    scanf("%f%f", &n1,&n2);
    m = (n1 + n2) / 2;
    printf("Sua média é: %.2f\n", m);

    if (m >= 50)
    {
      printf("parabéns você foi aprovado!\n\n");
    }
    else
    {
      printf("parabéns você foi reprovado!\n\n");
    }
  }
}