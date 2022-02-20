#include "header.h"

int main(void)
{
	int i, com[3], user[3], sum, strikeCnt, ballCnt, tryCnt = 0;
	int* pcheck;
	time_t start, end;
	makeComNum(com);

	printf("숫자 야구 게임!");
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
			printf("\n정답입니다! ");
			printf("\n시도 횟수: %d회 ", tryCnt);
			printf("\n소요 시간 : %d분 %d초 ", tm_minDiff(end, start), tm_secDiff(end, start));
			break;
		}
	}
	return 0;
}