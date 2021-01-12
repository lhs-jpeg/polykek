#include <stdio.h>
#include <math.h>
int main(){
    float X, A, Y, kg, ykg;
    printf("X = ");
    scanf("%f", &X);
    printf("A = ");
    scanf("%f", &A);
    printf("Y = ");
    scanf("%f", &Y);

    kg = A/X;
    ykg = kg*Y;

    printf("kg = %f\nykg = %f", kg, ykg);

    return 0;
}
