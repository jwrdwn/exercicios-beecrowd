#include <stdio.h>
 
int main() {
 
  int codP1, codP2, quantP1, quantP2;
  float precoP1, precoP2;
    
  scanf("%d %d %f", &codP1, &quantP1, &precoP1);
  scanf("%d %d %f", &codP2, &quantP2, &precoP2);
  
  float venda = (quantP1*precoP1)+(quantP2*precoP2);  

  printf("VALOR A PAGAR: R$ %.2lf\n", venda);
 
  return 0;
}