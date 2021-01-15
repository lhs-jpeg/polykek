#include <stdio.h>
#include <math.h>
int main(){
    float P, S = 1000;
    int K = 0;
    printf("P = ");
    scanf("%f", &P);
    P /= 100;
    while(S <= 1100){
        S = S + S*P;
        K ++;
    }
    printf("S = %f\nK = %d", S, K);
    return 0;
}
