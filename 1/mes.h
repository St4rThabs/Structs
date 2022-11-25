typedef struct {
  char mes[10];
  char abreviacao[3]; 
  int dias;
} Mes;

#define tam 1

void recebeMes(Mes m[], int tamanho);
void abreviacaoMes(Mes m[],int tamanho);
int diasMes(Mes m[], int tamanho);