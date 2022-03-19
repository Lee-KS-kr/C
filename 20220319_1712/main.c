#include <stdio.h>

int Add(int a, int b);
int Padd(int* pa, int* pb);

int main()
{
	int a = 20;
	int b = 30;

	int sum = Add(a, b);
	printf("%d + %d = %d\n", a, b, sum);

	sum = Padd(&a, &b);
	printf("%d + %d = %d\n", a, b, sum);
	return 0;
}

int Add(a, b)  // call by value
{
	return a + b;
}

int Padd(int* pa,int* pb)  // call by address
{
	return *pa + *pb;
}