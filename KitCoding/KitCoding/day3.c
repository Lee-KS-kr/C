#pragma warning(disable:4996)
#include<stdio.h>
/*exanple 1. if:input data>0, print Positive
int main()
{
	int inputData;
	printf("* Input Number : ");
	scanf("%d", &inputData);
	if (inputData > 0)
	{
		printf("Positive\n");
	}
	return 0;
}
*/

/*example2. input data is over 300, output 1000, if not, 500
int main()
{
	int weight;
	printf("* 사과 무게 : ");
	scanf("%d", &weight);
	if (weight >= 300)
	{
		printf("사과 가격 : 1000원");
	}
	else
	{
		printf("사과 가격 : 500원");
	}
	return 0;
}
*/

/*example3 : 사과의 무게를 입력받아 200g이하는 300원, 400g 이하면 500원, 400g 초과면 700원으로 출력하시오
int main()
{
	int weight;
	int price;
	printf("* 사과 무게 : ");
	scanf("%d", &weight);
	if (weight <= 200)
	{
		price = 300;
	}
	else if (weight <= 400)
	{
		price = 500;
	}
	else
	{
		price = 700;
	}
	printf("사과 가격 : %d원", price);
	return 0;
}
*/

/*if문 연습문제
* 작성인 20220113 작성자 이경서
* 정수를 입력받아 그 정수가 양수, 0, 음수인지 출력하시오
*/
int main()
{
	int inputData;
	scanf("%d", &inputData);
	if (inputData > 0)
	{
		printf("양수입니다.\n");
	}
	else if (inputData == 0)
	{
		printf("0입니다.\n");
	}
	else
	{
		printf("음수입니다.\n");
	}
	return 0;
}