#include <stdio.h>
#include <math.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);

    if((N%2 == 0) && (N > 9) && (N < 100)){
        printf("True");

    }
    else{
        printf("False");
    }

    return 0;
}
