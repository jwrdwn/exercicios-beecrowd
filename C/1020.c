#include <stdio.h>

int main(){

    int dias, r;

    scanf("%d", &dias);

    int ano = dias/365;
    dias %= 365;
    int mes = dias/30;
    dias %= 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;

}