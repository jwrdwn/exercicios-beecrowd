#include <stdio.h>
 
int main() {
 
  double a;
  double b;
    
  scanf(" %lf", &a);
  scanf(" %lf", &b);

  double MEDIA = ((a*3.5)+(b*7.5))/11;

  printf("MEDIA = %.5lf\n", MEDIA);
 
  return 0;
}