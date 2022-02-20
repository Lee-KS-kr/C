#pragma warning(disable:4996)
#include <stdio.h>

int main_printfscanf(void)
{
	//정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//실수형 변수에 대한 예제
	//float f = 46.5f;
	//printf("%.2f\n", f); //소숫점 둘째자리가지만 표시하는 실수
	//double d = 4.428;
	//printf("%.2lf\n", d);

	//상수 예제
	//const int year = 2000; //상수가 됨.
	//printf("태어난 연도 : %d\n", year);
	//year = 2001; 변경할 수 없게 됨.

	//printf
	//연산
	//int add = 3 + 7; //10
	//printf("3 + 7 = %d\n", add);
	//printf("%d x %d = %d", 30, 79, 30 * 79);

	//scanf
	//키보드 입력을 받아서 저장
	//int input;
	//printf("값을 입력하세요 : \n");
	//scanf("%d", &input);
	//printf("입력값 : %d\n", input);

	//int one, two, three;
	//printf("3개의 정수를 입력하세요 : \n");
	//scanf("%d %d %d", &one, &two, &three);
	//printf("입력값 : %d, %d, %d", one, two, three);
	
	//문자(한 글자)와 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c", c);
	char str[256];
	scanf("%s", str, sizeof(str));
	printf("%s", str);*/

	//프로젝트
	//경찰관이 범죄자의 정보를 입수(조서 작성)
	//이름? 나이? 몸무게? 키? 범죄명?

	char name[256];
	int age;
	float weight;
	double height;
	char crime[256];
	printf("이름?\n");
	scanf("%s", name, sizeof(name));
	printf("나이?\n");
	scanf("%d", &age);
	printf("몸무게?\n");
	scanf("%f", &weight);
	printf("키?\n");
	scanf("%lf", &height);
	printf("범죄 명?\n");
	scanf("%s", crime, sizeof(crime));

	//조서 내용 출력
	printf("\n\n ----- 범죄자 정보 -----\n\n");
	printf(" 이름	:	%s\n", name);
	printf(" 나이	:	%d\n", age);
	printf(" 몸무게	:	%.2f\n", weight);
	printf(" 키	:	%.1lf\n", height);
	printf(" 범죄명	:	%s\n", crime);
	return 0;
}