#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    int Y, x;
    printf("Y = ");
    scanf("%d", &Y);

    printf("��� ");

    x = Y%60;

    switch(x){
        case 4:
            printf("������ �����");
            break;
        case 5:
            printf("������ ������");
            break;
        case 6:
            printf("������� �����");
            break;
        case 7:
            printf("������� �����");
            break;
        case 8:
            printf("������� �������");
            break;
        case 9:
            printf("������ ����");
            break;
        case 10:
            printf("������ ������");
            break;
        case 11:
            printf("������ ����");
            break;
        case 12:
            printf("������ ��������");
            break;
        case 13:
            printf("������ ������");
            break;
        case 14:
            printf("������ ������");
            break;
        case 15:
            printf("������ ������");
            break;

        case 16:
            printf("������� �����");
            break;
        case 17:
            printf("������� ������");
            break;
        case 18:
            printf("�������� �����");
            break;
        case 19:
            printf("�������� �����");
            break;
        case 20:
            printf("�������� �������");
            break;
        case 21:
            printf("������� ����");
            break;
        case 22:
            printf("������� ������");
            break;
        case 23:
            printf("������� ����");
            break;
        case 24:
            printf("������� ��������");
            break;
        case 25:
            printf("������� ������");
            break;
        case 26:
            printf("������� ������");
            break;
        case 27:
            printf("������� ������");
            break;

        case 28:
            printf("����� �����");
            break;
        case 29:
            printf("����� ������");
            break;
        case 30:
            printf("������ �����");
            break;
        case 31:
            printf("������ �����");
            break;
        case 32:
            printf("������ �������");
            break;
        case 33:
            printf("����� ����");
            break;
        case 34:
            printf("����� ������");
            break;
        case 35:
            printf("����� ����");
            break;
        case 36:
            printf("����� ��������");
            break;
        case 37:
            printf("����� ������");
            break;
        case 38:
            printf("����� ������");
            break;
        case 39:
            printf("����� ������");
            break;

        case 40:
            printf("����� �����");
            break;
        case 41:
            printf("����� ������");
            break;
        case 42:
            printf("������ �����");
            break;
        case 43:
            printf("������ �����");
            break;
        case 44:
            printf("������ �������");
            break;
        case 45:
            printf("����� ����");
            break;
        case 46:
            printf("����� ������");
            break;
        case 47:
            printf("����� ����");
            break;
        case 48:
            printf("����� ��������");
            break;
        case 49:
            printf("����� ������");
            break;
        case 50:
            printf("����� ������");
            break;
        case 51:
            printf("����� ������");
            break;

        case 52:
            printf("������ �����");
            break;
        case 53:
            printf("������ ������");
            break;
        case 54:
            printf("������� �����");
            break;
        case 55:
            printf("������� �����");
            break;
        case 56:
            printf("������� �������");
            break;
        case 57:
            printf("������ ����");
            break;
        case 58:
            printf("������ ������");
            break;
        case 59:
            printf("������ ����");
            break;
        case 0:
            printf("������ ��������");
            break;
        case 1:
            printf("������ ������");
            break;
        case 2:
            printf("������ ������");
            break;
        case 3:
            printf("������ ������");
            break;
    }
    return 0;
}
