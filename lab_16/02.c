#include <stdio.h>
#include <math.h>
int main(){
    int N;
    float A, D;
    printf("N = ");
    scanf("%d", &N);
    printf("A = ");
    scanf("%f", &A);
    printf("D = ");
    scanf("%f", &D);

    float m[N];
    int i = 0;

    for(; i < N; i ++){
        m[i] = A*powf(D, i);
        printf("%f ", m[i]);


    }

    return 0;
}
