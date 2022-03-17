#include <stdio.h>
#pragma warning (disable:4996)

int main() 
{
	char a = 3;
	char b = 4;

	printf("a & b = %d\n", a & b);
	printf("a | b = %d\n", a | b);

	/*
	char temp = a;
	a = b;
	b = temp;
	*/

	printf("before a = %d, b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("after a = %d, b = %d\n", a, b);

	return 0;
}