#include <stdio.h>
#include <math.h>
int main(){
    float A, x, A8;
    printf("A = ");
    scanf("%f", &A);

    x = powf(A, 2); A8 = x*x*x*x;

    printf("A8 = %f", A8);

    return 0;
}
