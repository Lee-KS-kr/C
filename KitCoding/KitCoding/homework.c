/*����� ���� �Լ��� ����Ͽ� Ư�� ������ ���*/
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int i;
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);
	if (num > 0) {
		i = 0;
		while (i < num) {
			printf("*");
			i++;
		}
		printf("\n");
	}
	else {
		i = num;
		while (i < 0) {
			printf("#");
			i++;
		}
		printf("\n");
	}
	return 0;
}