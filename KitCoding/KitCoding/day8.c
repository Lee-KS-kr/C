#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	struct student {
		char name[20]; //����ü �ɹ���
		int stNum, kor, eng, math;
		double average;

	}; //�ݵ�� ���� �����ݷ�(;)�� �ʿ���

	struct student s1= { "�� �漭",01,100,98,75,91};
	
	struct student s2;
	s2.name = "�� ����";
	s2.stNum = 02;
	s2.kor = 100;
	s2.eng = 100;
	s2.math = 100;
	s2.average = 100;

	printf("%d", sizeof(s1));
	return 0;
}