typedef struct {
  char mes[10];
  char abreviacao[3]; 
  char nMes[12];
  int dias;
} Mes;

#define TAM 12

void meses(Mes m[]);
int diasAteMes(Mes m[], char nome[], int dias);