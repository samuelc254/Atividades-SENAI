//Programa com objetivo de calcular media aritimetica e utilizar condição if

#include <stdio.h>

float m, n1, n2, n3;

int main(void)
{

  while (1)
  {
    printf("--Programa para calcular média escolar--\n");
    printf("Insira suas três notas: ");
    scanf("%f%f%f", &n1,&n2,&n3);
    m = (n1 + n2) / 2;
    printf("Sua média é: %.2f\n", m);

    if (m >= 50)
    {
      printf("Parabéns você foi aprovado!\n\n");
    }
    else if (m >= 46)
    {
      printf("Parabéns você vai passar por conselho!\n\n"); 
    }
    else
    {
      printf("Parabéns você foi reprovado!\n\n");
    }
  }
}