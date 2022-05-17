#include <stdio.h>

int main(){

    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if((x > y && x > z)&&(y > z)){
        printf("%d\n%d\n%d\n", z, y, x);
    } else if((x > y && x > z)&&(z > y)){
        printf("%d\n%d\n%d\n", y, z, x);
    } else if((y > x && y > z)&&(x > z)){
        printf("%d\n%d\n%d\n", z, x, y);
    } else if((y > x && y > z)&&(z > x)){
        printf("%d\n%d\n%d\n", x, z, y);
    } else if((z > x && z > y)&&(x > y)){
        printf("%d\n%d\n%d\n", y, x, z);
    } else{
        printf("%d\n%d\n%d\n", x, y, z);
    }

    printf("\n%d\n%d\n%d\n", x, y, z);

    return 0;

}