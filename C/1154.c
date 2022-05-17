#include <stdio.h>
 
int main(){

  double n, n1, nova = 0, i;
  double media;

  scanf("%lf", &n);
  if(n < 0){
    return 0;
  }

    nova = n;
  
  for(i = 1; n >= 0; i++){
    scanf("%lf", &n);
    if(n > 0){
      nova += n;
      }
  }
  
  media = (float)nova/((float)i - 1);

  printf("%.2lf\n", media);

    return 0;

}