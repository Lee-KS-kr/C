#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int money = 0;
	printf("���� �ݾ��� �Է��ϼ��� : ");
	scanf("%d", &money);

	if (money <= 10000 && money > 5000) {
		printf("�н�\n");
	}
	else if (money > 30000) {
		printf("����\n");
	}
	else if (money <= 30000 && money > 20000) {
		printf("�߱���\n");
	}
	else if (money <= 20000 && money > 10000) {
		printf("�Ǿ���\n");
	}
	else {
		printf("����\n");
	}

	return 0;
}