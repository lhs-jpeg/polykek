#include <stdio.h>
#include <math.h>
int main(){
    int N, k = 0;
    float S = 1, x = 1.1;
    printf("N = ");
    scanf("%d", &N);

    for(; k < N; k++){
        S *= x;
        x += 0.1;
    }

    printf("S = %f", S);

    return 0;
}
