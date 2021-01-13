#include <stdio.h>
#include <math.h>
int main(){
    int A, B, C;
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);
    printf("C = ");
    scanf("%d", &C);

    if((A < B) && (B < C)){
        printf("True");

    }
    else{
        printf("False");
    }

    return 0;
}
