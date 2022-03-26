#include <stdio.h>

// �ܺκ���, ��������, �ڵ�����, ��������

// ���ڹ迭
// ���ڿ�

void printArray(char* pstr, int size) {
    for (int i = 0; i < size; i++) {
        putchar(pstr[i]);
    }
}

void printArray2(char* pstr) {
    while (*pstr) {
        putchar(*pstr++);
    }
}

int main() {

    char str[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R' };   // ���ڹ迭
    char str2[] = "MONSTER";   // ���ڿ�

    printf("str size = %d\n", sizeof(str));
    printf("str2 size = %d\n", sizeof(str2));

    printArray(str, sizeof(str));
    printf("\n");
    printArray2(str2);
    printf("\n");
    printArray2(str);

    return 0;
}