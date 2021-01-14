#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    int N;
    printf("N = ");
    scanf("%d", &N);

    switch(N){
        case(10):
            printf("десять учебных заданий");
            break;
        case(11):
            printf("одиннадцать учебных заданий");
            break;
        case(12):
            printf("двенадцать учебных заданий");
            break;
        case(13):
            printf("тринадцать учебных заданий");
            break;
        case(14):
            printf("четырнадцать учебных заданий");
            break;
        case(15):
            printf("пятнадцать учебных заданий");
            break;
        case(16):
            printf("шестнадцать учебных заданий");
            break;
        case(17):
            printf("семнадцать учебных заданий");
            break;
        case(18):
            printf("восемнадцать учебных заданий");
            break;
        case(19):
            printf("девятнадцать учебных заданий");
            break;
        case(20):
            printf("двадцать учебных заданий");
            break;
        case(21):
            printf("двадцать одно учебное задание");
            break;
        case(22):
            printf("двадцать два учебных задания");
            break;
        case(23):
            printf("двадцать три учебных задания");
            break;
        case(24):
            printf("двадцать четыре учебных задания");
            break;
        case(25):
            printf("двадцать пять учебных заданий");
            break;
        case(26):
            printf("двадцать шесть учебных заданий");
            break;
        case(27):
            printf("двадцать семь учебных заданий");
            break;
        case(28):
            printf("двадцать восемь учебных заданий");
            break;
        case(29):
            printf("двадцать девять учебных заданий");
            break;
        case(30):
            printf("тридцать учебных заданий");
            break;
        case(31):
            printf("тридцать одно учебное задание");
            break;
        case(32):
            printf("тридцать два учебных задания");
            break;
        case(33):
            printf("тридцать три учебных задания");
            break;
        case(34):
            printf("тридцать четыре учебных задания");
            break;
        case(35):
            printf("тридцать пять учебных заданий");
            break;
        case(36):
            printf("тридцать шесть учебных заданий");
            break;
        case(37):
            printf("тридцать семь учебных заданий");
            break;
        case(38):
            printf("тридцать восемь учебных заданий");
            break;
        case(39):
            printf("тридцать девять учебных заданий");
            break;
        case(40):
            printf("сорок учебных заданий");
            break;
    }

    return 0;
}
