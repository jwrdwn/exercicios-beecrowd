#include <stdio.h>

int main(){

    int n;
    float v1, v2, v3;  

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f %f %f", &v1, &v2, &v3);
        float m =  (v1*2)+(v2*3)+(v3*5);
        float f = m/(2+3+5); 
        printf("%.1f\n", f);
    }

    return 0;

}