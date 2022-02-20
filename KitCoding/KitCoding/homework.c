/*사용자 정의 함수를 사용하여 특정 내용을 출력*/
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int i;
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);
	if (num > 0) {
		i = 0;
		while (i < num) {
			printf("*");
			i++;
		}
		printf("\n");
	}
	else {
		i = num;
		while (i < 0) {
			printf("#");
			i++;
		}
		printf("\n");
	}
	return 0;
}