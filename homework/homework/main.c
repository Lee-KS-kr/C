#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

typedef struct book {
	char bookTitle[50];
	char bookAuthor[20];
	int bookPrice;
	int bookStock;
}BOOK;

int inBook(BOOK*, int);
void outBook(BOOK*, int);
void searchBook(BOOK*, int);

int main()
{
	int sel, totlaBCnt = 0;
	BOOK myBook[100];
	while (1) {
		puts("\n���ϴ� �޴��� ��ȣ�� �Է��ϼ���");
		puts("1. ���� �Է�");
		puts("2. ���� ���");
		puts("3. ���� �˻�");
		puts("0. ����");
		scanf("%d", &sel);
		fflush(stdin);
		switch (sel) {
		case 1:totlaBCnt = inBook(myBook, totlaBCnt);
		case 2:outBook(myBook, totlaBCnt); break;
		case 3:searchBook(myBook, totlaBCnt); break;
		case 0:return 0;
		default: puts("�޴� ��ȣ�� �Է��ϼ���");
		}
	}
	return 0;
}

int inBook(BOOK* mb, int cnt)
{
	printf("\nå ������ �Է��ϼ��� : ");
	gets(mb[cnt].bookTitle);
	printf("���ڸ� �Է��ϼ��� : ");
	gets(mb[cnt].bookAuthor);
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &mb[cnt].bookPrice);
	printf("��� ������ �Է��ϼ��� : ");
	scanf("%d", &mb[cnt].bookStock);
	return ++cnt;
}

void outBook(BOOK* mb, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("\n----------------------\n");
		printf("���� : %s \n", mb[i].bookTitle);
		printf("���� : %s \n", mb[i].bookAuthor);
		printf("���� : %d \n", mb[i].bookPrice);
		printf("���� : %d \n", mb[i].bookStock);
	}
}

void searchBook(BOOK* mb, int cnt)
{
	char sTitle[50];
	int i, search;
	puts("\n���ϴ� �޴��� ��ȣ�� �Է��ϼ���");
	puts("1. ���� �˻� ");
	puts("2. ���� �˻� ");
	scanf("%d", &search);
	fflush(stdin);
	switch (search)
	{
	case 1:printf("\n�˻��� ������ �Է��ϼ��� : ");
		gets(sTitle);
		for (i = 0; i < cnt; i++);
		{
			if (!strcmp(mb[i].bookTitle, sTitle))
				break;
		}
		if (i < cnt)
		{
			printf("\n----------------------\n");
			printf("���� : %s \n", mb[i].bookTitle);
			printf("���� : %s \n", mb[i].bookAuthor);
			printf("���� : %d \n", mb[i].bookPrice);
			printf("���� : %d \n", mb[i].bookStock);
		}
		else
		{
			printf("\n----------------------\n");
			printf("��ġ�ϴ� å�� �����ϴ�. \n");
		}
		break;
	case 2:printf("\n�˻��� ���ڸ��� �Է��ϼ��� : ");
		gets(sTitle);
		for(i=0;i<cnt;i++)
		{
			if (!strcmp(mb[i].bookAuthor, sTitle))
				break;
		}
		if (i < cnt)
		{
			printf("\n----------------------\n");
			printf("���� : %s \n", mb[i].bookTitle);
			printf("���� : %s \n", mb[i].bookAuthor);
			printf("���� : %d \n", mb[i].bookPrice);
			printf("���� : %d \n", mb[i].bookStock);
		}
		else
		{
			printf("\n----------------------\n");
			printf("��ġ�ϴ� å�� �����ϴ�. \n");
		}
		break;
	default: puts("���ϴ� �޴��� ��ȣ�� �Է��ϼ���");
	}
}