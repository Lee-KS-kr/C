#include <stdio.h>
#pragma warning(disable:4996)

//선언
void func(int num);
void function_without_return();
int function_with_return();
void function_without_parametor();
void function_with_parametor(int num1, int num2, int num3);
int apple(int total, int ate);
//total 개에서 ate 개를 먹고 남은 수를 반환
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function()
{
	//function
	//계산기
//	int num;
//	printf("정수를 입력하세요 : \n");
//	scanf("%d", &num);
//	func(num);
//	//printf("num은 %d입니다.\n", num);
//
//	//+3은?
//	num = num + 3;
//	func(num);
//	//printf("num은 %d입니다.\n", num);
//
//	//-1은?
//	num -= 1;
//	func(num);
//	//printf("num은 %d입니다.\n", num);
//
//	//*3은?
//	num *= 3;
//	func(num);
//	//printf("num은 %d입니다.\n", num);
//
//	///6은?
//	num /= 6;
//	func(num);
//	//printf("num은 %d입니다.\n", num);
	
	//함수 종류
	//반환값이 없는 함수
	//function_without_return();

	//반환값이 있는 함수
	/*int ret = function_with_return();
	func(ret);*/

	//파라미터(전달값)가 없는 함수
	//function_without_parametor();

	//전달값이 있는 함수
	//function_with_parametor(35, 27, 12);

	//파라미터도 받고 반환값도 보내주는 함수
	//int ret = apple(5, 2);
	//func(ret);
	//printf("사과 %d개 중에 %d개를 먹으면 %d개가 남아요.\n", 10, 4, apple(10, 4));

	//계산기 함수
	/*int num = 2;

	num = add(num, 3);
	func(num);

	num = sub(num, 1);
	func(num);

	num = mul(num, 3);
	func(num);

	num = div(num, 6);
	func(num);*/

	return 0;
}

////정의
//전달값 36 함수 : ㅁ+4 출력값 : ?
//반환형 함수이름 (형식 전달값, 형식 전달값2, ...)
//{
//	return;
//}
void func(int num)
{
	printf("num은 %d입니다.\n", num);
}
void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}
int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}
void function_without_parametor()
{
	printf("전달값이 없는 함수입니다.\n");
}
void function_with_parametor(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수입니다.\n");
	printf("전달값 1 : %d\n", num1);
	printf("전달값 2 : %d\n", num2);
	printf("전달값 3 : %d\n", num3);
}
int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}
int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2;
}


