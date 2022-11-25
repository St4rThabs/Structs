#include <stdio.h>
#include "mes.h"

int main(void) {
  Mes m[TAM];
  recebeMes(m);
  printf("Leve em consideração que a conta é de 01/xx a 01/xx\n");
  printf("Dias até o mês escolhido: %d", diasAteMes(m));
  return 0;
}