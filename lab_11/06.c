#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    int A;
    printf("A = ");
    scanf("%d", &A);


    if(A%2 == 0){
        printf("чётное ");
    }
    if(A%2 !=0){
        printf("нечётное ");
    }
    if(A < 10){
        printf("однозначное число");
    }
    if((A > 9) && (A < 100)){
        printf("двузначное число");
    }
    if (A > 99){
        printf("трёхзначное число");
    }

    return 0;
}
