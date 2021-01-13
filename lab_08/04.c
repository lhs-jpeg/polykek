#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    printf("a = ");
    scanf("%d", &a);

    b = a/10 + (a%10)*10;

    printf("b = %d", b);

    return 0;
}
