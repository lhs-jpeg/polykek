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
    for(int i = 0; i < N; i ++){
        if(i%2 != 0){
            printf("%f ", A[i]);
        }
    }
    for(int i = (N - 1); i >= 0; i --){
        if(i%2 == 0){
            printf("%f ", A[i]);
        }
    }
    return 0;
}
