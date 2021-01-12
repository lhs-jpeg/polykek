#include <stdio.h>
#include <math.h>
int main(){
    float G, R, pi = 3.14;
    printf("G = ");
    scanf("%f", &G);

    R = (G*pi)/180;

    printf("R = %f", R);

    return 0;
}

