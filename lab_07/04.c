#include <stdio.h>
#include <math.h>
int main(){
    float V1, V2, S, T, s;
    printf("V1 = ");
    scanf("%f", &V1);
    printf("V2 = ");
    scanf("%f", &V2);
    printf("S = ");
    scanf("%f", &S);
    printf("T = ");
    scanf("%f", &T);

    s = S + (V1 + V2)*T;

    printf("s = %f", s);

    return 0;
}
