#include <stdio.h>

int main()
{
	int a = 20;

	int* pa = &a;

	int** ppa = &pa;

	// ������ ������
	// **ppa, **&pa, *pa, *&a, a

	printf("&**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n", &**ppa, &**&pa, &*pa, &*&a, &a);
	printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n", **ppa, **&pa, *pa, *&a, a);


	printf("&a = %p\n", &a);


	return 0;
}