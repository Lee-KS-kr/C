#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)

//5마리의 고양이가 있다
//아무 키나 눌러서 랜덤으로 고양이를 뽑되,
//5마리 모두 다 수집을 하면 종료
//중복발생가능.

//고양이에 대한 정보 : 이름, 나이, 성격, 키우기 난이도
typedef struct {
	char* name;
	int age;
	char* character;
	int level;
}CAT;
int collect[5] = { 0,0,0,0,0 };//현재까지 보유한 고양이
CAT cats[5];//전체 고양이 리스트

void initCats(); //고양이 정보 초기화
void printCat(int selected);
int checkCollection();

int main_structProject()
{
	srand(time(NULL));

	initCats();
	while (1)
	{
		printf("두근두근! 어느 고양이의 집사가 될까요?\n아무 키나 눌러서 확인하세요!\n");
		getchar();

		int selected = rand() % 5;//0~4사이의 숫자
		printCat(selected); //뽑은 고양이 정보 출력
		collect[selected] = 1; //고양이 뽑기 처리

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}
	}

	return 0;
}

void initCats()
{
	cats[0].name = "까미";
	cats[0].age = 5;
	cats[0].character = "느긋함";
	cats[0].level = 1;

	cats[1].name = "루비";
	cats[1].age = 1;
	cats[1].character = "애교쟁이";
	cats[1].level = 2;

	cats[2].name = "절미";
	cats[2].age = 8;
	cats[2].character = "호기심이 많음";
	cats[2].level = 3;

	cats[3].name = "모카";
	cats[3].age = 7;
	cats[3].character = "예민함";
	cats[3].level = 4;

	cats[4].name = "번즈";
	cats[4].age = 2;
	cats[4].character = "도도함";
	cats[4].level = 5;
}
void printCat(int selected)
{
	printf("\n\n === 당신은 이 고양이의 집사가 되었어요! ===\n\n");
	printf("  이름   : %s\n", cats[selected].name);
	printf("  나이   : %d\n", cats[selected].age);
	printf("  성격   : %s\n", cats[selected].character);
	printf("  레벨   : ");

	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "★");
	}
	printf("\n\n");
}
int checkCollection()
{
	//현재 보유한 고양이 목록을 출력
	//다 모았는지 여부를 반환
	int collectAll = 1;

	printf("\n\n === 보유한 고양이 목록 === \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collect[i] == 0) //고양이 수집 안 됨
		{
			printf("%10s", "(빈 박스)");
			collectAll = 0;
		}
		else //고양이 수집 됨
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n\n ========================== \n\n");

	if (collectAll)
	{
		printf("\n\n축하합니다! 모든 고양이를 데려왔어요.\n예쁘게 키워주세요!\n");
	}
	return collectAll;
}
