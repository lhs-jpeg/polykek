#include <stdio.h>
#include <math.h>
int main(){
    int N, K = 2, n1 = 1, n2 = 1, x;
    printf("N = ");
    scanf("%d", &N);
    while(n2 != N){
        x = n2;
        n2 += n1;
        n1 = x;
        K ++;
    }
    printf("K = %d\n", K);
    return 0;
}
