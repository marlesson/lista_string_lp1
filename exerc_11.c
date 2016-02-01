/**
 * Questão 11 da lista de exercícios 5 da matéria de LP1
 * 
    Faça um programa que dado um nome completo, retorne a abreviatura deste nome.
    Não se devem abreviar as preposições como: do, de, etc. A abreviatura deve vir
    separada por pontos. Ex: Paulo Jose de Almeida Prado. Abreviatura: P.J.A.P.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){
  char  string[50];
  char  prep[3][5] = {" de", " da", " dos"};
  char  *sub;

  int   i;

  printf("\nDigite a STRING:\n");
  gets(string);

  //  retira preposições
  //  memmove (to, from, count);
  for(i = 0; i < 3; i++){
    while((sub = strstr(string, prep[i])) != NULL){
      memmove(sub, sub+strlen(prep[i]), 1+strlen(sub)-strlen(prep[i]));
    }
  }

  printf("\nNome Abreviado: '%s'", string);  

  return 0;
}