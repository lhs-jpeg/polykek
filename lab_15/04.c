#include <stdio.h>
#include <math.h>
int Quarter(float x, float y){
    int n;
    if(x > 0 && y > 0){
        n = 1;
    }
    if(x < 0 && y > 0){
        n = 2;
    }
    if(x < 0 && y < 0){
        n = 3;
    }
    if(x > 0 && y < 0){
        n = 4;
    }
    return n;
}
int main(){
    for(int i = 0; i < 3; i ++){
        float X, Y;
        int N;
        printf("X = ");
        scanf("%f", &X);
        printf("Y = ");
        scanf("%f", &Y);
        N = Quarter(X, Y);
        printf("N = %d\n", N);
    }
    return 0;
}
