#include <stdio.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    float A[N], B[N];
    for(int i = 0; i < N; i ++){
        scanf("%f", &A[i]);
    }
    float sum;
    for(int i = 0; i < N; i ++){
        sum += A[i];
        B[i] = sum / (i + 1);
    }
    for(int i = 0; i < N; i ++){
        printf("%f ", B[i]);
    }
    return 0;
}
