#include <stdio.h>
#include <math.h>
int main(){
    float A, B, x = 0, S;
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);
    while(x < A){
        x += B;
    }
    S = roundf((A - (x - B))*1000)/1000;
    printf("S = %f", S);
    return 0;
}
