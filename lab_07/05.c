#include <stdio.h>
#include <math.h>
int main(){
    float A, B, x;
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);

    x = (-B)/A;

    printf("x = %f", x);

    return 0;
}
