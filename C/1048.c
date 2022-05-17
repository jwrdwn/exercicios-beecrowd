#include <stdio.h>

int main(){

    float salario, aumento, salNov;

    scanf(" %f", &salario);
    if(salario <= 400){
        aumento = 0.15;
    } else if(salario > 400 && salario <= 800){
        aumento = 0.12;
    } else if(salario > 800 && salario <= 1200){
        aumento = 0.10;
    } else if(salario > 1200 && salario <= 2000){
        aumento = 0.07;
    } else{
        aumento = 0.04;
    }
    
    salNov = (salario * aumento) + salario;    
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", salNov, salario*aumento, aumento*100);
    
    return 0;

}