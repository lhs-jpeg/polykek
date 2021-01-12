#include <stdio.h>
#include <math.h>
int main(){
    float A, B, C, x;
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);
    printf("C = ");
    scanf("%f", &C);

    x = C; C = B; B = A; A = x;

    printf("A = %f\nB = %f\nC = %f", A, B, C);

    return 0;
}
