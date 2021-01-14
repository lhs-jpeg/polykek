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
            printf("Ñ");
            break;
        case 1:
            printf("Ç");
            break;
        case 2:
            printf("Þ");
            break;
        case 3:
            printf("Â");
            break;
        case -1:
            printf("Â");
            break;
        case -2:
            printf("Þ");
            break;
        case -3:
            printf("Ç");
            break;


    }

    return 0;
}
