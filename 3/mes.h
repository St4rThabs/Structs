typedef struct {
  char mes[10];
  char abreviacao[4];
  int dias;
} Mes;

#define TAM 12

void recebeMes(Mes m[]);
int diasAteMes(Mes m[], char nome[]);