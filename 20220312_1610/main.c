#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int buttonNum = 0;

	printf("������ ��ȣ�� �Է��ϼ���.");
	scanf("%d", &buttonNum);

	switch (buttonNum)
	{
	case 0:
		printf("TV ��\n");
		break;

	case 1:
		printf("TV ��\n");
		break;

	case 2:
		printf("���� �÷�\n");
		break;

	case 3:
		printf("���� ����\n");
		break;

	default:
		printf("ERROR\n");
		break;
	}

	return 0;
}