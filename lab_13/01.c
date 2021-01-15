#include <stdio.h>
#include <math.h>
int main(){
    float X, n = 0.1;
    printf("X = ");
    scanf("%f", &X);

    for(n; n < 1.1; n += 0.1){
        printf("%f\n", (round(X*n*100))/100);
    }

    return 0;
}
