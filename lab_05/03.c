#include <stdio.h>
#include <math.h>
int main(){
    float A, B, C, AC, BC, S;
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);
    printf("C = ");
    scanf("%f", &C);
    AC = C - A;
    BC = B - C;
    S = AC*BC;
    printf("S = %f", S);
    return 0;
}
