#include <stdio.h>
#include <math.h>
int main(){
    float xa, ya, xb, yb, xc, yc, S;
    printf("xa = ");
    scanf("%f", &xa);
    printf("ya = ");
    scanf("%f", &ya);
    printf("xb = ");
    scanf("%f", &xb);
    printf("yb = ");
    scanf("%f", &yb);
    printf("xc = ");
    scanf("%f", &xc);
    printf("yc = ");
    scanf("%f", &yc);

    S = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));

    if(S < sqrt((xa - xc)*(xa - xc) + (ya - yc)*(ya - yc))){
        printf("B\nS = %f", S);
    }
    else{
        S = sqrt((xa - xc)*(xa - xc) + (ya - yc)*(ya - yc));
        printf("C\nS = %f", S);
    }

    return 0;
}
