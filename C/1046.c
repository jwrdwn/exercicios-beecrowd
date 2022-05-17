#include <stdio.h>

int main(){

    int a, b, dif;

    scanf("%d %d", &a, &b);

    if(a > b){
        dif = (24-a)+b;
    } else if(a < b){
        dif = b-a;
    } else{
        dif = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", dif);

    return 0;

}