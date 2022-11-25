#include "mes.h"
#include <stdio.h>

void recebeMes(Mes m[]) {
  int i;
  for(i=0; i<TAM;i++){
    printf("Insira o número do mês: ");
    scanf("%d", &m[i].mes);
    }
}

int diasAteMes(Mes m[]){
  int i, mes30 = 30, mes31 = 31;
  
  switch(m[i].mes){
    case 1:
     m[i].dias = 0;
    break;
    case 2:
      m[i].dias = mes31;
      
    break;
    case 3:
       m[i].dias = 28+mes31;
    
    break;
    case 4:
      m[i].dias = 28+mes31+mes30;
     
    break;
    case 5:
      m[i].dias = 28+(mes31*2)+mes30;
     
    break;
    case 6:
      m[i].dias = 28+(mes31*2)+(mes30*2);
    
    break;
    case 7:
      m[i].dias = 28+(mes31*3)+(mes30*3);
      
    break;
    case 8:
      m[i].dias = 28+1+(mes31*3)+(mes30*3);
      
    break;
    case 9:
      m[i].dias = 28+1+(mes31*4)+(mes30*3);

    break;
    case 10:
      m[i].dias = 28+1+(mes31*4)+(mes30*4);

    break;
    case 11:
      m[i].dias = 28+1+(mes31*5)+(mes30*4);
    break;
    case 12:
      m[i].dias = 28+1+(mes31*5)+(mes30*5);
    break;
    default: printf("\nNão há mês de número %d\n", m[i].mes);
    break;
    
  }
  if(m[i].mes>=1 && m[i].mes<=12){
    return m[i].dias;
  } else {
    return 0;
  }
   
}