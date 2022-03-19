#include <stdio.h>

int global = 0; // 외부변수, 전역변수 

int Add(int a, int b);
int SetScore(int value);

int main()
{
	int a = 20; // 로컬변수(지역변수), 자동변수
	int b = 30;

	global = 30; // 전역변수

	for (int i = 0; i < 10; i++) {
		SetScore(i);
	}

	int sum = SetScore(0);
	printf("sum = %d\n", sum);

	return 0;
}

int Add(a, b)
{
	int temp = a + b;
	return temp;
}

int SetScore(value)
{
	static int sum = 0; // 로컬변수, 정적변수
	sum += value;
	return sum;
}