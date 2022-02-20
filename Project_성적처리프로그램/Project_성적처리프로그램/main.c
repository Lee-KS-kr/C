#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning( disable : 26454 )
#define ST_NUM 20
#define NAME_LENGTH 10

typedef struct sungjuk {
	char name[NAME_LENGTH];
	int kor, eng, math;
	double avg;
} SUNGJUK;

int inScore(SUNGJUK*, int);
void outScore(SUNGJUK*, int);
void sortScore(SUNGJUK*, int);

int main()
{
	int sel, totalSCnt = 0;
	SUNGJUK student[ST_NUM];
	while (1)
	{
		puts("\n원하는 메뉴의 번호를 입력하세요.");
		puts("1. 성적 입력");
		puts("2. 성적순 출력");
		puts("0. 프로그램 종료");

		scanf("%d", &sel);
		fflush(stdin);
		switch (sel)
		{
		case 1: totalSCnt = inScore(student, totalSCnt); break;
		case 2: outScore(student, totalSCnt); break;
		case 0: return 0;
		default: puts("\n원하는 메뉴의 번호를 입력하세요.");
		}
	}
	return 0;
}

int inScore(SUNGJUK* st, int cnt)
{
	char op;
	do {
		printf("\n이름 : ");
		rewind(stdin);
		gets_s(st[cnt].name, sizeof(st[cnt].name));
		printf("국어 점수 : ");
		rewind(stdin);
		scanf("%d", &st[cnt].kor);
		printf("영어 점수 : ");
		rewind(stdin);
		scanf("%d", &st[cnt].eng);
		printf("수학 점수 : ");
		rewind(stdin);
		scanf("%d", &st[cnt].math);
		st[cnt].avg = (double)(st[cnt].kor + st[cnt].eng + st[cnt].math) / 3.0;
		
		puts("계속 입력하시겠습니까?(y/n)");
		rewind(stdin);
		op = getchar();
		cnt++;
	} while (op != 'n');
	return cnt;
}
void outScore(SUNGJUK* st, int cnt)
{
	int i;
	sortScore(st, cnt);
	printf("\n====================================");
	printf("\n 순위 이름 국어 영어 수학 평균 ");
	printf("\n====================================");
	for (i = 0; i < cnt; i++)
	{
		printf("\n %2d %10s %5d %5d %5d %3.1f \n", i + 1, st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].avg);
	}
}
void sortScore(SUNGJUK* st, int cnt)
{
	SUNGJUK temp;
	for (int i = 0; i < cnt - 1; i++)
	{
		for (int j = 0; j < (cnt - i) - 1; j++)
		{
			if (st[j].avg < st[j + 1].avg)
			{
				temp = st[j];
				st[j] = st[j + 1];
				st[j + 1] = temp;
			}
		}
	}
}