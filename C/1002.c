#include <stdio.h>
 
int main() {
 
    const double pi = 3.14159;
    double R;
    double A;
    
    scanf(" %lf", &R);

    A = pi * (R*R);

    printf("A=%.4lf\n", A);
 
    return 0;
}