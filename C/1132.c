#include <stdio.h>
 
int main(){
    
    int n1, n2, min, max, soma = 0;

    scanf("%d %d", &n1, &n2);

    if(n1 > n2)    {
        max = n1;
        min = n2;
    } else{
        max = n2;
        min = n1;
    }
    
    for(int i = (min); i <= max; ++i){
        if(i % 13 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
    
}