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
		puts("\n���ϴ� �޴��� ��ȣ�� �Է��ϼ���.");
		puts("1. ���� �Է�");
		puts("2. ������ ���");
		puts("0. ���α׷� ����");

		scanf("%d", &sel);
		fflush(stdin);
		switch (sel)
		{
		case 1: totalSCnt = inScore(student, totalSCnt); break;
		case 2: outScore(student, totalSCnt); break;
		case 0: return 0;
		default: puts("\n���ϴ� �޴��� ��ȣ�� �Է��ϼ���.");
		}
	}
	return 0;
}

int inScore(SUNGJUK* st, int cnt)
{
	char op;
	do {
		printf("\n�̸� : ");
		rewind(stdin);
		gets_s(st[cnt].name, sizeof(st[cnt].name));
		printf("���� ���� : ");
		rewind(stdin);
		scanf("%d", &st[cnt].kor);
		printf("���� ���� : ");
		rewind(stdin);
		scanf("%d", &st[cnt].eng);
		printf("���� ���� : ");
		rewind(stdin);
		scanf("%d", &st[cnt].math);
		st[cnt].avg = (double)(st[cnt].kor + st[cnt].eng + st[cnt].math) / 3.0;
		
		puts("��� �Է��Ͻðڽ��ϱ�?(y/n)");
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
	printf("\n ���� �̸� ���� ���� ���� ��� ");
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