#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int a = 20;

    if (a > 20) { // ���� ���ǹ�
        printf("a:%d�� 20���� ũ��\n", a);
    }

    if (a > 20) {   // ���� ���ǹ�
        printf("a:%d�� 20���� ũ��\n", a);
    }
    else {
        printf("a:%d�� 20���� �۰ų� ����.\n", a);
    }

    int money = 0;
    printf("�ݾ��� �Է��ϼ���: ");
    scanf("%d", &money);

    if (money > 30000) {   // ���� ���ǹ�
        printf("����\n");
    }
    else if (money > 20000) {
        printf("�߱���\n");

    }
    else if (money > 10000) {
        printf("�Ǿ���\n");
    }
    else if (money > 5000) {

    }
    else {   // else ���� ��������
        printf("����");
    }


    return 0;
}