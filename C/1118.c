#include <stdio.h>

int main(){

  double n1, n2, media;
  int resp;

  do{
    do{
        scanf("%lf", &n1);
        if(n1 < 0 || n1 > 10){
            printf("nota invalida\n");
        } 
    } while(n1 < 0 || n1 > 10);

    do{
        scanf("%lf", &n2);
        if(n2 < 0 || n2 > 10){
            printf("nota invalida\n");
        } 
    } while(n2 < 0 || n2 > 10);

    media = (n1 + n2)/2;

    printf("media = %.2lf\n", media);

    do{
      printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &resp);
    } while(resp != 1 && resp != 2);
      
  } while(resp == 1);
  
  return 0;

}