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
            printf("������ ������� �������");
            break;
        case(11):
            printf("����������� ������� �������");
            break;
        case(12):
            printf("���������� ������� �������");
            break;
        case(13):
            printf("���������� ������� �������");
            break;
        case(14):
            printf("������������ ������� �������");
            break;
        case(15):
            printf("���������� ������� �������");
            break;
        case(16):
            printf("����������� ������� �������");
            break;
        case(17):
            printf("���������� ������� �������");
            break;
        case(18):
            printf("������������ ������� �������");
            break;
        case(19):
            printf("������������ ������� �������");
            break;
        case(20):
            printf("�������� ������� �������");
            break;
        case(21):
            printf("�������� ���� ������� �������");
            break;
        case(22):
            printf("�������� ��� ������� �������");
            break;
        case(23):
            printf("�������� ��� ������� �������");
            break;
        case(24):
            printf("�������� ������ ������� �������");
            break;
        case(25):
            printf("�������� ���� ������� �������");
            break;
        case(26):
            printf("�������� ����� ������� �������");
            break;
        case(27):
            printf("�������� ���� ������� �������");
            break;
        case(28):
            printf("�������� ������ ������� �������");
            break;
        case(29):
            printf("�������� ������ ������� �������");
            break;
        case(30):
            printf("�������� ������� �������");
            break;
        case(31):
            printf("�������� ���� ������� �������");
            break;
        case(32):
            printf("�������� ��� ������� �������");
            break;
        case(33):
            printf("�������� ��� ������� �������");
            break;
        case(34):
            printf("�������� ������ ������� �������");
            break;
        case(35):
            printf("�������� ���� ������� �������");
            break;
        case(36):
            printf("�������� ����� ������� �������");
            break;
        case(37):
            printf("�������� ���� ������� �������");
            break;
        case(38):
            printf("�������� ������ ������� �������");
            break;
        case(39):
            printf("�������� ������ ������� �������");
            break;
        case(40):
            printf("����� ������� �������");
            break;
    }

    return 0;
}
