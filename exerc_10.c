/**
 * Questão 10 da lista de exercícios 5 da matéria de LP1
 * 
 * . Faça um programa que receba uma string do usuário (máx. 50 caracteres) e um
      caractere qualquer. O programa deve remover todas as ocorrências do caractere da
      string e mostrar o resultado.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){
  char  string[50];
  char  n_string[50]; // Nova String
  char  ch, ch_aux;
  int   i, j, len;

  printf("\nDigite a STRING:\n");
  gets(string);

  printf("\nDigite a Carater:\n");
  scanf("%s", &ch);


  len = strlen(string);

  for (i = 0, j = 0; i < len; i++) {
    if (string[i] != ch) {

      // Copia apenas os caracteres diferentes para a nova string
      ch_aux      = string[i];
      n_string[j] = ch_aux;
      j++;
    }
  }

 // Adiciona o \0, finalizador de string.
 n_string[j] = '\0';

 printf("\nNova String sem o caracter '%c' : %s", ch, n_string);  

  return 0;
}