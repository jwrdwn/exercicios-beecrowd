#include <stdio.h>
 
int main(){
    
    int x, y, min, max, soma = 0;

    do{
        scanf("%d %d", &x, &y);
        if(x > y){
            min = y;
            max = x;
        } else{
            min = x;
            max = y;
        }

        if(x > 0 && y > 0){
            for(int i = min; i <= max; i++){
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
        }

        soma = 0;

    } while(x > 0 && y > 0);

    return 0;

}