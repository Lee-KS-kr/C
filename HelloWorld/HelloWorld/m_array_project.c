#include <stdio.h>
#include<time.h>
#pragma warning (disable:4996)

//10마리의 서로 다른 동물(각 카드 2장씩
//사용자로부터 2개의 입력값을 받아서
//같은 동물 찾으면 카드 뒤집기
//모든 동물 쌍을 찾으면 게임 종료
//게임 종료할 때, 총 실패 횟수 알려주기

int arrayAnimal[4][5]; //카드 지도. 전체 카드 총 20장.
char* strAnimal[10];
int checkAnimal[4][5]; //뒤집혔는지 여부 확인

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();

int main_marrayProject()
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	//실패 횟수
	int failCount = 0;
	
	while (1)
	{
		int select1 = 0; //첫번째 선택
		int select2 = 0; //두번째 선택

		//printAnimals(); //동물위치 출력 debug용
		printQuestion(); //문제 출력(카드 지도)
		printf("뒤집을 카드를 2개 고르세요 : ");
		scanf("%d %d", &select1, &select2);

		if (select1 == select2) //같은 카드 선택시 무효
			continue;

		//좌표에 해당하는 카드를 뒤집어 보고 같은지 안같은지 확인
		//정수좌표를 x,y로 변환
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);
		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		//카드가 뒤집히지 않았는지 && 두 동물이 같은지
		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0
			&& checkAnimal[secondSelect_x][secondSelect_y]==0)
			&& arrayAnimal[firstSelect_x][firstSelect_y] 
			== arrayAnimal[secondSelect_x][secondSelect_y])
		{
			printf("\n\n 빙고!! : %s 발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]] );
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		//같은 동물이 아닌경우
		else
		{
			printf("땡!! (틀렸거나, 이미 뒤집힌 카드입니다.)");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		//모든 동물을 찾았는지 여부.
		if (foundAllAnimals() == 1)
		{
			printf("\n\n 축하합니다! 모든 동물을 다 찾았네요 \n");
			printf("지금까지 총 %d번 실수했습니다.\n", failCount);
			break;
		}
	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}
void initAnimalName()
{
	strAnimal[0] = "쥐";
	strAnimal[1] = "소";
	strAnimal[2] = "호랑이";
	strAnimal[3] = "토끼"; 
	strAnimal[4] = "용"; 
	strAnimal[5] = "기린"; 
	strAnimal[6] = "강아지"; 
	strAnimal[7] = "고양이";
	strAnimal[8] = "새";
	strAnimal[9] = "나비";
}
void shuffleAnimal() 
{
	//동물카드가 20장
	//10마리의 동물이 한 쌍씩 있음
	//이 비어있는 맵 아무곳에 넣는다

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}
int getEmptyPosition() //좌표에서 빈 공간 찾기
{
	while (1)
	{
		int randPos = rand() % 20; //0~19숫자
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}		
	}
	return 0;
}
int conv_pos_x(int x)
{
	return x / 5;
}
int conv_pos_y(int y)
{
	return y % 5;
}
void printAnimals()
{
	printf("\n===이건 비밀인데... 몰래 보여줄게요!=====\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n=========================================\n\n");
}
void printQuestion()
{
	printf("\n\n >> 문제 \n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//카드를 뒤집어서 정답을 맞혔으면 동물 이름
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			
			//아직 뒤집지 못했으면 뒷면 => 카드번호 숫자
			else
			{
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}
int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
				return 0;
		}
	}
	return 1;
}