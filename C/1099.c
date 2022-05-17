#include <stdio.h>

int n, i, j, x, y, soma = 0;
    int min, max;

void solve();

int main(){

    scanf("%d", &n);
    for(j = 0; j < n; j++){
        solve();
        soma = 0;
    }
    return 0;

}

void solve(){
    scanf("%d %d", &x, &y);
    if(x>y){
        min = y;
        max = x;
    } else{
        max = y;
        min = x;
    }
    for(i = (min + 1); i < max; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    printf("%d\n", soma);
}