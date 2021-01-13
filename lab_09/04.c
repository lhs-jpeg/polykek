#include <stdio.h>
#include <math.h>
int main(){
    int A, B, C, k, n;
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);
    printf("C = ");
    scanf("%d", &C);

    k = (A/C)*(B/C);
    n = A*B - C*C*k;

    printf("k = %d\nn = %d", k, n);

    return 0;
}
