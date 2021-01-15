#include <stdio.h>
#include <math.h>
int main(){
    float A, S;
    int N, x = 0;
    printf("A = ");
    scanf("%f", &A);
    printf("N = ");
    scanf("%d", &N);
    while(x <= N){
        S += powf(A, x)*powf(-1, x);
        x +=1;
    }
    printf("S = %f", S);
    return 0;
}
