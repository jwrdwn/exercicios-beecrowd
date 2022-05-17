#include <stdio.h>
 
int main() {
 
  double const pi = 3.14159;
  double raio;
    
  scanf("%lf", &raio);  
  
  double volume = (4.0/3)*pi*(raio*raio*raio);  

  printf("VOLUME = %.3lf\n", volume);
 
  return 0;
}