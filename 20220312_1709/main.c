#include <stdio.h>

int main() {
    int column = 10;
    int row = 10;

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++) {
            printf("*");
        }
        printf("\n");

    }

    printf("\n속이 빈 사각형\n");
    for (int i = 0; i < column; i++) // 행
    {
        for (int j = 0; j < row; j++) { // 열
            if () {
                printf("*");
            }
            else {
                printf(" ");
            }

        }
        printf("\n");

    }

    return 0;
}