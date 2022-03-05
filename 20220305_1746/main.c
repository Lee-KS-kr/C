#include <stdio.h>

int main()
{
	int a = 20;
	int b = 30;

	// 조건연산자 삼항연산자
	(a < b) ? printf("a : %d가 b : %d보다 작다.\n", a, b) : printf("a : %d가 b : %d보다 크거나 같다.\n", a, b);

	int ret = (a < b) ? a : b;
	printf("ret = %d\n", ret);

	return 0;
}