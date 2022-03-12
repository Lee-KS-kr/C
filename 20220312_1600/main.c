#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int money = 0;
	printf("받은 금액을 입력하세요 : ");
	scanf("%d", &money);

	if (money <= 10000 && money > 5000) {
		printf("분식\n");
	}
	else if (money > 30000) {
		printf("극장\n");
	}
	else if (money <= 30000 && money > 20000) {
		printf("중국집\n");
	}
	else if (money <= 20000 && money > 10000) {
		printf("피씨방\n");
	}
	else {
		printf("낮잠\n");
	}

	return 0;
}