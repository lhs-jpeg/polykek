#include <stdio.h>
#include <math.h>
int main(){
    int A, B, x, y;
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);
    for(x = A; x <= B; x += 1){
        for(y = 1; y <= x; y ++){
            printf("%d\n", x);
        }
    }
    return 0;
}
