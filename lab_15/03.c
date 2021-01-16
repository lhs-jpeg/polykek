#include <stdio.h>
#include <math.h>
float RingS(float R1, float R2){
    float S = 3.14159*R1*R1 - 3.14159*R2*R2;
    return S;
}
int main(){
    for(int i = 0; i < 3; i ++){
        float r1, r2, s;
        printf("r1 = ");
        scanf("%f", &r1);
        printf("r2 = ");
        scanf("%f", &r2);
        s = RingS(r1, r2);
        printf("s = %f\n", s);
    }
    return 0;
}
