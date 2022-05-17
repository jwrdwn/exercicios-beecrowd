#include <stdio.h>

int main(){

    int segs, horas, mins, resto, segs2;

    scanf("%d", &segs);

    horas = segs/3600;
    resto = segs%3600;
    mins = resto/60;
    segs2 = resto%60;

    printf("%d:%d:%d\n", horas, mins, segs2);


    return 0;

}