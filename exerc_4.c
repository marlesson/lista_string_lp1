/**
 * Questão 4 da lista de exercícios 5 da matéria de LP1
 * 
 * 4 - Escreva um programa que receba uma string do teclado e um parâmetro. Se o
 *      parâmetro for verdadeiro imprima ela em maiúsculas senão imprima ela em
 *      minúsculas.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){
  char  string[20];
  int   param, i, len;

  printf("\nDigite uma STRING:\n");
  scanf("%s", string);

  printf("\nDigite o parâmetro \n(0 -> minúscilo, 1-> maipuscula):\n");
  scanf("%d", &param);

  if(param != 0 && param != 1){
    printf("Parametro desconhecido!\n");
    return 1;
  }

  len = strlen(string);

  for( i=0; i< len; i++){
    if(param){
      printf("%c", toupper(string[i]));
    }else{
      printf("%c", tolower(string[i]));
    }
  }

  return 0;
}