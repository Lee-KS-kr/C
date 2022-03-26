#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int calculator(int(*pfunc)(int, int), int a, int b) {
    return pfunc(a, b);
}

int main() {
    int a = 20;
    int b = 30;
    int oper = 0;

    printf("연산 방법을 입력하세요: (*, -, +) ");
    scanf("%c", &oper);

    switch (oper) {
    case '+':
        printf("%d + %d = %d\n", a, b, calculator(add, a, b));
        break;

    case '-':
        printf("%d - %d = %d\n", a, b, calculator(sub, a, b));
        break;

    case '*':
        printf("%d x %d = %d\n", a, b, calculator(mul, a, b));
        break;
    }

    return 0;
}