#include <stdio.h>
#include <math.h>
int main(){
    int A, B;
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);

    if((A > 2) && (B <= 3)){
        printf("True");

    }
    else{
        printf("False");
    }

    return 0;
}
