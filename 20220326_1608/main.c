#include <stdio.h>
#include "Cal.h"

int main()
{
	int a = 20;
	int b = 30;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));
	printf("%d / %d = %f\n", a, b, div(a, b));

	return 0;
}