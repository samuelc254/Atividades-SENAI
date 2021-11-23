//Programa com objetivo de calcular media aritimetica e utilizar condição if

#include <stdio.h>

int n1, n2; // declaração de variaveis inteiras 
float m; // declaração de variavel com valor real

int main(void) {

  while(1){
    printf("--Programa para calcular média escolar--\n");
    printf("Insira sua primeira nota: ");
    scanf("%i",&n1);
    printf("Insira sua segunda nota: ");
    scanf("%i",&n2);
    m = (n1+n2)/2;
  
    if (m >= 50)
    {
      printf("Sua média é: %f\n", m);
      printf("parabéns você foi aprovado!\n\n");
    }
    else
    {
      printf("Sua média é: %f\n", m);
      printf("parabéns você foi reprovado!\n\n");
    }
  }
}