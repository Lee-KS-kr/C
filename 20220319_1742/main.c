#include <stdio.h>

// void SetArray(int array[]) 로도 가능
void SetArray(int* pa, int size);

int main()
{
	int array[10];
	SetArray(array, 10);

	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	return 0;
}

void SetArray(int* pa, int size) 
{
	for (int i = 0; i < size; i++) {
		pa[i] = i * i;
	}
}