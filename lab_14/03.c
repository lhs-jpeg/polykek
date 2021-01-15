#include <stdio.h>
#include <math.h>
int main(){
    int N, K = 0, S = 0;
    printf("N = ");
    scanf("%d", &N);
    while(S < N){
        K ++;
        S += K;
    }
    printf("K = %d\nS = %d\n", K, S);
    return 0;
}
