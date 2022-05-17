#include <stdio.h>
 
int main(){
    
    int produto, alcool = 0, gasolina = 0, diesel = 0;

    do{
        scanf("%d", &produto);
        if(produto < 1 || produto >4){
            scanf("%d", &produto);
        }
        if(produto == 1){
            alcool++;
        } else if(produto == 2){
            gasolina++;
        } else if(produto == 3){
            diesel++;
        }
    } while(produto != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
    
}