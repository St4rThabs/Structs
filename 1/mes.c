#include "mes.h"
#include <stdio.h>
#include <string.h>

void recebeMes(Mes m[], int tamanho) {
  int i;
  for (i = 0; i < tam; i++) {
    fgets(m[i].mes, sizeof(m[i].mes), stdin);
  }
}

void abreviacaoMes(Mes m[], int tamanho){
  int i;
  strncpy(m[i].abreviacao, m[i].mes, sizeof(m[i].abreviacao));
  printf("%s", m[i].abreviacao);
}

int diasMes(Mes m[], int tamanho) {
  int i;
  if (strcmp(m[i].mes, "janeiro") == 0) { 
        m[i].dias = 31;
        return m[i].dias;
    }
  if (strcmp(m[i].mes, "fevereiro") == 0) { 
        m[i].dias = 28;
        return m[i].dias;
    }
  if (strcmp(m[i].mes, "março") == 0) { 
        m[i].dias = 31;
        return m[i].dias;
    }
  if (strcmp(m[i].mes, "abril") == 0) { 
        m[i].dias = 30;
    }
  if (strcmp(m[i].mes, "maio") == 0) { 
        m[i].dias = 31;
        return m[i].dias;
    }
  if (strcmp(m[i].mes, "junho") == 0) { 
        m[i].dias = 30;
        return m[i].dias;
    }
  if (strcmp(m[i].mes, "julho") == 0) { 
        m[i].dias = 31;
        return m[i].dias;
    }
  if (strcmp(m[i].mes, "agosto") == 0) { 
         m[i].dias = 31;
    }
  if (strcmp(m[i].mes, "setembro") == 0) { 
         m[i].dias = 30;
        return m[i].dias;
    }
  if (strcmp(m[i].mes, "outubro") == 0) { 
        m[i].dias = 31;
        return m[i].dias;
    }
  if (strcmp(m[i].mes, "novembro") == 0) { 
        m[i].dias = 30;
        return m[i].dias;
    }
  if (strcmp(m[i].mes, "dezembro") == 0) { 
        m[i].dias = 31;
        return m[i].dias;
    }
}