#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	struct student {
		char name[20]; //구조체 맴버들
		int stNum, kor, eng, math;
		double average;

	}; //반드시 끝에 세미콜론(;)이 필요함

	struct student s1= { "이 경서",01,100,98,75,91};
	
	struct student s2;
	s2.name = "박 귀자";
	s2.stNum = 02;
	s2.kor = 100;
	s2.eng = 100;
	s2.math = 100;
	s2.average = 100;

	printf("%d", sizeof(s1));
	return 0;
}