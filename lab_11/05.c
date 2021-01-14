#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    int A;
    printf("A = ");
    scanf("%d", &A);


    if(A == 0){
            printf("нулевое число");
    }
    else{
        if(A > 0){
            printf("положительное ");
        }
        if(A < 0){
            printf("отрицательное ");
        }
        if(A%2 == 0){
            printf("чётное число");
        }
        if(A%2 !=0){
            printf("нечётное число");
        }
    }

    return 0;
}
