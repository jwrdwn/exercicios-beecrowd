#include <stdio.h>
 
int main(){
    
    int x, y;

    do{
        scanf("%d %d", &x, &y);
        if(x > y && x != y){
            printf("Decrescente\n");
        }
        if(y > x && x != 0){
            printf("Crescente\n");
        }
    } while(x != y);

    return 0;

}