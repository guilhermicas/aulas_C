#include <stdio.h>

int main(){
  int idade; // Alocação
  idade = 18; // Inicialização

  // String == array de chars
  char nome[6] = {'T','i','a','g','o','\0'};

  // 1 char = 8 bits, 6 chars = 8*6 = 48 bits
  // char nome[6] estamos a dizer que queremos alocar 6 chars todos de seguida na RAM

  int idades[4] = {1,2,3,4}; 
  // int idades[4] estamos a dizer que queremos alocar 4 ints todos de seguida na RAM

  //idades[0] = int = 4 bytes = 32 bits
  //idades[1] = int = 4 bytes = 32 bits
  //idades[2] = int = 4 bytes = 32 bits
  //idades[3] = int = 4 bytes = 32 bits
  //                    Total = 128 bits

  // int = 4 bytes = 32 bits
  // idades quer 4 ints, então quer 4*4 bytes = 128 bits

  // Pode-se deixar o compilador automaticamente assumir o tamanho da string
  char nome1[] = "Tiago";

  /*
   * Para se dar print precisa-se de se usar o format specifier correto
   * %d <- digitos
   * %c <- caracteres
   * %s <- strings (array de caracteres)
  */

  printf("%d\n", idade);
  printf("%c\n", nome[0]);
  printf("%s\n", nome);

  
}
