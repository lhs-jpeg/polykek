#include <stdio.h>
#include <math.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    float A[N];
    for(int i = 0; i < N; i ++){
        scanf("%f", &A[i]);
    }
    for(int i = 0; i < (N/2); i ++){
        printf("%f ", A[i]);
        printf("%f ", A[N - 1 - i]);
    }
    if(N%2 != 0){
        printf("%f ", A[N/2]);
    }
    return 0;
}
