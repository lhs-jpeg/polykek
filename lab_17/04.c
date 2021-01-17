#include <stdio.h>
#include <math.h>
int main(){
    int N;
    printf("N = "); scanf("%d", &N);
    float A[N], max;
    for(int i = 0; i < N; i ++){
            scanf("%f", &A[i]);
    }
    for(int i = 1; i < (N - 1); i ++){
            if((A[i] > A[i - 1]) && (A[i] > A[i + 1])){
                max = A[i];
            }
    }
    printf("max = %f", max);
    return 0;
}
