#include <stdio.h>

int main(){

    float a, b, c, res;

    scanf("%f %f %f", &a, &b, &c);

    if(b+c>a && a+c>b && a+b>c){
        res = a+b+c;
        printf("Perimetro = %.1f\n", res);
    } else{
        res = ((a+b)*c)/2;
        printf("Area = %.1f\n", res);
    }

    return 0;

}