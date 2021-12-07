//Programa com objetivo de calcular media aritimetica e utilizar switch case

#include <stdio.h>

int m, n1, n2, n3;

int main(void)
{
  while (1)
  {
    printf("--Programa para calcular média escolar--\n");
    printf("Insira suas três notas: ");
    scanf("%i%i%i", &n1,&n2,&n3);
    m = (n1 + n2 + n3) / 2;

    switch(m)
    {
      case 10:
      case 9:
      case 8:
      case 7:
        printf("Sua média é: %i\n", m);
        printf("Parabéns você foi aprovado!\n\n");
        break;
      case 5:
        printf("Sua média é: %i\n", m);
        printf("Você vai passar por conselho!\n\n"); 
        break;
      case 4:
      case 3:
        printf("Sua média é: %i\n", m);
        printf("Parabéns você foi reprovado!\n\n");
        break;
      case 2:
      case 1:
        printf("Sua média é: %i\n", m);
        printf("mlk tu foi muito reprovadokkkkjkjk!\n\n");
        break;
      default:
        printf("Sua média é: %i\n", m);
        printf("Algo de errado não está certokkkkkjjkj!\n\n");  
    }
  }
}