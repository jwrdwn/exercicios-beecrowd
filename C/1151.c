#include <stdio.h>
 
int main(){
 
    int n;
    long long i, atual, a = 1, b = 1;

    scanf("%d", &n);

    if(n <= 0 || n >= 46){
      return 0;
    }

    if(n == 1){
      printf("0");
    } else if(n == 2){
      printf("0 1");
    } else if(n == 3){
      printf("0 1 1");
    } else{
      printf("0 1 1 ");
      for(i = 3; i < n - 1; i++){
        atual = a + b;
        printf("%lld ", atual);
        a = b;
        b = atual;
      }
      printf("%lld\n", a+b);
    }

    return 0;
    
}