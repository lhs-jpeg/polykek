#include <stdio.h>
#include <math.h>
int main(){
    float a, b, S, R, P, C;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    S = (fabs(a)) + (fabs(b));
    R = (fabs(a)) - (fabs(b));
    P = (fabs(a))*(fabs(b));
    C = (fabs(a))/(fabs(b));
    printf("S = %f\nR = %f\nP = %f\nC = %f", S, R, P, C);
    return 0;
}
