#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int i;
	int num;

	while(1){
		printf("���� �Է� : ");
		scanf("%d", &num);
		if (num == 0) { 
			break; 
		}
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
	}
	printf("�ȴ�!\n");
	return 0;
}