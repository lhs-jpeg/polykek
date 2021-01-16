#include <stdio.h>
#include <math.h>
int main(){
    int N, A, B;
    printf("N = ");
    scanf("%d", &N);
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);

    int a[N];
    a[0] = A;
    printf("%d ", a[0]);
    a[1] = B;
    printf("%d ", a[1]);

    for(int i = 2; i < N; i ++){
        a[i] = a[i - 2] + a[i - 1];
        printf("%d ", a[i]);
    }

    return 0;
}
