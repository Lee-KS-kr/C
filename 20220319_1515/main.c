#include <stdio.h>

int main()
{
	int array[10];
	// array; // �迭���� �迭�� ù��° ����� �ּҰ�
	// &array[0];

	int* parray = array;
	int length = sizeof(array) / sizeof(int);

	for (int i = 0; i < length; i++) {
		*(parray + i) = i; // �����ͽ�
		// parray[i] = i; // �迭��
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