#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    int A;
    printf("A = ");
    scanf("%d", &A);


    if(A == 0){
            printf("������� �����");
    }
    else{
        if(A > 0){
            printf("������������� ");
        }
        if(A < 0){
            printf("������������� ");
        }
        if(A%2 == 0){
            printf("������ �����");
        }
        if(A%2 !=0){
            printf("�������� �����");
        }
    }

    return 0;
}
