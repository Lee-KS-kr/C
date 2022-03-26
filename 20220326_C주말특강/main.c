#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
	int count = 0;

	printf("저장할 정수의 갯수를 입력하세요 : ");
	scanf("%d", &count);

	int* pa = malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++) {
		pa[i] = i * i;
	}

	for (int i = 0; i < count; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}

	free(pa);

	return 0;
}