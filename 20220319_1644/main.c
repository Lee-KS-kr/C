#include <stdio.h>

int global = 0; // �ܺκ���, �������� 

int Add(int a, int b);
int SetScore(int value);

int main()
{
	int a = 20; // ���ú���(��������), �ڵ�����
	int b = 30;

	global = 30; // ��������

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
	static int sum = 0; // ���ú���, ��������
	sum += value;
	return sum;
}