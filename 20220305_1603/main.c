#include<stdio.h>

int main()
{
	// ������
	short a = 10;
	long b = -9999999999999999;
	int c = 365123165545351;

	unsigned short d = 55881;
	unsigned long e = -546;
	unsigned int f = 21;

	// �Ǽ���
	float g = 138.21558684f;
	double h = -7422385351.5835;

	// ������
	char i = 3;
	unsigned char j = 126;

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("d = %u, e = %u, f = %u\n", d, e, f);
	printf("g = %f, h = %lf\n", g, h);
	printf("i = %c, j = %c\n", i, j);

	return 0;
}