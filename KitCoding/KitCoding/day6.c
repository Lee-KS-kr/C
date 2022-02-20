#include<stdio.h>
/*
char a[6] = "Hello";
//문자열 선언
char c[] = "World"; //index크기 생략가능
//문자열 표준 입력 scanf()
//입력된 문자열을 str(스트링)배열에 저장
//공백 또는 엔터 전까지 입력된 문자열을 저장
//함수 형식 : int scanf("%s", str); &기호를 적지않는다
*/
/*
int main()
{
	char str[15];
	scanf("%s", str);
}
*/
//gets()
//공백을 포함한 문자열 입력. 엔터 전까지
//char*gets(char*str);
//enter를 \0로 변환하여 저장
/*문자열 표준 출력
printf()
형식 문자열% s를 이용
char a[] = "Hello";
printf("%s", a);
문자 배열명을 printf함수의 첫 번째 인자로 가능
char a[] = "Hello";
printf(a);
int puts(const char* str);
str배열의 문자열을 표준 출력에 출력
배열의 \0을 \n로 변환하여 출력*/
void main()
{
	char str[15];
	gets(str);
	puts(str);
}