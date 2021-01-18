#include <stdio.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    float A[N], B[N], x;

    for(int i = 0; i < N; i ++){scanf("%f", &A[i]);}
    for(int i = 0; i < N; i ++){scanf("%f", &B[i]);}

    for(int i = 0; i < N; i ++){x = A[i]; A[i] = B[i]; B[i] = x;}

    for(int i = 0; i < N; i ++){printf("%f ", A[i]);}
    printf("\n");
    for(int i = 0; i < N; i ++){printf("%f ", B[i]);}
    return 0;
}
