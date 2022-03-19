#include <stdio.h>
#pragma warning (disable : 4996)

struct tagStudent {
	char name[50];
	int no;
	int age;
};

typedef struct tagStudent Student;

int main()
{
	Student a; // 구조체형 변수 
	a.age = 10;
	a.no = 1234;
	a.name[0] = 'M';
	a.name[1] = 'O';
	a.name[2] = 'N';
	a.name[3] = '\0';

	printf("이름 : %s, 나이 : %d, 학번 : %d\n", a.name, a.age, a.no);

	Student stArray[100];

	for (int i = 0; i < 100; i++) {
		stArray[i].age = i;
		stArray[i].no = i;
		sprintf(stArray[i].name, "MONSTER_%d", i);
	}

	for (int i = 0; i < 100; i++) {
		printf("%d번째 학생 이름 : %s, 학번 : %d, 나이 : %d\n\n",
			i, stArray[i].name, stArray[i].no, stArray[i].age);
	}

	return 0;
}