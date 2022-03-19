#include <stdio.h>

int main()
{
	int array[10];
	// array; // 배열명은 배열의 첫번째 요소의 주소값
	// &array[0];

	int* parray = array;
	int length = sizeof(array) / sizeof(int);

	for (int i = 0; i < length; i++) {
		*(parray + i) = i; // 포인터식
		// parray[i] = i; // 배열식
	}

	for (int i = 0; i < length; i++) {
		printf("*(parray + %d) = %d\n", i, *(parray + i));
	}

	for (int i = 0; i < length; i++) {
		*parray++ = i * i;
	}

	for (int i = 0; i < length; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	return 0;
}