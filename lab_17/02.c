#include <stdio.h>
#include <math.h>
int main(){
    int N;
    printf("N = "); scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i ++){
            scanf("%d", &A[i]);
    }
    int d = A[1] - A[0];
    for(int i = 2; i < N; i ++){
            if((A[i] - A[i - 1]) != d){
                d = 0;
            }
    }
    printf("d = %d", d);
    return 0;
}
