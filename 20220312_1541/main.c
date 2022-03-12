#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int a = 20;

    if (a > 20) { // 단일 조건문
        printf("a:%d가 20보다 크다\n", a);
    }

    if (a > 20) {   // 이중 조건문
        printf("a:%d가 20보다 크다\n", a);
    }
    else {
        printf("a:%d가 20보다 작거나 같다.\n", a);
    }

    int money = 0;
    printf("금액을 입력하세요: ");
    scanf("%d", &money);

    if (money > 30000) {   // 다중 조건문
        printf("극장\n");
    }
    else if (money > 20000) {
        printf("중국집\n");

    }
    else if (money > 10000) {
        printf("피씨방\n");
    }
    else if (money > 5000) {

    }
    else {   // else 문은 생략가능
        printf("낮잠");
    }


    return 0;
}