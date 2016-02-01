/**
 * Questão 9 da lista de exercícios 5 da matéria de LP1
 * 
 * Escreva um programa que receba uma string e informe:
    a. número de palavras,
    b. número de caracteres,
    c. número de caracteres em maiúscula,
    d. número de caracteres em minúscula,
    e. quantidade de caracteres numéricos
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){
  char  string[10];
  int   n_pal, n_ch, n_ch_up, n_ch_down, n_ch_num;
  int   i, len;

  printf("\nDigite a STRING:\n");
  gets(string);

  // Inicia tudo como zero
  n_pal = n_ch = n_ch_up = n_ch_down = n_ch_num = 0;

  len = strlen(string);

  for(i = 0; i < len; i++){
    
    // Conta palavras
    if(string[i] == ' ' || i ==0)
      n_pal++;

    // Conta caracteres maiusculo
    if(isupper(string[i]))
      n_ch_up++;

    // Conta caracteres minusculos
    if(islower(string[i]))
      n_ch_down++;

    // Conta caracteres maiusculo
    if(isdigit(string[i]))
      n_ch_num++;
  }

  // conta carateres = strlen(string)
  n_ch = len;

  printf("Número de palavras: %d\n", n_pal);
  printf("Número de caracteres: %d\n", n_ch);
  printf("Número de caracteres em maiúscula: %d\n", n_ch_up);
  printf("Número de caracteres em minúscula: %d\n", n_ch_down);
  printf("Quantidade de caracteres numéricos: %d\n", n_ch_num);

  return 0;
}