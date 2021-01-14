#include <stdio.h>
#include <math.h>
int main(){
    float xa, ya, xb, yb, xc, yc, S;
    printf("xa = ");
    scanf("%f", &xa);
    printf("ya = ");
    scanf("%f", &ya);

    if((xa > 0) && (ya > 0)){
        printf("1");
    }
    if((xa < 0) && (ya > 0)){
        printf("2");
    }
    if((xa < 0) && (ya < 0)){
        printf("3");
    }
    if((xa > 0) && (ya < 0)){
        printf("4");
    }

    return 0;
}
