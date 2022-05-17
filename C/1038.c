#include <stdio.h>

int main(){

    int prod, quant;
    float preco;

    scanf("%d %d", &prod, &quant);

    switch(prod){
        case 1:
            preco = quant*4.0;
            break;
        case 2:
            preco = quant*4.5;
            break;
        case 3:
            preco = quant*5.0;
            break;
        case 4:
            preco = quant*2.0;
            break;
        default:
            preco = quant*1.5;
        break;
    }

    printf("Total: R$ %.2f\n", preco);

    return 0;

}