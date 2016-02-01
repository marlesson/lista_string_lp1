/**
 * Questão 7 da lista de exercícios 5 da matéria de LP1
 * 
 * 7 - Escreva um programa que receba 4 strings que representam inteiros, converta as
 *     strings em inteiros e imprima a soma dos quatro valores. Se uma string não
 *     representar um inteiro uma mensagem de erro deve ser emitida.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){
  char  s_val_1[10], s_val_2[10], s_val_3[10];
  int   i, soma;

  printf("\nDigite primeiro número:\n");
  gets(s_val_1);

  // Verifica primeiro número
  for(i = 0; i < strlen(s_val_1) ; i++){
    if (!isdigit(s_val_1[i]) && !(i==0 && s_val_1[i] == '-')){
      printf("O primeiro número '%s' não é um inteiro. Erro!\n", s_val_1);
      return 1;
    }
  }

  printf("Digite segundo número:\n");
  gets(s_val_2);

  // Verifica segundo número
  for(i = 0; i < strlen(s_val_2) ; i++){
    if(!isdigit(s_val_2[i]) && !(i==0 && s_val_2[i] == '-')){
      printf("O primeiro segundo '%s' não é um inteiro. Erro!\n", s_val_2);
      return 1;
    }
  }

  printf("Digite terceiro número:\n");
  gets(s_val_3);
  
  // Verifica terceiro número
  for(i = 0; i < strlen(s_val_3) ; i++){
    if(!isdigit(s_val_3[i]) && !(i==0 && s_val_3[i] == '-')){
      printf("O primeiro terceiro '%s' não é um inteiro. Erro!\n", s_val_3);
      return 1;
    }
  }  


  soma = atoi(s_val_1)+atoi(s_val_2)+atoi(s_val_3);

  printf("\n\nA soma total é: %d\n", soma);

  return 0;
}