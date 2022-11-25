#include "mes.h"
#include <stdio.h>
#include <string.h>

void meses(Mes m[]) {

  strncpy(m[0].mes, "janeiro", sizeof(m[0].mes));
  strncpy(m[0].abreviacao, "jan", sizeof(m[0].mes));
  strncpy(m[0].nMes, "1", sizeof(m[0].mes));
  m[0].dias = 31;

  strncpy(m[1].mes, "fevereiro", sizeof(m[1].mes));
  strncpy(m[1].abreviacao, "fev", sizeof(m[1].mes));
  strncpy(m[1].nMes, "2", sizeof(m[1].mes));
  m[1].dias = 28;

  strncpy(m[2].mes, "março", sizeof(m[2].mes));
  strncpy(m[2].abreviacao, "mar", sizeof(m[2].mes));
  strncpy(m[2].nMes, "3", sizeof(m[2].mes));
  m[2].dias = 31;

  strncpy(m[3].mes, "abril", sizeof(m[3].mes));
  strncpy(m[3].abreviacao, "abr", sizeof(m[3].mes));
  strncpy(m[3].nMes, "4", sizeof(m[3].mes));
  m[3].dias = 30;

  strncpy(m[4].mes, "maio", sizeof(m[4].mes));
  strncpy(m[4].abreviacao, "mai", sizeof(m[4].mes));
  strncpy(m[4].nMes, "5", sizeof(m[4].mes));
  m[4].dias = 31;

  strncpy(m[5].mes, "junho", sizeof(m[5].mes));
  strncpy(m[5].abreviacao, "jun", sizeof(m[5].mes));
  strncpy(m[5].nMes, "6", sizeof(m[5].mes));
  m[5].dias = 30;

  strncpy(m[6].mes, "julho", sizeof(m[6].mes));
  strncpy(m[6].abreviacao, "jul", sizeof(m[6].mes));
  strncpy(m[6].nMes, "1", sizeof(m[6].mes));
  m[6].dias = 31;

  strncpy(m[7].mes, "agosto", sizeof(m[7].mes));
  strncpy(m[7].abreviacao, "ago", sizeof(m[7].mes));
  strncpy(m[7].nMes, "8", sizeof(m[7].mes));
  m[7].dias = 31;

  strncpy(m[8].mes, "setembro", sizeof(m[8].mes));
  strncpy(m[8].abreviacao, "set", sizeof(m[8].mes));
  strncpy(m[8].nMes, "9", sizeof(m[8].mes));
  m[8].dias = 30;

  strncpy(m[9].mes, "outubro", sizeof(m[9].mes));
  strncpy(m[9].abreviacao, "out", sizeof(m[9].mes));
  strncpy(m[9].nMes, "10", sizeof(m[9].mes));
  m[9].dias = 31;

  strncpy(m[10].mes, "novembro", sizeof(m[10].mes));
  strncpy(m[10].abreviacao, "nov", sizeof(m[10].mes));
  strncpy(m[10].nMes, "11", sizeof(m[10].mes));
  m[10].dias = 30;

  strncpy(m[11].mes, "dezembro", sizeof(m[11].mes));
  strncpy(m[11].abreviacao, "dez", sizeof(m[11].mes));
  strncpy(m[11].nMes, "12", sizeof(m[11].mes));
  m[11].dias = 31;
}

int diasAteMes(Mes m[], char nome[], int ndias) {
  int i = 0, somaDias = 0;

  while(strcmp(nome, m[i].mes) != 0 && strcmp(nome, m[i].abreviacao) != 0 && strcmp(nome, m[i].nMes) != 0) {
   somaDias = somaDias + m[i].dias;
    i++;
  }
 
  return somaDias + ndias;
}
