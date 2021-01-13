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

    if(((a + b) > c) && ((b + c) > a) && ((c + a) > b)) {
        printf("True");

    }
    else{
        printf("False");
    }

    return 0;
}
