#include <stdio.h>
#include <math.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);

    if( ((N/100 < ((N%100)/10)) && (((N%100)/10) < N%10)) || ((N/100 > ((N%100)/10)) && (((N%100)/10) > N%10)) ){
        printf("True");

    }
    else{
        printf("False");
    }

    return 0;
}
