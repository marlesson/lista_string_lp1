/**
 * Questão 5 da lista de exercícios 5 da matéria de LP1
 * 
 * 5 - Escreva um programa que leia uma string e imprima ela em ordem reversa.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){
  char  string[20];
  int   i;

  printf("\nDigite uma STRING:\n");
  scanf("%s", string);

  for(i = (strlen(string)-1) ; i >=0; i--){
    printf("%c", string[i]);
  }

  return 0;
}