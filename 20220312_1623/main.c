#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int value = 0;
Start: // 레이블

	printf("정수값을 입력하세요");
	scanf("%d", &value);

	if (value == 0) {
		goto Exit; // 하향식 분기
	}
	else if (value == 1) {
		goto Start; // 상향식 분기
	}

	printf("value = %d\n", value);

Exit: // 레이블
	printf("Exit");

	return 0;
}