#include<stdio.h>
#pragma warning(disable:4996)
int main_loop()
{
	//++ 예제
	/*int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);*/

	//int b = 20;
	////b=b+1;
	//printf("b는 %d\n", ++b);
	//printf("b는 %d\n", b++);
	//printf("b는 %d\n", b);

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/

	//반복문
	//for, while, do while

	//for (선언; 조건; 증감) {}
	/*for(int i=1;i<=10;i++)
	{
		printf("Hello Wolrd %d\n", i);
	}*/

	//while (조건) {}
	/*int i = 1;
	while (i<=10)
	{
		printf("Hello Wolrd %d\n", i++);
	}*/

	//do while
	//do {} while(조건);

	/*int i = 1;
	do {
		printf("Hello Wolrd %d\n", i++);
	} while (i<=10);*/

	//2중 반복문
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("   두 번째 반복문 : %d\n", j);
		}
	}*/

	//구구단 만들어보기
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d단\n", i);

		for (int j = 1; j <= 9; j++)
		{
			printf("	%d x %d = %d\n", i, j, i * j);
		}
	}*/

	/*
	*
	**
	***
	****
	*****
	의 모습을 구현해보자
	*/
	
	/*for (int i = 0; i < 5;i++) 
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//거꾸로 별탑 쌓기
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j<5-1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//프로젝트
	//피라미드 쌓기
	int input;
	printf("별탑 쌓기!\n");
	printf("몇 층으로 쌓을 건가요?\n");
	scanf("%d", &input);

	for (int i = 0; i < input; i++)
	{
		for (int j = i; j < input - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}