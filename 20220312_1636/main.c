#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	for (int i = 0; i < 10; i++) {
		printf("i = %d\n", i);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}

	for (int i = 0, j = 0, k = 0; i < 10 && j < 10; i += 2, j += 3) {
		printf("i = %d, j = %d, k = %d\n", i, j, k);
	}

	return 0;
}