/**
 * Questão 15 da lista de exercícios 5 da matéria de LP1
 * 
   15 - Faça um programa que leia três nomes e os imprima em ordem alfabético. Sugestão:
Utilize um vetor de strings (uma matriz de caracteres) para armazenar os nomes.
Lembre que caracteres individuais podem ser tratados como números inteiros.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Tamanho do vetor de strings
#define TAN 3

int main( int argc, const char* argv[] ){
  char  nome[TAN][10];
  int   ord[TAN];
  int   i, j, k, aux;

  for(i = 0 ; i < TAN; i++){
    printf("\nDigite String %d:\n", i);
    gets(nome[i]);

    ord[i] = i;
  }

  // Ordena o vetor
  // 
  for( i = TAN-1; i >= 1; i-- ){
    for( j = 0; j < i; j++ ){

      if (strcmp(nome[ord[j]], nome[ord[j+1]]) > 0){
         aux      = ord[j];
         ord[j]   = ord[j+1];
         ord[j+1] = aux;
      }
    }
  } // fim da ordenação

  // Imprime valores usando o vetor de ordenação
  for(i =0 ; i < TAN; i++){
    printf("\t\t%d - %s\n", i, nome[ord[i]]);
  }
  
  return 0;
}