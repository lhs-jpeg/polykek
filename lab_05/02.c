#include <stdio.h>
#include <math.h>
int main(){
    float A, B, C, AC, BC, sum;
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);
    printf("C = ");
    scanf("%f", &C);
    AC = fabs(C - A);
    BC = fabs(B - C);
    sum = AC + BC;
    printf("AC = %f\nBC = %f\nsum = %f", AC, BC, sum);
    return 0;
}
