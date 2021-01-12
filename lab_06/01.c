#include <stdio.h>
#include <math.h>
int main(){
    float A, B, x;
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);

    x = A; A = B; B = x;

    printf("A = %f\nB = %f", A, B);
    return 0;
}
