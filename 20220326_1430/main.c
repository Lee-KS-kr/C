#include <stdio.h>

// 외부변수, 정적변수, 자동변수, 동적변수

// 문자배열
// 문자열

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

    char str[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R' };   // 문자배열
    char str2[] = "MONSTER";   // 문자열

    printf("str size = %d\n", sizeof(str));
    printf("str2 size = %d\n", sizeof(str2));

    printArray(str, sizeof(str));
    printf("\n");
    printArray2(str2);
    printf("\n");
    printArray2(str);

    return 0;
}