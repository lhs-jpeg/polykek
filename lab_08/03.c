#include <stdio.h>
#include <math.h>
int main(){
    int A, B;
    int ans;
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);

    ans = A%B;

    printf("ans = %d", ans);

    return 0;
}
