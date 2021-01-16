#include <stdio.h>
#include <math.h>
int Sign(float X){
    int S;
    if(X > 0){
        S = 1;
    }
    if(X < 0){
        S = -1;
    }
    return S;
}
int main(){
    int L;
    float A, B;
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);
    L = Sign(A) + Sign(B);
    printf("L = %d", L);
    return 0;
}
