#include <stdio.h>
 
int main() {
 
  double a;
  double b;
  double c;
    
  scanf(" %lf", &a);
  scanf(" %lf", &b);
  scanf(" %lf", &c);

  a *= 2;
  b *= 3;
  c *= 5;

  double MEDIA = (a+b+c)/10;

  printf("MEDIA = %.1lf\n", MEDIA);
 
  return 0;
}