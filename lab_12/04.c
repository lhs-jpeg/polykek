#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    char *locale = setlocale(LC_ALL, "");
    int N, x;
    printf("N = ");
    scanf("%d", &N);

    x = N/100;

    switch(x){ //�����
        case(1):
            printf("��� ");
            break;
        case(2):
            printf("������ ");
            break;
        case(3):
            printf("������ ");
            break;
        case(4):
            printf("��������� ");
            break;
        case(5):
            printf("������� ");
            break;
        case(6):
            printf("�������� ");
            break;
        case(7):
            printf("������� ");
            break;
        case(8):
            printf("��������� ");
            break;
        case(9):
            printf("��������� ");
            break;



    }

    x = (N%100)/10;

    switch(x){ //�������
        case(1):
            break;

        case(2):
            printf("�������� ");
            break;
        case(3):
            printf("�������� ");
            break;
        case(4):
            printf("����� ");
            break;
        case(5):
            printf("��������� ");
            break;
        case(6):
            printf("���������� ");
            break;
        case(7):
            printf("��������� ");
            break;
        case(8):
            printf("����������� ");
            break;
        case(9):
            printf("��������� ");
            break;

    }

    if(x != 1){ // ����� ����� � 10 �� 19
        x = N%10;

        switch(x){ //�������
        case(1):
            printf("����");
            break;
        case(2):
            printf("���");
            break;
        case(3):
            printf("���");
            break;
        case(4):
            printf("������");
            break;
        case(5):
            printf("����");
            break;
        case(6):
            printf("�����");
            break;
        case(7):
            printf("����");
            break;
        case(8):
            printf("������");
            break;
        case(9):
            printf("������");
            break;



    }
    }
    else{ //����� � 10 �� 19
        x = N%100;
        switch(x){
            case 10:
                printf("������");
                break;
            case 11:
                printf("�����������");
                break;
            case 12:
                printf("����������");
                break;
            case 13:
                printf("����������");
                break;
            case 14:
                printf("������������");
                break;
            case 15:
                printf("����������");
                break;
            case 16:
                printf("�����������");
                break;
            case 17:
                printf("����������");
                break;
            case 18:
                printf("������������");
                break;
            case 19:
                printf("������������");
                break;
        }

    }


    return 0;
}
