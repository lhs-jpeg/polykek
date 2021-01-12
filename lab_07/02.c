#include <stdio.h>
#include <math.h>
int main(){
    float R, G, pi = 3.14;
    printf("R = ");
    scanf("%f", &R);

    G = (R*180)/pi;

    printf("G = %f", G);

    return 0;
}
