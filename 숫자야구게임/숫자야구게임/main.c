#include "header.h"

int main(void)
{
	int i, com[3], user[3], sum, strikeCnt, ballCnt, tryCnt = 0;
	int* pcheck;
	time_t start, end;
	makeComNum(com);

	printf("���� �߱� ����!");
	start = time(NULL);
	while (1) {
		sum = 0; tryCnt++;
		strikeCnt = 0; ballCnt = 0;
		makeUserNum(user);
		pcheck = check(com, user);

		for (i = 0; i < 3; i++)
		{
			switch (pcheck[i])
			{
				case STRIKE: strikeCnt++; break;
				case BALL: ballCnt++; break;
			}
			sum += pcheck[i];
		}
		printf("\nresult : Stirck %d	Ball %d", strikeCnt, ballCnt);
		printf("\n---------------------------------");
		if (sum == 6) {
			end = time(NULL);
			printf("\n�����Դϴ�! ");
			printf("\n�õ� Ƚ��: %dȸ ", tryCnt);
			printf("\n�ҿ� �ð� : %d�� %d�� ", tm_minDiff(end, start), tm_secDiff(end, start));
			break;
		}
	}
	return 0;
}