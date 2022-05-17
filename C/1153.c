#include <stdio.h>
 
int main(){
 
  int n, i;

  scanf("%d", &n);
  if(n <= 0 || n >= 13){
    return 0;
  }

  for(i = 1; n > 1; n -= 1){
    i *= n;
  }

  printf("%d\n", i);

    return 0;
    
}