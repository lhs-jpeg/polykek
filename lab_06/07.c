#include <stdio.h>
#include <math.h>
int main(){
    float A, x, y, A15;
    printf("A = ");
    scanf("%f", &A);

    x = A*A; y = x*A; A15 = y*y*y*y*y;

    printf("A15 = %f", A15);

    return 0;
}
