#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL)); // 랜덤 시드 값을 생성

	int randomValue = rand(); // 랜덤 값을 생성

	int direct = randomValue % 4; // 0 북쪽 1 남쪽 2 서쪽 3 동쪽

	printf("randomValue = %d, direct = %d\n", randomValue, direct);

	return 0;
}