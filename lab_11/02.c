#include <stdio.h>
#include <math.h>
int main(){
    int A, B, C, sum;
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);
    printf("C = ");
    scanf("%d", &C);

    if((A <= B) && (A <= C)){
        sum = B + C;
    }
    if((B <= A) && (B <= C)){
        sum = A + C;
    }
    if((C <= B) && (C <= A)){
        sum = A + B;
    }

    printf("sum = %d", sum);

    return 0;
}
