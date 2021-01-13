#include <stdio.h>
#include <math.h>
int main(){
    int K, N, n;
    printf("K = ");
    scanf("%d", &K);
    printf("N = ");
    scanf("%d", &N);

    n = K%7 + N - 1;

    printf("n = %d", n);

    return 0;
}
