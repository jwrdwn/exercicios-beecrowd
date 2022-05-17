#include <stdio.h>
 
int main() {
 
  double A, B, C;
  double aTri, aCir, aTrap, aQua, aRet;
    
  scanf("%lf %lf %lf", &A, &B, &C);  
  
  aTri = (A*C)/2;
  aCir = (3.14159)*(C*C);
  aTrap = ((A+B)*C)/2;
  aQua = B*B;
  aRet = A*B;

  printf("TRIANGULO: %.3lf\n", aTri);
  printf("CIRCULO: %.3lf\n", aCir);
  printf("TRAPEZIO: %.3lf\n", aTrap);
  printf("QUADRADO: %.3lf\n", aQua);
  printf("RETANGULO: %.3lf\n", aRet);

  return 0;
}