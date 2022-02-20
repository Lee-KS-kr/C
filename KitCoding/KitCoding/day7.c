/*포인터의 이해
& : 주소 구하기 연산자
&데이터변수 : 변수의 주소를 의미
*포인터변수 : 포인터 변수가 가리키는 주소의 값
*/
/*
int a = 5;
int *pa = &a; //정수형 변수 a의 시작 주소
// == int *pa; pa=&a;
*/
/*
#include<stdio.h>
int main()
{
	int a = 9;
	int* pa = &a;

	printf("변수 a의 값은 %d이고,a의 주소는 %p이다.\n",a,&a);
	printf("포인터 변수 pa의 값은 %p이고, pa가 가리키는 곳의 값은 %d이다.\n", pa, *pa);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a = 9;
	int* pa = &a;
	printf("변수 a의 값은 %d이고, a의 주소는 %p이다.", a, &a);
	printf("포인터 변수 pa의 값은 %p이고, pa가 가리키는 곳의 값은 %d이다.", pa, *pa);
	*pa = 12; //a의 값을 12로 초기화
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
/*포인터 변수의 주소를 저장하는 포인터 변수
이중 포인터
int x;
int* p = &x;
int** pp = &p; //이중 포인터
포인터의 오류
포인터도 변수이므로 반드시 초기화해야 함
포인터 변수를 초기화하지 않고 사용하면 실행 에러가 발생함
널 포인터 : 포인터가 다른 변수를 가리키기 않을 때에는 NULL(0)로 초기화
int *p=NULL;
포인터를 안전하게 사용하려면 우선 포인터가 널 포인터인지를 검사
if(p != NULL) //p가 널 포인터가 아닌지 확인후 사용
*p=10;
포인터 변수의 데이터형이 반드시 포인터 변수가 가리키는 변수의 데이터형과 일치해야 함
*/
/*배열의 시작 주소를 구할 떄는 &없이 배열명만 사용
int arr[5]; arr == &arr[0]
배열의 시작 주소는 첫 번째 원소의 주소와 같음
배열명을 포인터처럼 사용 가능
인덱스를 사용하는 대신 배열의 시작 주소로 포인터 연산을 하면
배열의 특정 원소에 접근 가능
*(arr+i)는 arr[i]를 의미
배열의 시작 주소에서 데이터 타입 i개 크기만큼 증가된 주소에 있는 값
배열의 시작 주소로 초기화된 포인터를 이용해서 배열의 모든 원소에 접근 자능
포인터 변수를 배열 이름인 것처럼 사용 가능
포인터와 +,-연산(p +- N)
p가 가리키는 데이터형 N개 크기만큼 증감된 주소가 연산의 결과

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
