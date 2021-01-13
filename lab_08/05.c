#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    printf("a = ");
    scanf("%d", &a);

    b = (a%100)*10 + a/100;

    printf("b = %d", b);

    return 0;
}
