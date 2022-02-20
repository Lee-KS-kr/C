#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)

int getRandNum(int level);
void showQ(int level, int numX, int numY);
void success(void);
void fail(void);

int main_functionProject()
{
	//문이 5개가 있고, 각 문마다 점점 어려운 수식퀴즈가 출제
	//맞추면 통과, 틀리면 실패
	//출제방식은 랜덤

	srand(time(NULL));
	int count=0;
	for (int i = 1; i <= 5; i++)
	{
		int numX = getRandNum(i);
		int numY = getRandNum(i);
		showQ(i, numX, numY);

		int answer;
		scanf("%d", &answer);
		if (answer == 0)
		{
			printf("\n게임을 종료합니다.\n");
			exit(0);
		}
		else if (answer == numX * numY)
		{
			success();
			count++;
		}
		else
		{
			fail();
		}
		
	}
	printf("\n\n 당신은 총 %d개의 비밀번호를 맞췄습니다.\n\n", count);
	return 0;
}

int getRandNum(int level)
{
	return rand() % (level * 7) + 1;
}

void showQ(int level, int numX, int numY)
{
	printf("\n\n\n-------------------------------\n");
	printf("\t%d번째 비밀번호\n", level);
	printf("\t%d * %d = ?\n",numX, numY);
	printf("-------------------------------\n");
	printf("비밀번호를 입력하세요 >> \n");
	printf("\t\t종료 : 0\n");
}

void success(void)
{
	printf("\n >> Good : 정답입니다! ");
}

void fail(void)
{
	printf("\n >> Bad : 오답입니다. ");
}