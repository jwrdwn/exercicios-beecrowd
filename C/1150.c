#include <stdio.h>
 
int main(){
 
    int x, z, i, j, soma = 0;

    scanf("%d %d", &x, &z);
    while(z <= x)
        scanf("%d", &z);
    for(i = x, j = 0; j <= z; i++){
        j += i;
        soma++;
    }
    printf("%d\n", soma);

    return 0;
    
}