#include <stdio.h>
#include <string.h>
#include "mes.h"

int main(void) {
  Mes m[TAM];
  int dias,i;
  char nome[i];

  meses(m);
  printf("Entre com o nome ou abreviatura do mês: ");
  scanf("%s", nome);
  if(nome[strlen(nome) -1] == '\n') nome[strlen(nome) -1] = '\0';
  printf("Entre com o dia: ");
  scanf("%d", &dias);
  printf("Há %d dias até o dia %d de %s", diasAteMes(m, nome, dias), dias, nome);
  
  
  return 0;
  
}