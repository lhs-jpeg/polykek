#include <stdio.h>
#include <math.h>
int main(){
    float A1, B1, C1, A2, B2, C2, x, y;
    printf("A1 = ");
    scanf("%f", &A1);
    printf("B1 = ");
    scanf("%f", &B1);
    printf("C1 = ");
    scanf("%f", &C1);
    printf("A2 = ");
    scanf("%f", &A2);
    printf("B2 = ");
    scanf("%f", &B2);
    printf("C2 = ");
    scanf("%f", &C2);

    x = (C1*B2 - C2*B1)/(A1*B2-A2*B1);
    y = (A1*C2 - A2*C1)/(A1*B2-A2*B1);

    printf("x = %f\ny = %f", x, y);

    return 0;
}
