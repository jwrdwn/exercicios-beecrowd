#include <stdio.h>
 
int main(){
    
    int n1, n2, min, max;

    scanf("%d %d", &n1, &n2);

    if(n1 > n2)    {
        max = n1;
        min = n2;
    } else{
        max = n2;
        min = n1;
    }
    
    for(int i = (min + 1); i < max; ++i){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }

    return 0;
    
}