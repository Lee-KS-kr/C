#include <stdio.h>

int main() 
{
	char a = 1;

	a = a << 2;   // left shift

	printf("a = %d\n", a);

	a = a >> 1;

	printf("a = %d\n", a);



	return 0;
}