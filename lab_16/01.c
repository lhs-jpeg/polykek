#include <stdio.h>
#include <math.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);

    int a[N];
    int i;
    for(i = 0; i < N; i ++){
        a[i] = 1 + 2*i;
        printf("%d ", a[i]);
    }

    return 0;
}
