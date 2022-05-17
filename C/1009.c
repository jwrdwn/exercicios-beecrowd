#include <stdio.h>
 
int main() {
 
  char nome[9];
  double salario, vendas;
  double porc = 0.15;
    
  scanf(" %s", &nome);
  scanf(" %lf", &salario);
  scanf(" %lf", &vendas);

  
  double total = (vendas*porc)+salario;

  printf("TOTAL = R$ %.2lf\n", total);
 
  return 0;
}