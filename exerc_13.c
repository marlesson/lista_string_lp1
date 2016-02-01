/**
 * Questão 13 da lista de exercícios 5 da matéria de LP1
 * 
   13 - Faça um programa que dado 2 palavras, determine:
        a. Se as palavras são iguais;
        b. Caso as palavras sejam diferentes, qual delas tem maior comprimento (não
        esquecer a possibilidade de existirem palavras diferentes de mesmo tamanho);
        c. Verifique se a segunda palavra é uma sub string da primeira, i.e., Palavra 1
        =casamento, Palavra 2 = casa.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){
  char  string[100], string2[200];
  int   i, len, result;

  printf("\nDigite a STRING 1:\n");
  gets(string);

  printf("\nDigite a STRING 2:\n");
  gets(string2);


  if(strcmp(string, string2) == 0){

    printf("A string é igual!\n");
  }else if(strlen(string) > strlen(string2)){

    printf("A string 1 é maior!\n");

  }else{

    printf("A string 2 é maior!\n");
  }

  if(strstr(string, string2) > 0){
    printf("A palavra %s é substring de %s", string2, string );
  }

  return 0;
}