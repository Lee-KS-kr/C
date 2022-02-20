#pragma warning (disable:4996)
#include <stdio.h>
#include<time.h>

//물고기 6마리가 있다
//이들은 어항에 살고 사막에 있다
//사막이 너무 덥고 건조해서 물이 아주 빨리 증발한다
//물이 다 증발하기 전에 어항에 물을 줘서 물고기를 살리자!
//물고기는 시간이 지날수록 점점 커진다
//다 키워서 냠냠!

void initData();
void printFished();
void decreaseWater(long elapTime);

int level;
int arrayFish[6];
int* cursor;

int main_pointerProject()
{
	long startTime = 0; //게임시작시간
	long totalElapTime = 0; //총 경과시간
	long prevElapTime = 0; //직전 경과시간

	int num; //멸번 어항에 물을 줄 것인지 사용자 입력
	initData();

	cursor = arrayFish;

	startTime = clock(); //현재 시간을 millisecond로 반환
	while (1)
	{
		printFished();
		printf("몇 번 어항에 물을 주시겠어요? ");
		scanf("%d", &num);

		//입력값 체크
		if (num < 1 || num>6)
		{
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}

		//총 경과 시간
		totalElapTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과시간 : %ld초\n", totalElapTime);

		//직전에 물 준 시간
		prevElapTime = totalElapTime - prevElapTime;
		printf("최근 경과 시간 : %ld초\n",prevElapTime);

		//어항의 물을 감소(증발)
		decreaseWater(prevElapTime);

		//사용자가 입력한 어항에 물을 준다
		//1 어항의 물이 0이면? 물을 주지 않는다
		if (cursor[num - 1] <= 0)
		{
			printf("%d번 물고기는 이미 죽었습니다. 물을 주지 않습니다.\n", num);
		}
		//2 어항의 물이 0이 아닌 경우 물을 준다 : 100을 넘지 않는지 체크
		else if (cursor[num - 1] + 1 <= 100)
		{
			//물을 준다
			printf("%d번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1;
		}

		//레벨업을 할 건지 확인 (레벨업은 20초마다 한번씩 수항)
		if (totalElapTime / 20 > level - 1)
		{
			level++;
			printf(" ***** LEVEL UP! *****\n");
			printf("\t 현재 레벨 : %d \n", level);
			if (level == 5)
			{
				printf("\n\n 축하합니다! 최고 레벨을 달성하였습니다.\n\n");
				printf("게임을 종료합니다.");
				exit(0);
			}
		}

		//모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			//물고기가 모두 죽었다..
			printf("모든 물고기가 죽었습니다.\n");
			exit(0);
		}
		else
		{
			//최소 한마리 이상의 물고기가 살아있음
			printf("물고기가 아직 살아있어요!\n");
		}
		prevElapTime = totalElapTime;
	}


	return 0;
}

void initData()
{
	level = 1; //게임레벨 (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; //어항의 물 높이
	}
}

void printFished()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번 \n",1,2,3,4,5,6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 2 * (int)elapTime);
		//3은 난이도 조절을 위한 값
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1;
	}
	return 0;
}

