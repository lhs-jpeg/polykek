#include <stdio.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    float A[N];
    for(int i = 0; i < N; i ++){
        scanf("%f", &A[i]);
    }
    float x = A[0];
    A[0] = A[1];
    int i = 1;
    for(; x > A[i + 1]; i ++){
        A[i] = A[i + 1];
    }
    A[i] = x;
    for(int i = 0; i < N; i ++){
        printf("%f ", A[i]);
    }
    return 0;
}
