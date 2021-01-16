#include <stdio.h>
#include <math.h>

float PowerA3(float A, float *B){
    *B = A*A*A;
}
int main(){
    for(int i = 0; i < 5; i ++){
        float N, S;
        printf("N = ");
        scanf("%f", &N);
        PowerA3(N, &S);
        printf("S = %f\n", S);
    }
    return 0;
}
