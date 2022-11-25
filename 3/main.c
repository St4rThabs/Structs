#include <stdio.h>
#include <string.h>
#include "mes.h"

int main(void) {
  Mes m[TAM];
  int i;
  char nome[i];
  recebeMes(m);
  printf("Leve em consideração que a conta é de 01/xx a 01/xx\n");
  printf("Entre com o nome ou abreviatura do mês: ");
  scanf("%s", nome);
  if(nome[strlen(nome) -1] == '\n') nome[strlen(nome) -1] = '\0';
  printf("Dias até o %s escolhido: %d", nome, diasAteMes(m, nome));
  return 0;
}