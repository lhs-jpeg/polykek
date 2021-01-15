#include <stdio.h>
#include <math.h>
int main(){
    int N, S, x = 1;
    printf("N = ");
    scanf("%d", &N);
    while(x <= (2*N - 1)){
        S += x;
        printf("S = %d\n", S);
        x += 2;
    }
    return 0;
}
