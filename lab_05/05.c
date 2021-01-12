#include <stdio.h>
#include <math.h>
int main(){
    float x1, y1, x2, y2, x3, y3, a, b, c, P, p, S;
    printf("x1 = ");
    scanf("%f", &x1);
    printf("y1 = ");
    scanf("%f", &y1);
    printf("x2 = ");
    scanf("%f", &x2);
    printf("y2 = ");
    scanf("%f", &y2);
    printf("x3 = ");
    scanf("%f", &x3);
    printf("y3 = ");
    scanf("%f", &y3);

    a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    c = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
    P = a + b + c;
    p = P/2;
    S = sqrt(p*(p - a)*(p - b)*(p - c));

    printf("P = %f\nS = %f", P, S);
    return 0;
}
