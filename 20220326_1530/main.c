#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ���� 2���� �迭

int main() {
    int col = 0;
    int row = 0;

    printf("col(��)���� ���� ���� �Է��ϼ���: (10 10)");
    scanf("%d %d", &col, &row);

    int** parray = (int**)malloc(sizeof(int*) * col);

    for (int i = 0; i < col; i++) {
        parray[i] = malloc(sizeof(int) * row);
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            parray[i][j] = i * row + j;
        }
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("parray[%d][%d] = %d\n", i, j, parray[i][j]);
        }
    }

    for (int i = 0; i < col; i++) {
        free(parray[i]);
    }

    free(parray);

    return 0;
}