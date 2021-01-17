#include <stdio.h>
#include <math.h>
int main(){
    int N, K, L, n;
    float s;
    printf("N = "); scanf("%d", &N);
    printf("K = "); scanf("%d", &K);
    printf("L = "); scanf("%d", &L);
    float A[N];
    for(int i = 0; i < N; i ++){
            scanf("%f", &A[i]);
    }
    for(int i = K; i <= L; i ++){
        s += A[i];
        n ++;
    }
    printf("Srednee_Arifmeticheskoe = %f\n", s/n);
    return 0;
}
