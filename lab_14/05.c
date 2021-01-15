#include <stdio.h>
#include <math.h>
int main(){
    int A, B, m, n;
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);
    m = A; n = B;
    while(m != n){
        if(m > n){
            m -= n;
        }
        else{
            n -= m;
        }
    }
    printf("%d", m);
    return 0;
}
