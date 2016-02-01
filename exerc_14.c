/**
 * Questão 14 da lista de exercícios 5 da matéria de LP1
 * 
   14 - Escreva um programa que leia três inteiros d, m e a que representam uma data (dia,
          mês e ano). Seu programa deve imprimir a data por extenso, i.e. para 1/1/1970 deve
          imprimir Primeiro de Janeiro de Milnovecentosetenta. Se a data for inválida uma
          mensagem de erro deve ser emitida
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main( int argc, const char* argv[] ){

  char *unidade[]   = {"", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};

  char *dezena[]    = {"", "dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", 
                        "dezenove", "vinte", "trinta", "quarenta", "cinqüenta", "sessenta", "setenta", "oitenta", "noventa"};

  char *centena[]   = {"", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", 
                        "seiscentos", "setecentos", "oitocentos", "novecentos"};

  char *milhar[]    = {"", "Mil ", "Dois Mil "};

  char *meses[]     = {"Janeiro", "Fevereiro", "Marco"}; // ... Dezembro

  char  string[10];
  char  c_dia[3], c_mes[3], c_ano[5];
  int   dia, mes, ano;
  int   i;

  printf("\nDigite a Data:\n");
  gets(string);

  // Copia dia  
  memcpy (c_dia, string, 2);
  c_dia[2] = '\0';

  // Conpia Mês
  memcpy (c_mes, string+3, 2);
  c_mes[2] = '\0';

  // Copia ano  
  memcpy (c_ano, string+6, 4);
  c_ano[4] = '\0';

  // Converte
  dia   = atoi(c_dia);
  mes   = atoi(c_mes);
  ano   = atoi(c_ano);

  // Imprime Dia
  if(dia == 1){
    printf("Primeiro de ");
  }else{
    printf("%d de ", dia);
  }

  // Imprime Mês
  printf("%s de ", meses[mes-1]);

  // milhar, centena, dezena, resto
  int m, c, d, r;

  //Milhar
  m = ano/1000;
  r = ano%1000;

  // Centena
  c = r/100;
  r = r%100;
  
  // Dezena
  d = r;

  // Imprime Ano
  printf("%s %s", milhar[m], centena[c]);

  if(d <= 19){
    printf(" %s", dezena[d-9]);
  }else{
    d = d/10;
    r = r%10;
    printf(" %s %s",dezena[d+9], unidade[r]);
  }
  
  return 0;
}