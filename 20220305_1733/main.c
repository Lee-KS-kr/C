#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int x = 0;
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &x);

	// 0 < x < 10
	int ret = x > 0 && x < 10;
	printf("0 < %d < 10 = %d\n", x, ret);

	return 0;
}