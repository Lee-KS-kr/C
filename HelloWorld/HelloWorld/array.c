#include <stdio.h>
#pragma warning(disable:4996)

int main_array()
{
	/*int subway1 = 30;
	int subway2 = 40;
	int subway3 = 50;
	□□□□□□□
	printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway1);
	printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway2);
	printf("지하철 3호차에 %d명이 타고 있습니다.\n", subway3);
	*/
	
	//여러개의 변수를 함꼐 동시에 생셩
	/*int subway[3];
	subway[0] = 30;
	subway[1] = 40;
	subway[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n",i+1, subway[i]);
	}*/
	
	//값 설정 방법
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//배열 크기는 항상 상수로 선언
	/*int size = 10;
	int arr[size]; 불가*/

	//하나라도 선언해두면 그 외의 값은 모두 0이 들어감
	/*int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	/*int arr[] = { 1,2 };
	float arrf[5] = { 1.0,2.0,3.0 };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arrf[i]);
	}*/

	/*char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));*/

	/*char str[] = "coding";

	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}*/

	/*char kor[] = "나도 코딩 할수있어";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/

	/*char carr[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", carr);
	for (int i = 0; i < sizeof(carr); i++)
	{
		printf("%c\n", carr[i]);
	}
	for (int i = 0; i < sizeof(carr); i++)
	{
		printf("%d\n", carr[i]);
	}*/

	//문자열 입력받기
	/*char name[256];
	printf("이름을 입력하세요 : ");
	scanf("%s", &name, sizeof(name));
	printf("%s\n", name);*/

	//참고 : ASCII코드란 ANSI에서 제시한 표준 코드 체계
	//7bit. 총 128개 코드(0~127)
	// a=97, A=65, 0=48, \0=0
	/*printf("%c\n", 'a');
	printf("%d\n", 'a');
	printf("%c\n", 'b');
	printf("%d\n", 'b');
	printf("%c\n", 'A');
	printf("%d\n", 'A');*/

	//참고2 0~127 사이의 ASCII코드 정수값에 해당하는 문자 확인
	/*for (int i = 0; i < 128; i++)
	{
		printf("%d : %c\n", i, i);
	}*/


	return 0;
}