#include <stdio.h>

int main(){

  int nGrenais = 0, gInter, gGremio, vInter = 0, vGremio = 0, empates = 0, vencedor, resp;

  do{
        
    do{
      scanf("%d %d", &gInter, &gGremio);
      printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &resp);
      nGrenais++;
        if(gInter > gGremio){
        vInter++;
      } else if(gGremio > gInter){
        vGremio++;
      } else{
        empates++;
      }
    } while(resp == 1);

    printf("%d grenais\n", nGrenais);
    printf("Inter:%d\n", vInter);
    printf("Gremio:%d\n", vGremio);
    printf("Empates:%d\n", empates);
    
    if(vInter > vGremio){
      printf("Inter venceu mais\n");
    } else if(vGremio > vInter){
      printf("Gremio venceu mais\n");
    } else{
      printf("Nao houve vencedor\n");
    }
      
  } while(resp == 1);
  
  return 0;
  
} 