#include <stdio.h>
int main()
{
	/*�ۼ��� ���� ���
	���� �� �簢��
	���� �� �簢��
	���� �� �����ﰢ��
	���� �� �� �����ﰢ��
	���� �� ���ﰢ��
	���� �� �� ���ﰢ��
	���� �� ���ﰢ��
	���� �� �� ���ﰢ��*/

	int col = 10;
	int row = 10;

	printf("\n\n���� �� �簢��\n");
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n���� �� �簢��\n");
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

	printf("\n\n���� �� �����ﰢ��\n");
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

	printf("\n\n���� �� �� �����ﰢ��\n");
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

	printf("\n\n���� �� ���ﰢ��\n");
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

	printf("\n\n���� �� �� ���ﰢ��\n");
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

	printf("\n\n���� �� ���ﰢ��\n");
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

	printf("\n\n���� �� �� ���ﰢ��\n");
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

	printf("\n\n���ð���\n");
	printf("���� �� ���ﰢ���� �پ��� ������ ��������\n");
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