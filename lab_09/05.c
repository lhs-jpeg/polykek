#include <stdio.h>
#include <math.h>
int main(){
    int Y, C;
    printf("Y = ");
    scanf("%d", &Y);

    C = Y/100;
    if(Y%100 != 0){
        C += 1;
    }

    printf("C = %d", C);

    return 0;
}
