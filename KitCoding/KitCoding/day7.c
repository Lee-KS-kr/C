/*�������� ����
& : �ּ� ���ϱ� ������
&�����ͺ��� : ������ �ּҸ� �ǹ�
*�����ͺ��� : ������ ������ ����Ű�� �ּ��� ��
*/
/*
int a = 5;
int *pa = &a; //������ ���� a�� ���� �ּ�
// == int *pa; pa=&a;
*/
/*
#include<stdio.h>
int main()
{
	int a = 9;
	int* pa = &a;

	printf("���� a�� ���� %d�̰�,a�� �ּҴ� %p�̴�.\n",a,&a);
	printf("������ ���� pa�� ���� %p�̰�, pa�� ����Ű�� ���� ���� %d�̴�.\n", pa, *pa);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a = 9;
	int* pa = &a;
	printf("���� a�� ���� %d�̰�, a�� �ּҴ� %p�̴�.", a, &a);
	printf("������ ���� pa�� ���� %p�̰�, pa�� ����Ű�� ���� ���� %d�̴�.", pa, *pa);
	*pa = 12; //a�� ���� 12�� �ʱ�ȭ
	printf("a=%d", a);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a, b = 4;
	char ch = 'k'; char* pch = &ch;
	int* pa = &a; *pa = 7;
	printf("a=%d *pa=%d\n", a, *pa);
	printf("ch=%c *pch=%c\n", ch, *pch);
	pa = &b;
	printf("b=%d\n", b);
	*pa = 15;
	printf("b=%d\n", b);
	return 0;
}
*/
/*������ ������ �ּҸ� �����ϴ� ������ ����
���� ������
int x;
int* p = &x;
int** pp = &p; //���� ������
�������� ����
�����͵� �����̹Ƿ� �ݵ�� �ʱ�ȭ�ؾ� ��
������ ������ �ʱ�ȭ���� �ʰ� ����ϸ� ���� ������ �߻���
�� ������ : �����Ͱ� �ٸ� ������ ����Ű�� ���� ������ NULL(0)�� �ʱ�ȭ
int *p=NULL;
�����͸� �����ϰ� ����Ϸ��� �켱 �����Ͱ� �� ������������ �˻�
if(p != NULL) //p�� �� �����Ͱ� �ƴ��� Ȯ���� ���
*p=10;
������ ������ ���������� �ݵ�� ������ ������ ����Ű�� ������ ���������� ��ġ�ؾ� ��
*/
/*�迭�� ���� �ּҸ� ���� ���� &���� �迭�� ���
int arr[5]; arr == &arr[0]
�迭�� ���� �ּҴ� ù ��° ������ �ּҿ� ����
�迭���� ������ó�� ��� ����
�ε����� ����ϴ� ��� �迭�� ���� �ּҷ� ������ ������ �ϸ�
�迭�� Ư�� ���ҿ� ���� ����
*(arr+i)�� arr[i]�� �ǹ�
�迭�� ���� �ּҿ��� ������ Ÿ�� i�� ũ�⸸ŭ ������ �ּҿ� �ִ� ��
�迭�� ���� �ּҷ� �ʱ�ȭ�� �����͸� �̿��ؼ� �迭�� ��� ���ҿ� ���� �ڴ�
������ ������ �迭 �̸��� ��ó�� ��� ����
�����Ϳ� +,-����(p +- N)
p�� ����Ű�� �������� N�� ũ�⸸ŭ ������ �ּҰ� ������ ���

*/

#include <stdio.h>
int main()
{
	/*int a, b = 4;
	char ch = 'k';
	char* pch = &ch;
	int* pa = &a; *pa = 7;
	printf("a=%d, *pa=%d\n", a, *pa);
	printf("ch=%c, *pch=%c\n", ch, *pch);
	pa = &b;
	printf("b=%d\n", b);
	*pa = 15;
	printf("b=%d\n", b);*/

	/*char ch;
	char* pc = &ch;

	int n;
	int* pi = &n;

	double d;
	double* pd = &d;

	int arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("pc+%d=%p\n", i, pc + i);
	}

	for (i = 0; i < 3; i++)
	{
		printf("pi+%d=%p\n", i, pi + i);
	}

	for (i = 0; i < 3; i++)
	{
		printf("pd+%d=%p\n", i, pd + i);
	}

	for (i = 0; i < 5; i++)
	{
		printf("&arr[%d]-&arr[0]=%d\n", i, &arr[i]-&arr[0]	);
	}*/

	/*int arr[5] = { 10,20,30,40,50 };
	int* p = arr;

	for (int i = 0; i < 5; i++,p++)
	{
		printf("%d \n", *p)
	}*/

	/*int x[3] = { 1,2,3 };
	int y[3] = { 4,5,6 };
	int z[3] = { 7,8,9 };
	int* arr[3] = { x,y,z };

	for (int i = 0; i < 3; i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}*/

	/*char str[31];
	gets(str);
	puts(str);*/

	/*gets(p);
	char p[16];
	printf("%d",sizeof(p));
	puts(p);
	printf("%s\n", p);
	int i = 0;
	for (i = 0; i < sizeof(p); i++)
	{
		printf("%c", p[i]);
	}
	while (p[i] != '\0') {
		printf("%c", p[i]);
		i++;
	}
	printf("\n");*/

	char* str = "Good Morning";
	int i, count = 0;
	while (str[i]) {
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		printf("%c", *(str + i));
	}

	return 0;
}
