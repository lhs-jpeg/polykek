#include <stdio.h>
#include <math.h>
int main(){
    float b, kb;
    printf("b = ");
    scanf("%f", &b);

    kb = ceilf(b/1000);

    printf("kb = %f", kb);

    return 0;
}
