#include <stdio.h>

int main()
{
	int a = 20;

	a++;
	printf("a = %d\n", a);

	++a;
	printf("a = %d\n", a);

	int c = a++;
	printf("c = %d, a = %d\n", c, a);

	int d = ++a;
	printf("d = %d, a = %d\n", d, a);
	
	a--;
	printf("a = %d\n", a);

	--a;
	printf("a = %d\n", a);

	 c = a--;
	printf("c = %d, a = %d\n", c, a);

	 d = --a;
	printf("d = %d, a = %d\n", d, a);

	return 0;
}