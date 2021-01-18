#include <stdio.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    float A[N], min, max, i_min, i_max;
    for(int i = 0; i < N; i ++){
        scanf("%f", &A[i]);
    }
    min = A[0];
    i_min = 0;
    for(int i = 0; i < N; i ++){
        if(A[i] < min){min = A[i]; i_min = i;}
        if(A[i] > max){max = A[i]; i_max = i;}
    }
    for(int i = (i_min + 1); i < (i_max); i ++){
        A[i] = 0;
    }
    for(int i = (i_max + 1); i < (i_min); i ++){
        A[i] = 0;
    }
    for(int i = 0; i < N; i ++){
        printf("%f ", A[i]);
    }
    return 0;
}
