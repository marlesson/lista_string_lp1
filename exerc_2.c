/**
 * Questão 2 da lista de exercícios 5 da matéria de LP1
 * 
 * 2 - Escreva um programa que receba uma string do teclado e a imprima na tela um
 * caractere por linha.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main( int argc, const char* argv[] ){
  char  string[20];
  int   i, len;

  printf("\nDigite uma STRING:\n");

  scanf("%s", string);

  len = strlen(string);
  
  for(  i=0; i < len; i++)
    printf("\n%c", string[i]);

  return 0;
}