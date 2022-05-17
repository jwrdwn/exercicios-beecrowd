#include <stdio.h>
 
int main() {

    int temp, vel;

    scanf("%d %d", &temp, &vel);

    float dist = temp * vel;

    printf("%.3f\n", dist/12);

    return 0;
}