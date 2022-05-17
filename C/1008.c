#include <stdio.h>
 
int main() {
 
  int numero;
  int horasMes;
  float salary;
    
  scanf(" %d", &numero);
  scanf(" %d", &horasMes);
  scanf(" %f", &salary);

  float salaryM = horasMes * salary;

  printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salaryM);
 
  return 0;
}