#include <stdio.h>
#pragma warning (disable : 4996)

struct gameInfo
{
	char* name;
	int year;
	int price;
	char* company;

	struct gameInfo* friendGame; //연관업체 게임
};

typedef struct gameInformation
{
	char* name;
	int year;
	int price;
	char* company;

	struct gameInfo* friendGame; //연관업체 게임
} 게임소개;

int main_strcut()
{
	//게임 출시
	//게임 이름 : 킷트게임
	//발매년도 : 2020
	//가격 990원
	//제작사 : 랜덤킷트

	//char* name = "킷트게임";
	//int year = 2020;
	//int price = 990;
	//int* company = "랜덤킷트";

	//또다른 게임 출시
	//게임이름 : 킷투게임
	//발매년도 : 2021
	//가격 : 1990원
	//제작사 : 킷투게임즈

	
	//구조체 사용
	struct gameInfo game1;
	game1.name = "킷트게임";
	game1.year = 2020;
	game1.price = 990;
	game1.company = "랜덤킷트";

	//구조체 출력
	printf(" === 게임 출시 정보 ===\n");
	printf("   게임명 : %s\n", game1.name);
	printf("   출시 년도 : %d\n", game1.year);
	printf("   가격 : %d\n", game1.price);
	printf("   제작사 : %s\n", game1.company);

	//구조체를 배열처럼 초기화
	struct gameInfo game2 = { "킷투게임",2021,1990,"킷투게임즈" };
	printf("\n\n === 게임 출시 정보 ===\n");
	printf("   게임명 : %s\n", game2.name);
	printf("   출시 년도 : %d\n", game2.year);
	printf("   가격 : %d\n", game2.price);
	printf("   제작사 : %s\n", game2.company);
	

	//구조체 배열
	struct gameInfo gameArray[2] = {
		{ "킷트게임",2020,990,"랜덤킷트" },
		{ "킷투게임",2021,1990,"킷투게임즈" }
	};

	for (int i = 0; i < 2; i++)
	{
		printf("\n\n === 게임 출시 정보 ===\n");
		printf("   게임명 : %s\n", gameArray[i].name);
		printf("   출시 년도 : %d\n", gameArray[i].year);
		printf("   가격 : %d\n", gameArray[i].price);
		printf("   제작사 : %s\n", gameArray[i].company);
	}

	//구조체 포인터
	struct gameInfo* gamePtr;
	gamePtr = &game1;
	/*printf("\n\n === (포인터) 게임 출시 정보 ===\n");
	printf("   게임명 : %s\n", ( * gamePtr).name);
	printf("   출시 년도 : %d\n",(* gamePtr).year);
	printf("   가격 : %d\n", (*gamePtr).price);
	printf("   제작사 : %s\n", (*gamePtr).company);*/

	printf("\n\n === (포인터) 게임 출시 정보 ===\n");
	printf("   게임명 : %s\n", gamePtr->name);
	printf("   출시 년도 : %d\n", gamePtr->year);
	printf("   가격 : %d\n", gamePtr->price);
	printf("   제작사 : %s\n", gamePtr->company);

	//연관업체 게임 소개(구조체 속의 구조체)
	game1.friendGame = &game2;
	printf("\n\n === (연관업체) 게임 출시 정보 ===\n");
	printf("   게임명 : %s\n", game1.friendGame->name);
	printf("   출시 년도 : %d\n", game1.friendGame->year);
	printf("   가격 : %d\n", game1.friendGame->price);
	printf("   제작사 : %s\n", game1.friendGame->company);

	//typedef
	//자료형에 별명을 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; //int i=3;
	실수 실수변수 = 3.23; 
	printf("정수변수 : %d, 실수변수 : %.2f\n\n", 정수변수, 실수변수);

	typedef struct gameInfo 게임정보;
	게임정보 game3;
	game3.name = "한글게임";
	game3.year = 2022;
	game3.price = 0;
	game3.company = "세종대왕과 집현전";

	게임소개 게임1;
	게임1.name = "영어게임";
	게임1.year = 2022;
	게임1.price = 1500;
	게임1.company = "England";

	return 0;
}