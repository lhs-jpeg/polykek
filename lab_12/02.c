#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    int N;
    printf("N = ");
    scanf("%d", &N);

    N %= 4;

    switch(N){
        case 0:
            printf("�");
            break;
        case 1:
            printf("�");
            break;
        case 2:
            printf("�");
            break;
        case 3:
            printf("�");
            break;
        case -1:
            printf("�");
            break;
        case -2:
            printf("�");
            break;
        case -3:
            printf("�");
            break;


    }

    return 0;
}
