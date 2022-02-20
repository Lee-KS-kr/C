#include "header.h"

void makeComNum(int* com)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < 3; i++)
	{
		com[i] = rand() % 10;
		//printf("%d", com[i]);
	}
}

void makeUserNum(int* user)
{
	int inNum;
	printf("\n\n3자리 숫자를 입력하세요 : ");
	scanf("%d", &inNum);

	user[0] = inNum / 100;
	user[1] = (inNum % 100) / 10;
	user[2] = (inNum % 100) % 10;
}

int* check(int* c, int* u)
{
	int i, j;
	static int check[3];
	for (i = 0; i < 3; i++)
		check[i] = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (c[i] == u[j])
			{
				if (i == j)
					check[i] = STRIKE;
				else
					check[i] = BALL;
			}
		}
	}
	return check;
}

int tm_minDiff(time_t end, time_t start)
{
	double d_diff;
	d_diff = difftime(end, start);
	return d_diff / 60;
}

int tm_secDiff(time_t end, time_t start)
{
	int tm_min;
	double d_diff;
	d_diff = difftime(end, start);
	tm_min = d_diff / 60;
	return d_diff - (tm_min * 60);
}