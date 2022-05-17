#include <stdio.h>
 
int main(){
    
    int n, i, j;

    scanf("%d", &n);

    for(i = 0, j = 1; i < n; i++, j++){
        printf("%d %d %d\n", j, j*j, j*j*j);
        printf("%d %d %d\n", j, (j*j)+1, (j*j*j)+1);
    }     

    return 0;
    
}