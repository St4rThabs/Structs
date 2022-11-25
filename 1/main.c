#include <stdio.h>
#include "mes.h"

int main(void) {

  Mes m[tam];

  printf("Insira um mês: ");
  recebeMes(m, tam);
  printf("Abreviação: ");
  abreviacaoMes(m, tam);
  printf("\nNúmero de dias no mês: %d", diasMes(m, tam));
  return 0;
}