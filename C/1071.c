#include <stdio.h>

int main(){

    int i, x, y, soma = 0;
    int min, max;

    scanf("%d %d", &x, &y);

    if(x>y){
        min = y;
        max = x;
    } else{
        max = y;
        min = x;
    }
    
    for(i = (min + 1); i < max; ++i){
        if(i % 2 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;

}