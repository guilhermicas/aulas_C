#include <stdio.h>

int main(){
  int idades[4] = {1,2,3,4};

  printf("Endereço de idades: %p \n", &idades);

  printf("&idades[0] = %p \n", &idades + (0 * sizeof(int)));

  printf("&idades[1] = %p \n", &idades + (1 * sizeof(int)));

  printf("&idades[2] = %p \n", &idades + (2 * sizeof(int)));

  printf("&idades[3] = %p \n", &idades + (3 * sizeof(int)));

}
