#include <stdio.h>
#include <math.h>
int main(){
    float x, y;
    printf("x = ");
    scanf("%f", &x);

    y = 3*powf(x, 6) - 6*powf(x, 2) - 7;

    printf("y = %f", y);

    return 0;
}
