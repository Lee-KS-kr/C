#include <stdio.h>

int main()
{
	int a = 20;
	int b = 30;

	// ���ǿ����� ���׿�����
	(a < b) ? printf("a : %d�� b : %d���� �۴�.\n", a, b) : printf("a : %d�� b : %d���� ũ�ų� ����.\n", a, b);

	int ret = (a < b) ? a : b;
	printf("ret = %d\n", ret);

	return 0;
}