#include <stdio.h>
 
int main(){
    
    int x, y, i, j;

    scanf("%d %d", &x, &y);

    for(j = 1; j < y; j++){
        for(i = 0; i < x - 1; i++){
            printf("%d ", j);
            j += 1;
        }   
        printf("%d\n", j);
    }     

    return 0;

}