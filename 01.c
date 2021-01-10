#include <stdio.h>
#include <math.h>
int main()
{    int a, b, S, P;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    S = a*b;
    P = 2*(a + b);
    printf("S = %d\nP = %d", S, P);
    return 0;
}
