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

    printf("\n���� �� �簢��\n");
    for (int i = 0; i < column; i++) // ��
    {
        for (int j = 0; j < row; j++) { // ��
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