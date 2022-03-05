#include <stdio.h>

int main()
{
	int a = 20;
	int b = 30;
	int ret = a + b;

	printf("%d + %d = %d\n", a, b, ret);
	printf("%d + %d = %d\n", a, b, a + b);

	return 0;
}