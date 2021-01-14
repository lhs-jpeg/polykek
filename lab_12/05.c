#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    int Y, x;
    printf("Y = ");
    scanf("%d", &Y);

    printf("год ");

    x = Y%60;

    switch(x){
        case 4:
            printf("зелёной крысы");
            break;
        case 5:
            printf("зелёной коровы");
            break;
        case 6:
            printf("зелёного тигра");
            break;
        case 7:
            printf("зелёного зайца");
            break;
        case 8:
            printf("зелёного дракона");
            break;
        case 9:
            printf("зелёной змеи");
            break;
        case 10:
            printf("зелёной лошади");
            break;
        case 11:
            printf("зелёной овцы");
            break;
        case 12:
            printf("зелёной обезьяны");
            break;
        case 13:
            printf("зелёной курицы");
            break;
        case 14:
            printf("зелёной собаки");
            break;
        case 15:
            printf("зелёной свиньи");
            break;

        case 16:
            printf("красной крысы");
            break;
        case 17:
            printf("красной коровы");
            break;
        case 18:
            printf("красного тигра");
            break;
        case 19:
            printf("красного зайца");
            break;
        case 20:
            printf("красного дракона");
            break;
        case 21:
            printf("красной змеи");
            break;
        case 22:
            printf("красной лошади");
            break;
        case 23:
            printf("красной овцы");
            break;
        case 24:
            printf("красной обезьяны");
            break;
        case 25:
            printf("красной курицы");
            break;
        case 26:
            printf("красной собаки");
            break;
        case 27:
            printf("красной свиньи");
            break;

        case 28:
            printf("жёлтой крысы");
            break;
        case 29:
            printf("жёлтой коровы");
            break;
        case 30:
            printf("жёлтого тигра");
            break;
        case 31:
            printf("жёлтого зайца");
            break;
        case 32:
            printf("жёлтого дракона");
            break;
        case 33:
            printf("жёлтой змеи");
            break;
        case 34:
            printf("жёлтой лошади");
            break;
        case 35:
            printf("жёлтой овцы");
            break;
        case 36:
            printf("жёлтой обезьяны");
            break;
        case 37:
            printf("жёлтой курицы");
            break;
        case 38:
            printf("жёлтой собаки");
            break;
        case 39:
            printf("жёлтой свиньи");
            break;

        case 40:
            printf("белой крысы");
            break;
        case 41:
            printf("белой коровы");
            break;
        case 42:
            printf("белого тигра");
            break;
        case 43:
            printf("белого зайца");
            break;
        case 44:
            printf("белого дракона");
            break;
        case 45:
            printf("белой змеи");
            break;
        case 46:
            printf("белой лошади");
            break;
        case 47:
            printf("белой овцы");
            break;
        case 48:
            printf("белой обезьяны");
            break;
        case 49:
            printf("белой курицы");
            break;
        case 50:
            printf("белой собаки");
            break;
        case 51:
            printf("белой свиньи");
            break;

        case 52:
            printf("чёрной крысы");
            break;
        case 53:
            printf("чёрной коровы");
            break;
        case 54:
            printf("чёрного тигра");
            break;
        case 55:
            printf("чёрного зайца");
            break;
        case 56:
            printf("чёрного дракона");
            break;
        case 57:
            printf("чёрной змеи");
            break;
        case 58:
            printf("чёрной лошади");
            break;
        case 59:
            printf("чёрной овцы");
            break;
        case 0:
            printf("чёрной обезьяны");
            break;
        case 1:
            printf("чёрной курицы");
            break;
        case 2:
            printf("чёрной собаки");
            break;
        case 3:
            printf("чёрной свиньи");
            break;
    }
    return 0;
}
