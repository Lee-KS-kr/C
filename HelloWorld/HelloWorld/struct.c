#include <stdio.h>
#pragma warning (disable : 4996)

struct gameInfo
{
	char* name;
	int year;
	int price;
	char* company;

	struct gameInfo* friendGame; //������ü ����
};

typedef struct gameInformation
{
	char* name;
	int year;
	int price;
	char* company;

	struct gameInfo* friendGame; //������ü ����
} ���ӼҰ�;

int main_strcut()
{
	//���� ���
	//���� �̸� : ŶƮ����
	//�߸ų⵵ : 2020
	//���� 990��
	//���ۻ� : ����ŶƮ

	//char* name = "ŶƮ����";
	//int year = 2020;
	//int price = 990;
	//int* company = "����ŶƮ";

	//�Ǵٸ� ���� ���
	//�����̸� : Ŷ������
	//�߸ų⵵ : 2021
	//���� : 1990��
	//���ۻ� : Ŷ��������

	
	//����ü ���
	struct gameInfo game1;
	game1.name = "ŶƮ����";
	game1.year = 2020;
	game1.price = 990;
	game1.company = "����ŶƮ";

	//����ü ���
	printf(" === ���� ��� ���� ===\n");
	printf("   ���Ӹ� : %s\n", game1.name);
	printf("   ��� �⵵ : %d\n", game1.year);
	printf("   ���� : %d\n", game1.price);
	printf("   ���ۻ� : %s\n", game1.company);

	//����ü�� �迭ó�� �ʱ�ȭ
	struct gameInfo game2 = { "Ŷ������",2021,1990,"Ŷ��������" };
	printf("\n\n === ���� ��� ���� ===\n");
	printf("   ���Ӹ� : %s\n", game2.name);
	printf("   ��� �⵵ : %d\n", game2.year);
	printf("   ���� : %d\n", game2.price);
	printf("   ���ۻ� : %s\n", game2.company);
	

	//����ü �迭
	struct gameInfo gameArray[2] = {
		{ "ŶƮ����",2020,990,"����ŶƮ" },
		{ "Ŷ������",2021,1990,"Ŷ��������" }
	};

	for (int i = 0; i < 2; i++)
	{
		printf("\n\n === ���� ��� ���� ===\n");
		printf("   ���Ӹ� : %s\n", gameArray[i].name);
		printf("   ��� �⵵ : %d\n", gameArray[i].year);
		printf("   ���� : %d\n", gameArray[i].price);
		printf("   ���ۻ� : %s\n", gameArray[i].company);
	}

	//����ü ������
	struct gameInfo* gamePtr;
	gamePtr = &game1;
	/*printf("\n\n === (������) ���� ��� ���� ===\n");
	printf("   ���Ӹ� : %s\n", ( * gamePtr).name);
	printf("   ��� �⵵ : %d\n",(* gamePtr).year);
	printf("   ���� : %d\n", (*gamePtr).price);
	printf("   ���ۻ� : %s\n", (*gamePtr).company);*/

	printf("\n\n === (������) ���� ��� ���� ===\n");
	printf("   ���Ӹ� : %s\n", gamePtr->name);
	printf("   ��� �⵵ : %d\n", gamePtr->year);
	printf("   ���� : %d\n", gamePtr->price);
	printf("   ���ۻ� : %s\n", gamePtr->company);

	//������ü ���� �Ұ�(����ü ���� ����ü)
	game1.friendGame = &game2;
	printf("\n\n === (������ü) ���� ��� ���� ===\n");
	printf("   ���Ӹ� : %s\n", game1.friendGame->name);
	printf("   ��� �⵵ : %d\n", game1.friendGame->year);
	printf("   ���� : %d\n", game1.friendGame->price);
	printf("   ���ۻ� : %s\n", game1.friendGame->company);

	//typedef
	//�ڷ����� ������ ����
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3; //int i=3;
	�Ǽ� �Ǽ����� = 3.23; 
	printf("�������� : %d, �Ǽ����� : %.2f\n\n", ��������, �Ǽ�����);

	typedef struct gameInfo ��������;
	�������� game3;
	game3.name = "�ѱ۰���";
	game3.year = 2022;
	game3.price = 0;
	game3.company = "������հ� ������";

	���ӼҰ� ����1;
	����1.name = "�������";
	����1.year = 2022;
	����1.price = 1500;
	����1.company = "England";

	return 0;
}