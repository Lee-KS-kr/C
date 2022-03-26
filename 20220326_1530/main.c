#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 동적 2차원 배열

int main() {
    int col = 0;
    int row = 0;

    printf("col(열)값과 행의 값을 입력하세요: (10 10)");
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