#include <stdio.h>
#include <math.h>
int main(){
    int N, s;
    printf("N = ");
    scanf("%d", &N);

    s = N%60;

    printf("s = %d", s);

    return 0;
}
