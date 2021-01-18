#include <stdio.h>
int main(){
    int N, P;
    printf("N = ");
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i ++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < N; i ++){
        if(A[i]%2 != 0){
            P = A[i];
        }
    }
    if(P != 0){
        for(int i = 0; i < N; i ++){
            if(A[i]%2 != 0){
            A[i] += P;
            }
        }
    }
    for(int i = 0; i < N; i ++){
        printf("%d ", A[i]);
    }
    return 0;
}
