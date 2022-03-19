#include <stdio.h>

void DrawTriangle(int col, int row);
int Add(int a, int b);

int main()
{
    int col = 10;
    int row = 10;

    DrawTriangle(col, row);
    printf("\n");
    DrawTriangle(col, row);
    printf("\n");
    DrawTriangle(col, row);
    printf("\n\n");

    int sum = Add(10, 20);
    printf("%d + %d = %d\n", 10, 20, sum);

	return 0;
}

int Add(int a, int b) {
	int temp = a + b;
	return temp;
}

void DrawTriangle(int col, int row) {
    printf("속이 찬 정삼각형\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row << 1; j++) {
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
}