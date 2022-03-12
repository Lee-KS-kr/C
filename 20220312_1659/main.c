#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; i++) {
		printf("³»¿ë\n");
	}

	/*for (;;) {

	}*/

	float a = 2000.123123f;
	while (a > 0) {
		a -= 123.456f;
	}

	a = 12312.123f;
	do {
		a -= 10.342f;
	} while (a > 0);

	return 0;
}