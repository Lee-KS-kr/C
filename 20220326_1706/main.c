#define  _CRT_SECURE_NO_WARNINGS
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

int Calculator(int(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}

int main()
{
	int a = 20;
	int b = 30;
	int oper = 0;

	char opers[] = { '+', '-','*' };

	int(*pfunc[3])(int, int);
	pfunc[0] = add;
	pfunc[1] = sub;
	pfunc[2] = mul;

	printf("연산 방법을 입력하세요 : ");
	scanf("%c", &oper);

	for (int i = 0; i < 3; i++) {
		if (oper == opers[i]) {
			oper = i;
		}
	}

	printf("%d %c %d = %d\n", a, opers[oper], b, pfunc[oper](a, b));

	return 0;
}