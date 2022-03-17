#include <stdio.h>
int main()
{
	/*작성할 도형 목록
	속이 찬 사각형
	속이 빈 사각형
	속이 찬 직각삼각형
	속이 찬 역 직각삼각형
	속이 찬 정삼각형
	속이 찬 역 정삼각형
	속이 빈 정삼각형
	속이 찬 역 정삼각형*/

	int col = 10;
	int row = 10;

	printf("\n\n속이 찬 사각형\n");
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n속이 빈 사각형\n");
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			if (i == 0 || i == col - 1 || j == 0 || j == row - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n속이 찬 직각삼각형\n");
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			if (i >= j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n속이 찬 역 직각삼각형\n");
	for (int i = 0; i < col; i++) {
		for (int j = row; j > 0; j--) {
			if (i < j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n속이 찬 정삼각형\n");
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row<<1; j++) {
			if (j < row - i) {
				printf(" ");
			}
			else if (row + i < j) {
				break;
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}

	printf("\n\n속이 찬 역 정삼각형\n");
	for (int i = col; i > 0; i--) {
		for (int j = (row<<1);j>0;j--) {
			if (j >= row + i) {
				printf(" ");
			}
			else if (j <= row - i) {
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}

	printf("\n\n속이 빈 정삼각형\n");
	for (int i = 0; i < col; i++) {
		for (int j =1; j<row<<1; j++) {
			if (j == row - i || j == row + i || i == col - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n속이 찬 역 정삼각형\n");
	for (int i = col; i > 0; i--) {
		for (int j = row<<1; j > 1; j--) {
			if (j == (row - i)+2 || j == row + i || i == col) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n\n선택과제\n");
	printf("속이 찬 정삼각형을 다양한 각도로 돌려보자\n");
	for (int i = 0; i < col + 1; i++) {
		for (int j = 0; j < row << 1; j++) {
			if (i < (col >> 1)) {
				if (j == 0) {
					printf("*");
				}
				else if (j <= i) {
					printf("***");
				}
				else {
					printf(" ");
				}
			}
			else if (i == (col >> 1)) {
				printf("*");
			}
			else {
				if (j <= j - i) {
					printf("&");
				}
				else {
					printf("#");
				}
			}
		}
		printf("\n");
	}

	return 0;
}