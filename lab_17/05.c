#include <stdio.h>
#include <math.h>
int main(){
    int N, n1, n2;
    printf("N = "); scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i ++){
            scanf("%d", &A[i]);
    }
    for(int i = 0; i < (N - 1); i ++){
        for(int j = (i + 1); j < N; j ++){
            if(A[i] == A[j]){
                n1 = i; n2 = j;
            }
        }
    }
    printf("n1 = %d\nn2 = %d", n1, n2);
    return 0;
}
