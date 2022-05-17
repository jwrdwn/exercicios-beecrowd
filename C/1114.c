#include <stdio.h>
 
int main(){
    
    int senha, tentativaSenha;
    senha = 2002;
    
    do{
        scanf("%d", &tentativaSenha);

        if(tentativaSenha == senha){
            printf("Acesso Permitido\n");
        } else{
            printf("Senha Invalida\n");
        }

    } while(tentativaSenha != senha);
    
    return 0;

}