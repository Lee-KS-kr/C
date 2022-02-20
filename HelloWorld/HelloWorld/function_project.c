#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)

int getRandNum(int level);
void showQ(int level, int numX, int numY);
void success(void);
void fail(void);

int main_functionProject()
{
	//���� 5���� �ְ�, �� ������ ���� ����� ������� ����
	//���߸� ���, Ʋ���� ����
	//��������� ����

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
			printf("\n������ �����մϴ�.\n");
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
	printf("\n\n ����� �� %d���� ��й�ȣ�� ������ϴ�.\n\n", count);
	return 0;
}

int getRandNum(int level)
{
	return rand() % (level * 7) + 1;
}

void showQ(int level, int numX, int numY)
{
	printf("\n\n\n-------------------------------\n");
	printf("\t%d��° ��й�ȣ\n", level);
	printf("\t%d * %d = ?\n",numX, numY);
	printf("-------------------------------\n");
	printf("��й�ȣ�� �Է��ϼ��� >> \n");
	printf("\t\t���� : 0\n");
}

void success(void)
{
	printf("\n >> Good : �����Դϴ�! ");
}

void fail(void)
{
	printf("\n >> Bad : �����Դϴ�. ");
}