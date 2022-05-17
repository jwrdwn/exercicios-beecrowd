#include <stdio.h>

int main(){

    float valores[6];
    int positivos = 0;

    for(int i = 0; i < 6; i++){
        scanf("%f", &valores[i]);
        if(valores[i] > 0){
            positivos++;
        }
    }

    printf("%i valores positivos\n", positivos);   

    return 0;

}