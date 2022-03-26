#include <stdio.h>

int main()
{
	int array[5][5];

	int(*parray)[5] = array;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			array[i][j] = i * 5 + j;
		}
	}

	array[1][1];
	*(*(array + 1) + 1);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("array[%d][%d] = %d\n", i, j, array[i][j]);
		}
	}

	return 0;
}