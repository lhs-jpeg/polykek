#include <stdio.h>
#include <math.h>
int main(){
    float x, y;
    printf("x = ");
    scanf("%f", &x);

    y = 4*powf(x - 3, 6) - 7*powf(x - 3, 3) + 2;

    printf("y = %f", y);

    return 0;
}
