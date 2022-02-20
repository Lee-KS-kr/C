#include<stdio.h>
/*
int main()
{
	printf("Hello World!\n"); //출력 문장
	printf("Good Morning!");
	return 0;
}
*/
/*변수 선언시에는 영문자 숫자 언더바(_)만 사용가능
또만, 변수 첫글자는 영문자와 언더바만 가능하며 숫자로
시작하는 변수는 선언불가. 예약어도 변수로 불가능.
ex) osu, _su 가능, 1su, osu? 불가능.
변수 초기화는 =(대입 연산자)를 이용함
int a; a=6; / int b=5; 등등등...
#define문으로 정의되는 상수 
형식 #define 매크로이름 상수
#define MAX 100 */
/*
int a;
a = 15;
int main()
{
	printf("%d", a);
	return 0;
}
*/
/*형식 지정자를 이용한 출력
%c 문자 출력 %d 정수값 출력 %o 8진수 출력
%x, %X %#x 16진수 출력, x는 2a와 같이 소문자, X는 2A,
#은 0x2a
%u 부호 없는 십진수 %e, %E 지수형식 출력(1.23e+05)
%f, %lf 실수값 출력, lf는 long double %s 문자열 출력*/
/*연산자
산술연산자 : +(더하기) -(빼기) *(곱하기) /(나누기) %(나머지)
관계연산자 : 크기 비교 연산에 사용됨. 비교결과 참이면 1 거짓이면 0
>(크다) <(작다) >=(크거나 같다) <=(작거나 같다) !=(다르다) ==(같다)
논리연산자 : 참거짓을 판단하는 연산자 AND OR NOT연산에 사용됨
&& AND ||OR(쉬프트+역슬래시) !NOT
증감연산자 : 값을 1만큼 증가 또는 감소시키는 연산자
증감연산자는 반드시 변수에만 사용
연산자 위치에 따라 연산순서가 다름 (예시코드를 확인하세요)
비트연산자 : 비트단위의 연산에 사용되는 연산자
& AND !OR ~ NOT ^ XOR(같으면 0 다르면 1)
이동연산자 : 이동후 빈자리는 0으로 채워짐
<< 왼쪽으로 이동 >> 오른쪽으로 이동
비트 왼쪽이동 : 왼쪽 피연산자*2^n 비트 오른쪽이동 : 왼쪽 피연산자/2^n
대입연산자 : 이퀄기호
왼쪽 변수에 오른쪽 값을 저장. 왼쪽은 변수만 가능. 복함대입 연산자를 사용할 수 있음
*/
/*
int main()
{
	int a = 5, b = 2;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	return 0;
}
*/
/*
int main()
{
	int a = 9, b = 2;
	printf("%d > %d의 결과값은 %d입니다.\n", a, b, a > b);
	int c = 6, d = 6;
	printf("%d == %d의 결과값은 %d입니다.\n", c, d, c==d);
	return 0;
}
*/
/*
int main()
{
	int a = 5, b;
	printf("a=%d\n", a++);
	b = ++a;
	printf("a=%d b=%d", a, b);
	printf("\n a=%d b=%d", a++, ++b);
	return 0;
}
*/
/*
int main()
{
	int a = 5, b = 2;
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d / %d = %f\n", a, b, (double)a / b);
	printf("%d / %d = %f\n", a, b, (double)(a / b)); 
	printf("%d / %d = %f\n", a, b, a / b); //IDEone에선 문제없이 출력됨.
	printf("\n\n5 / 2 = %d\n", 5 / 2);
	printf("5 / 2 = %f\n", 5 / 2.0);
	return 0;
}
*/
/*
if문 조건을 판단하여 참인 경우 문장 수행
if(score<60) //조건식
	printf("불합격입니다.\n"); //참인 경우 수행

int a=5; //변수 a가 양수이면 Positive를 출력하시오.
if(a>0)
	printf("Positive");

//변수 a가 양수이면 a에 1을 할당하고 Positive를 출력하시오.
int a=5;
if(a>0)
{
	a=1;
	printf("Positive");
}

// if~ else
if(score<60)
	printf("불합격입니다.\n");
else
	printf("합격입니다.\n");

//변수 a가 양수이면 Positive 음수이면 Negative를 출력하시오
int a=5;
if(a>0)
	printf("Positive");
else
	printf("Negative");

//변수 a가 홀수이면 Odd를, 짝수이면 Even를 출력하시오
int a=5;
if(a%2) //짝수를 1로 나누면 나머지가 0, 홀수면 1. 조건식에서 참이면 1 거짓이면 0이기 때문에 가능함.
	printf("Odd");
else
	printf("Even");

if~ else if~ else
if(age<19)
	printf("청소년 요금입니다.\n");
else if(age>=65)
	printf("경로 우대 요금입니다.\n");
else
	printf("성인 요금입니다.\n");

//변수 a가 양수이면 Positive, 음수이면 Negative, 0이면 Zero를 출력하시오
int a=5;
if(a>0)
	printf("Positive\n");
else if(a<0)
	printf("Negative\n");
else
	printf("Zero");
	
//변수 a가 양수인경우, 100 이상이면 Great, 100미만이면 Good, 음수이면 Negative, 0이면 Zero를 출력하시오.
int a;
int main()
{
	if (a > 0)
	{
		if (a >= 100)
			printf("Great");
		else
			printf("Good");
	}	
	else if (a = 0)
		printf("Zero");
	else
		printf("Negative");
	return 0;
}
*/
/*
switch문 값에는 상수만 사용 가능하며 수식은 사용할 수 없다.

switch (값)
{
	case 값1: 문장1 - 1; 문장1 - 2; break; //블럭을 탈출하는 명령어
	case 값2: 문장2 - 1; 문장2 - 2; break;
	default: 문장d1; 문장d2;
}
*/
/*
int a = 2;
int main()
{
	switch (a)
	{
		case 1: printf("one"); break;
		case 2: printf("two"); break;
		case 3: printf("three"); break;
		default:printf("other");
	}
return 0;
}
*/
/*
char a = 'L';
int main()
{
	switch (a)
	{
	case 'K': printf("Kim"); break;
	case 'L': printf("Lee"); break;
	case 'P': printf("Park"); break;
	default:printf("other");
	}
	return 0;
}
*/
/*같은 내용 다른 문법 비교
char grade;
int main()
{
	scanf("%c", &grade);
	if (grade == 'A')
		printf("Excellent");
	else if (grade == 'B')
		printf("Good");
	else if (grade == 'C')
		printf("Normal");
	else
		printf("Fail");
	return 0;
}
*/
/*
int main()
{
	int a, b;
	scanf("%d", &a);
	printf("%d\n", a);
	scanf("%d", &b);
	printf("%d\n", b);
	scanf("%d %d", &a, &b);
	printf("%d %d", a, b);
	return 0;
}
*/
