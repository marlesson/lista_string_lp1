/**
 * Questão 1 da lista de exercícios 5 da matéria de LP1
 * 
 * 1- Escreva um programa que receba uma string do teclado e a imprima na tela.
 */

#include <stdio.h>
#include <stdlib.h>


int main( int argc, const char* argv[] ){
  char string[20];

  printf("\nDigite uma STRING:\n");

  scanf("%s", string);

  printf("Você escreveu: %s", string);

  return 0;
}