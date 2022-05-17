#include <stdio.h>

int main(){

    int valores[100], j = 0, pos = 0;

    for(int i = 0; i < 100; i++){
        scanf("%d", &valores[i]);
    }
    for(int i = 0; i < 100; i++){
        if(valores[i] > j){
            j = valores[i];
            pos = i+1;
        }
    }

    printf("%d\n", j);
    printf("%d\n", pos);

    return 0;

}