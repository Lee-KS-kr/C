#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL)); // ���� �õ� ���� ����

	int randomValue = rand(); // ���� ���� ����

	int direct = randomValue % 4; // 0 ���� 1 ���� 2 ���� 3 ����

	printf("randomValue = %d, direct = %d\n", randomValue, direct);

	return 0;
}