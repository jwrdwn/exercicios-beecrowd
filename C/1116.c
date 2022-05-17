#include <stdio.h>
 
int main(){
    
    int n, x, y;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        float div = (float)x / (float)y;
        if(y == 0){
            printf("divisao impossivel\n");
        } else{
            printf("%.1f\n", div);
        }
    }

    return 0;
    
}