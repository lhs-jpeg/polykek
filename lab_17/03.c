#include <stdio.h>
#include <math.h>
int main(){
    int N;
    printf("N = "); scanf("%d", &N);
    float A[N];
    for(int i = 0; i < N; i ++){
            scanf("%f", &A[i]);
    }
    float min = A[0];
    for(int i = 0; i < N; i += 2){
            if(A[i] < min){
                min = A[i];
            }
    }
    printf("min = %f", min);
    return 0;
}
