#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// 과제
	// top (0, 0) bottom (10, 10)의 상자 안에 임의의 점 (x, y)가 포함되는지
	// 확인할 수 있는 로직을 작성하시오
	float topX = 0.0f;
	float topY = 0.0f; // top의 좌표
	float bottomX = 10.0f;
	float bottomY = 10.0f; // bottom의 좌표
	float randomX, randomY; // 입력받을 좌표

	printf("확인할 지점의 위치를 입력하세요.\n");
	printf("x : ");
	scanf("%f", &randomX);
	printf("y : ");
	scanf("%f", &randomY); // 좌표를 입력받음

	char resultX = ((topX <= randomX) && (randomX <= bottomX)) ? 'Y' : 'N';
	char resultY = ((topY <= randomY) && (randomY <= bottomY)) ? 'Y' : 'N'; // 위치가 내부에 있는지 확인
	char result = (resultX == 'Y' && resultY == 'Y') ? 'Y' : 'N'; // x좌표 y좌표 모두 Y여야 내부에 있음
	printf("\n\n입력한 점이 박스 내부에 있는가? : %c\n", result); // 결과값 출력

	return 0;
}