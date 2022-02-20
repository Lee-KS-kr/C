/* 함수 끝에는 반드시 세미콜론으로 마무리 */
//printf라는 함수를 사용하기 위해서 이 함수를 가져오는 작업
/*int main(void)
{
	printf("Be happy\n");
	//\n 개행기능
	printf("My\t freind\a\n");
	printf("Goot\bd bye");
	printf("Cow\rW\a\n");
	return 0; 
	//메인함수 끝에는 반드시 리턴문으로 종료
}
*/
/* 
int num;
scanf("%d",&num);
num = num*2;
printf("num=%d", num);*/

/* 예제 1 
작성자 : 이경서 작성일 : 2022019
프로그램의 기능 : C프로그램의 기본 구조 소개*/
/*
#include<stdio.h> //printf함수의 선언부가 포함되어 있다
void printNumber(int); //printNumber함수의 선언부
int main() //main함수는 전달인자가 없다
{ //main함수는 int형 값을 하나 return하는 함수이다
	int num; //변수선언
	num = 1; //int num = 1;처럼 한줄로 쓸수있다
	printNumber(num);
	num = 3;
	printNumber(num);
	//처음에는 1을 넣어서 호출, 두번째는 3을 넣어서 호출
	return 0; //main함수 종료 
} //printNumber라는 사용자정의 함수의 호출부
void printNumber(int n)
{
	printf("정수값은 %d입니다.\n", n); //printf함수의 호출부
	return;
} //printNumber함수의 정의부
*/
/* 예제2 
작성일 20220110 작성자 이경서
Escape Sequence의 기능을 살펴보는 예제*/
/*
#include <stdio.h>
#include <conio.h> //console input output header
int main()
{
	printf("Hello");
	printf("Hello\t");
	printf("Hello\n"); //getch(); 프로그램을 잠깐 멈추게 하는 기능이었는데 visual studio 높은버전에선 더이상 지원을 안해줌...
	printf("Korea\r");	//getch();
	printf("C\n"); //getch();
	printf("King\b\b\b");	//getch();
	printf("ong\n"); //getch();
	printf("12345678123456781234567812345678\n");	//getch();
	printf("1\t123\t12345\t1234567\n");	//getch();
	printf("\\, \", \n"); //getch();
	printf("Boy\n");	//getch();
	printf("\102oy\n");	//getch();
	printf("\x42oy\n");	//getch();
	return 0;
}
*/
