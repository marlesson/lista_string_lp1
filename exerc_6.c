/**
 * Questão 6 da lista de exercícios 5 da matéria de LP1
 * 
 * 6 - Escreva um programa que receba uma frase e imprima uma palavra por linha.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main( int argc, const char* argv[] ){
  char  string[100];
  int   i, len;

  printf("\nDigite uma STRING:\n");
  gets(string);

  len = strlen(string);

  for(i = 0; i < len ; i++){

    if (string[i] == ' '){
      printf("\n");
    }else{
      printf("%c", string[i]);
    }

  }

  return 0;
}