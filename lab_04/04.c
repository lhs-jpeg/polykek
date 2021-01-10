#include <stdio.h>
#include <math.h>
int main(){
    float a, b, S, R, P, C;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    S = (a*a) + (b*b);
    R = (a*a) - (b*b);
    P = (a*a)*(b*b);
    C = (a*a)/(b*b);
    printf("S = %f \nR = %f \nP = %f\nC = %f", S, R, P, C);
}
