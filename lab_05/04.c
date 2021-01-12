#include <stdio.h>
#include <math.h>
int main(){
    float x1, y1, x2, y2, a, b, P, S;
    printf("x1 = ");
    scanf("%f", &x1);
    printf("y1 = ");
    scanf("%f", &y1);
    printf("x2 = ");
    scanf("%f", &x2);
    printf("y2 = ");
    scanf("%f", &y2);

    a = fabs(x2 - x1);
    b = fabs(y2 - y1);
    P = 2*(a + b);
    S = a*b;

    printf("P = %f\nS = %f", P, S);
    return 0;
}
