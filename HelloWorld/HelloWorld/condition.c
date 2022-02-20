#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)

int main_condition()
{
	//if (조건){조건 일치시 수행} else {이외 경우에 수행}
	//버스를 탄다고 가정, 학생 일반인으로 구분(일반인 20세)
	/*int age = 25;
	if (age >= 20)
	{
		printf("성인입니다.\n");
	}
	else
	{
		printf("학생입니다.\n");
	}*/

	//초등학생, 중학생, 고등학생으로 나누면?
	//8-13, 14-16, 17-19
	/*int age;
	scanf("%d", &age);
	if (age >= 20)
	{
		printf("성인입니다.\n");
	}
	else
	{
		if (age >= 17)
		{
			printf("고등학생입니다.\n");
		}
		else
		{
			if (age >= 14)
			{
				printf("중학생입니다.\n");
			}
			else if (age >= 8)
			{
				printf("초등학생입니다.\n");
			}
			else
			{
				printf("어린이입니다.\n");
			}
		}
	}*/

	//break와 continue
	//1번부터 30번까지 있는 반에서 1번부터 5번까지 조별 발표를 합니다.
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요\n");
			break;
		}
		printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
	}*/

	//1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	//7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.\n", i);
				continue; 
				//바로 다음 반복으로 들어감
			}
			printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
		}
	}*/

	//&&(and) ||(or)
	/*int a = 10, b = 11, c = 13, d = 13;
	if (a == b && c == d)
	{
		printf("a와 b는 같고, c와 d도 같습니다.");
	}
	else if (a == b || c == d)
	{
		printf("a와 b가 같거나, c와 d가 같습니다.");
	}
	else
		printf("값이 서로 다르네요.\n");*/

	//가위바위보
	/*srand(time(NULL));
	int i = rand() % 3; //0~2 사이의 숫자를 반환
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else
		printf("보\n");*/

	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default: printf("몰?루\n"); break;
	}*/
	/*int age;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	switch (age)
	{
	case 8: case 9: case 10: case 11: case 12:
	case 13: printf("초등학생입니다.\n"); break;
	case 14: case 15: case 16: printf("중학생입니다.\n"); break;
	case 17: case 18: case 19: printf("고등학생입니다.\n"); break;
	default: printf("일반입니다.\n"); break;
	}*/
	
	//프로젝트
	//Up and Down
	srand(time(NULL));
	int ranNum = rand() % 100 + 1;
	//printf("숫자 : %d", ranNum);
	int answer, chance = 5;
	while (1)
	{
		printf("\n\n남은 기회 : %d번\n", chance--);
		printf("숫자를 맞춰보세요.(1~100 사이) : ");
		scanf("%d", &answer);

		if (answer > ranNum)
		{
			printf("DOWN ↓!\n");
		}
		else if (answer < ranNum)
		{
			printf("UP ↑!\n");
		}
		else
		{
			printf("정답입니다!\n");
			break;
		}
		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요. \n아쉽게 실패했습니다ㅠㅠ");
			break;
		}
	}

	return 0;
}
