/*예제4
작성일 20220113 작성자 이경서*/
#pragma warning(disable:4996) //scanf관련 에러 무시
#include<stdio.h>
#define DAYS 365
int input(void);
void output(int, int);
int calculate(int, int); //함수 선언부;
int main()
{
	int number; //입력 정수 저장변수;
	int result; //계산결과 저장변수;

	number = input(); //==30
	result = calculate(number, DAYS); //==30, 365, 10950
	output(number, result); //==30, 10950

	return 0;
}
//이 아래 함수 정의부;
int input(void) //전달인자가 없을 때는 void 생략가능;
{
	int num;
	printf("* 나이를 입력하세요 : ");
	scanf("%d", &num); //30
	return num; //return==30
}
           //input에서 가져온 return값, 365
int calculate(int num, int days)
{
	int totalDays;
	totalDays = num * days; //30*365
	return totalDays; //10950
} //return값이 있는 함수는 return문 생략 불가
               //30, 10950
void output(int num, int tot)
{
	printf("나이는 %d살이고, 살아온 총 날 수는 약 %d일 입니다.\n", num, tot);
	return;
} //return값이 없는 함수는 return문 생략가능
