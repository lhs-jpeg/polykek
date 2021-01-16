#include <stdio.h>
#include <math.h>
float Fact2(int N){
    float S = 1;
    if(N%2 != 0){
        for(int i = 1; i <= N; i += 2){
            S *= i;
        }
    }
    else{
        for(int i = 2; i <= N; i += 2){
            S *= i;
        }
    }
    return S;
}
int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    float s = Fact2(n);
    printf("s = %f", s);
    return 0;
}
