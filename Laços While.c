#include <stdio.h>

int i = 0;

int main(void) {

  while(100>i){
  printf("Ciclo: %d\n", i);
  i++;
  }

  while(0<=i){
  printf("Ciclo: %d\n", i);
  i--;
  }

}