#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int buttonNum = 0;

	printf("리모컨 번호를 입력하세요.");
	scanf("%d", &buttonNum);

	switch (buttonNum)
	{
	case 0:
		printf("TV 켜\n");
		break;

	case 1:
		printf("TV 꺼\n");
		break;

	case 2:
		printf("볼륨 올려\n");
		break;

	case 3:
		printf("볼륨 내려\n");
		break;

	default:
		printf("ERROR\n");
		break;
	}

	return 0;
}