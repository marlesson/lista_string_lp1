/**
 * Questão 12 da lista de exercícios 5 da matéria de LP1
 * 
   12 - Fazer um programa para receber uma string do usuário (máx. 100 caracteres) e fazer
uma estatística dos caracteres digitados. Por exemplo, para a string “O EXERCICIO E
FACIL”, a estatística mostrada será 'O' = 2, ' '=3, 'E' = 3, 'X' = 1, 'R' = 1, 'C' = 3, 'I' =
3, 'F' = 1, 'A' = 1, 'L' = 1.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){
  char  string[100];
  char  somatorio[256]; // Usa 256 pois a tabela ASC só tem 256 elementos
  int   i, len;

  // Inicia valores como zero
  for(i = 0; i < 256; i++){
    somatorio[i] = 0;
  }

  printf("\nDigite a STRING:\n");
  gets(string);

  len = strlen(string);

  for (i = 0; i < len; i++) {
    somatorio[string[i]]++;
  }

  // Inicia valores como zero
  for(i = 0; i < 256; i++){
    if(somatorio[i] != 0){
      printf("%c = %d\n", i, somatorio[i]);
    }
  }

  return 0;
}