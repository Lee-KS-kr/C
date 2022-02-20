#include "header.h"

BOOK* inBook(BOOK* mb, int* cn)
{
	//ver2 ����
	char yn;
	int number;
	int cnt;
	cnt = *cn;
	do {
		while(1) {
			mb = (BOOK*)realloc(mb, sizeof(BOOK) * (cnt + 1));
			
			printf("\nå �ڵ� : ");
			rewind(stdin);
			gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode));
			if (strlen(mb[cnt].bookCode) == 8)
			{
				number = strspn(mb[cnt].bookCode, "0123456789-");
				if (number == 8 && number != 0)
					break;
			}
			printf("\nå �ڵ带 �ٽ� Ȯ���ϼ���.\n���� : xxxx-xxx");
	
			printf("\nå ���� : ");
			rewind(stdin);
			gets_s(mb[cnt].bookTitle, sizeof(mb[cnt].bookTitle));
			rewind(stdin);
			printf("���� : ");
			gets_s(mb[cnt].bookAuthor, sizeof(mb[cnt].bookAuthor));
			printf("���� : ");
			scanf("%d", &mb[cnt].bookPrice);
			printf("��� ���� : ");
			scanf("%d", &mb[cnt].bookStock);
			printf("�Ǹŷ� : ");
			scanf("%d", &mb[cnt].bookSale);
			}
		printf("\n ��� �Է��Ͻðڽ��ϱ�? (y/n) ");
		rewind(stdin);
		yn = getche();
		cnt++;
	} while (yn == 'y');

	*cn = cnt;
	return mb;

	//ver1 �߰�
	/*int number;
	while (1) {
		printf("\nå �ڵ� : ");
		rewind(stdin);
		gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode));
		if (strlen(mb[cnt].bookCode) == 8)
		{
			number = strspn(mb[cnt].bookCode, "0123456789-");
			if (number == 8 && number != 0)
				break;
		}
		printf("\nå �ڵ带 �ٽ� Ȯ���ϼ���.\n���� : xxxx-xxx");
	}

	printf("\nå ���� : ");
	rewind(stdin);
	gets_s(mb[cnt].bookTitle, sizeof(mb[cnt].bookTitle));
	fflush(stdin);
	printf("���� : ");
	gets_s(mb[cnt].bookAuthor, sizeof(mb[cnt].bookAuthor));
	printf("���� : ");
	scanf("%d", &mb[cnt].bookPrice);
	printf("��� ���� : ");
	scanf("%d", &mb[cnt].bookStock);

	return ++cnt;*/
}

void outBook(BOOK* mb, int cnt)
{
	int sel;

	puts("\n���ϴ� �޴��� ��ȣ�� �Է��ϼ���");
	puts("1. ��ü ���");
	puts("2. ����Ʈ ���� ���");
	puts("0. ���ư���");
	rewind(stdin);
	scanf("%d", &sel);

	switch (sel)
	{
	case 1:
		for (int i = 0; i < cnt; i++)
	{
		printf("\n======================================");
		//ver1 �ڵ��߰�
		printf("\n �ڵ� : %s", mb[i].bookCode);;
		printf("\n ���� : %s", mb[i].bookTitle);
		printf("\n ���� : %s", mb[i].bookAuthor);
		printf("\n ���� : %d", mb[i].bookPrice);
		printf("\n ��� : %d", mb[i].bookStock);
		printf("\n �Ǹ� : %d\n", mb[i].bookSale);
	}
		break;

	case 2: qsor(mb, cnt + 1, sizeof(BOOK), compare);
		printf("\n======================================");
		printf("\n\t BEST SELLER TOP 3 ");
		printf("\n======================================");
		for (int i = 0; i < 3; i++)
		{
			printf("\nTOP %d : %30s, �Ǹ� �μ� : %d\n", i + 1, mb[i].bookTitle, mb[i].bookSale);
		}
		printf("\n======================================");
		break;		

	case 0: break;
	}
}

void searchBook(BOOK* mb, int cnt)
{
	//ver1 �����˻� �߰�
	char sTitle[50], sAuthor[20], sKey[20];
	int i, search, check = 0;
	char* year;
	
	puts("\n���ϴ� �޴��� ��ȣ�� �Է��ϼ���");
	puts("1. ���� �˻�");
	puts("2. ���� �˻�");
	puts("3. ���� �˻�");
	puts("0. ���ư���");
	scanf("%d", &search);
	rewind(stdin);
	switch (search) {
	case 1: printf("\n�˻��� å�� ������ �Է��ϼ���.\n");
		rewind(stdin);
		gets_s(sTitle, sizeof(sTitle));
		/*�����ڵ�
		for (i = 0; i < cnt; i++)
		{
			if (!strcmp(mb[i].bookTitle, sTitle))
				break;
		}
		if (i < cnt)
		{
			printf("\n=====================================");
			printf("\n ���� : %s", mb[i].bookTitle);
			printf("\n ���� : %s", mb[i].bookAuthor);
			printf("\n ���� : %d", mb[i].bookPrice);
			printf("\n ��� : %d\n\n", mb[i].bookStock);
		}
		else
		{
			printf("\n=====================================");
			printf("\n ��ġ�ϴ� å�� �����ϴ�.\n");
		}*/
		//ver1 ����
		for (i = 0; i < cnt; i++)
		{
			if (strstr(mb[i].bookTitle, sTitle) != NULL)
			{
				printf("\n=====================================");
				printf("\n �ڵ� : %s", mb[i].bookCode);
				printf("\n ���� : %s", mb[i].bookTitle);
				printf("\n ���� : %s", mb[i].bookAuthor);
				printf("\n ���� : %d", mb[i].bookPrice);
				printf("\n ��� : %d", mb[i].bookStock);
				printf("\n �Ǹ� : %d", mb[i].bookSale);
				check++;
			}
		}
			if (check)
			{
				printf("\n=====================================");
				printf("\n �˻� �Ǽ� : %d \n\n", check);
			}
			else
			{
				printf("\n=====================================");
				printf("\n��ġ�ϴ� å�� �����ϴ�.\n\n");
			}
		break;
	case 2: printf("\n �˻��� å�� ���ڸ� �Է��ϼ���.\n");
		rewind(stdin);
		gets_s(sAuthor, sizeof(sAuthor));
		/*���� �ڵ�
		for (i = 0; i < cnt; i++)
		{
			if (!strcmp(mb[i].bookAuthor, sAuthor))
				break;
		}
		if (i < cnt)
		{
			printf("\n=====================================");
			printf("\n ���� : %s", mb[i].bookTitle);
			printf("\n ���� : %s", mb[i].bookAuthor);
			printf("\n ���� : %d", mb[i].bookPrice);
			printf("\n ��� : %d\n\n", mb[i].bookStock);
		}
		else
		{
			printf("\n=====================================");
			printf("\n ��ġ�ϴ� å�� �����ϴ�.\n");
		}*/
		//ver1 ����
		for (i = 0; i < cnt; i++)
		{
			if (strstr(mb[i].bookAuthor, sAuthor) != NULL)
			{
				printf("\n=====================================");
				printf("\n �ڵ� : %s", mb[i].bookCode);
				printf("\n ���� : %s", mb[i].bookTitle);
				printf("\n ���� : %s", mb[i].bookAuthor);
				printf("\n ���� : %d", mb[i].bookPrice);
				printf("\n ��� : %d", mb[i].bookStock);
				printf("\n �Ǹ� : %d", mb[i].bookSale);
				check++;
			}
		}
		if (check)
		{
			printf("\n=====================================");
			printf("\n �˻� �Ǽ� : %d \n\n", check);
		}
		else
		{
			printf("\n=====================================");
			printf("\n��ġ�ϴ� å�� �����ϴ�.\n\n");
		}
		break;
	case 3: 
		printf("\n�˻��� ���� ������ �Է��ϼ��� : ");
		rewind(stdin);
		gets_s(sKey, sizeof(sKey));

		printf("\n=====================================================");
		printf("\n%10s %30s\n", "��   ��", "��   ��");
		for (i = 0; i < cnt; i++)
		{
			year = strtok(mb[i].bookCode, "-");

			if (!strcmp(year, sKey))
			{
				printf("\n%10s %30s", mb[i].bookCode, mb[i].bookTitle);
				check++;
			}
		}
		printf("\n\n");
		if (check == 0)
		{
			printf("\n��ġ�ϴ� å�� �����ϴ�. \n\n");
		}
		break;
	case 0: break;
	default:puts("���ϴ� �޴��� ��ȣ�� �Է��ϼ���.");
	}
}

int compare(const void* a, const void* b)
{
	BOOK* ptr_a = (BOOK*)a;
	BOOK* ptr_b = (BOOK*)b;

	if (ptr_a->bookSale < ptr_b->bookSale)
		return 1;
	else if (ptr_a->bookSale == ptr_b->bookSale)
		return 0;
	else
		return -1;
}

void sellBook(BOOK* mb, int cnt)
{
	int sellNum, i, check;
	char sBook[50];
	char yn;

	do {
		puts("�Ǹ��� å�� �̸��� �Է��ϼ���");
		rewind(stdin);
		gets_s(sBook, sizeof(sBook));

		for (i = 0; i < cnt; i++)
		{
			if (!strcmp(mb[i].bookTitle, sBook))
				break;
		}
		if (i < cnt)
		{
			printf("\n=====================================");
			printf("\n ���� : %s", mb[i].bookTitle);
			printf("\n ���� : %s", mb[i].bookAuthor);
			printf("\n ���� : %d", mb[i].bookPrice);
			printf("\n ��� : %d\n\n", mb[i].bookStock);

			printf("\n ���� ���� : ");
			rewind(stdin);
			scanf("%d",&sellNum);
			if(sellNum>mb[i].bookStock)
			{
				printf("��� �����մϴ�.\m �����ڿ��� �������ּ���.");
			}
			else
			{
				printf("\n���Ű� ���� ó���Ǿ����ϴ�.");
				mb[i].bookStock = (mb[i].bookStock - sellNum);
				mb[i].bookSale = (mb[i].bookSale + sellNum);
			}

		}
		else
		{
			printf("\n=====================================");
			printf("\n ��ġ�ϴ� å�� �����ϴ�.\n");
		}

		printf("\n�� �����Ͻðڽ��ϱ�?");
		rewind(stdin);
		yn=getch();

	} while (yn == 'y');


	return;
}