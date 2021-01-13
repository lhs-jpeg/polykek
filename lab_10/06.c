#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    if((a*a == b*b + c*c) || (b*b == c*c + a*a) || (c*c == a*a + b*b)) {
        printf("True");

    }
    else{
        printf("False");
    }

    return 0;
}
