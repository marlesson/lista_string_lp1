/**
 * Questão 8 da lista de exercícios 5 da matéria de LP1
 * 
 * 8 - Escreva um programa que leia duas strings e determine se elas formam um anagrama.
 *      Uma string é igual a outra lida em ordem reversa; exemplo: AMOR - ROMA
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){
  char  string_1[10], string_2[10];
  int   i;

  printf("\nDigite a primeiro STRING:\n");
  gets(string_1);

  printf("\nDigite a segunda STRING:\n");
  gets(string_2);

  if(strlen(string_1) != strlen(string_2)){
    printf("NÃO é um anagrama!\n");
    return 1;
  }

  // Tamanho da string 1 = string 2
  int size = strlen(string_1);
  
  /*
  Percorre apenas metade da string, com um 'indice1' que 
  vai da esquerda -> direita na string1 e um 'indice2' que vai 
  da direita pra esquerda
   */
  for(i = 0; i < size/2 ; i++){
    if(string_1[i] != string_2[size-i-1]){
      printf("NÃO é um anagrama!\n");
      return 1;
    }
  }

  printf("É um anagrama\n");
  return 0;
}