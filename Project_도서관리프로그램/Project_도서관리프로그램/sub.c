#include "header.h"

BOOK* inBook(BOOK* mb, int* cn)
{
	//ver2 수정
	char yn;
	int number;
	int cnt;
	cnt = *cn;
	do {
		while(1) {
			mb = (BOOK*)realloc(mb, sizeof(BOOK) * (cnt + 1));
			
			printf("\n책 코드 : ");
			rewind(stdin);
			gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode));
			if (strlen(mb[cnt].bookCode) == 8)
			{
				number = strspn(mb[cnt].bookCode, "0123456789-");
				if (number == 8 && number != 0)
					break;
			}
			printf("\n책 코드를 다시 확인하세요.\n형식 : xxxx-xxx");
	
			printf("\n책 제목 : ");
			rewind(stdin);
			gets_s(mb[cnt].bookTitle, sizeof(mb[cnt].bookTitle));
			rewind(stdin);
			printf("저자 : ");
			gets_s(mb[cnt].bookAuthor, sizeof(mb[cnt].bookAuthor));
			printf("가격 : ");
			scanf("%d", &mb[cnt].bookPrice);
			printf("재고 수량 : ");
			scanf("%d", &mb[cnt].bookStock);
			printf("판매량 : ");
			scanf("%d", &mb[cnt].bookSale);
			}
		printf("\n 계속 입력하시겠습니까? (y/n) ");
		rewind(stdin);
		yn = getche();
		cnt++;
	} while (yn == 'y');

	*cn = cnt;
	return mb;

	//ver1 추가
	/*int number;
	while (1) {
		printf("\n책 코드 : ");
		rewind(stdin);
		gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode));
		if (strlen(mb[cnt].bookCode) == 8)
		{
			number = strspn(mb[cnt].bookCode, "0123456789-");
			if (number == 8 && number != 0)
				break;
		}
		printf("\n책 코드를 다시 확인하세요.\n형식 : xxxx-xxx");
	}

	printf("\n책 제목 : ");
	rewind(stdin);
	gets_s(mb[cnt].bookTitle, sizeof(mb[cnt].bookTitle));
	fflush(stdin);
	printf("저자 : ");
	gets_s(mb[cnt].bookAuthor, sizeof(mb[cnt].bookAuthor));
	printf("가격 : ");
	scanf("%d", &mb[cnt].bookPrice);
	printf("재고 수량 : ");
	scanf("%d", &mb[cnt].bookStock);

	return ++cnt;*/
}

void outBook(BOOK* mb, int cnt)
{
	int sel;

	puts("\n원하는 메뉴의 번호를 입력하세요");
	puts("1. 전체 출력");
	puts("2. 베스트 셀러 출력");
	puts("0. 돌아가기");
	rewind(stdin);
	scanf("%d", &sel);

	switch (sel)
	{
	case 1:
		for (int i = 0; i < cnt; i++)
	{
		printf("\n======================================");
		//ver1 코드추가
		printf("\n 코드 : %s", mb[i].bookCode);;
		printf("\n 제목 : %s", mb[i].bookTitle);
		printf("\n 저자 : %s", mb[i].bookAuthor);
		printf("\n 가격 : %d", mb[i].bookPrice);
		printf("\n 재고 : %d", mb[i].bookStock);
		printf("\n 판매 : %d\n", mb[i].bookSale);
	}
		break;

	case 2: qsor(mb, cnt + 1, sizeof(BOOK), compare);
		printf("\n======================================");
		printf("\n\t BEST SELLER TOP 3 ");
		printf("\n======================================");
		for (int i = 0; i < 3; i++)
		{
			printf("\nTOP %d : %30s, 판매 부수 : %d\n", i + 1, mb[i].bookTitle, mb[i].bookSale);
		}
		printf("\n======================================");
		break;		

	case 0: break;
	}
}

void searchBook(BOOK* mb, int cnt)
{
	//ver1 연도검색 추가
	char sTitle[50], sAuthor[20], sKey[20];
	int i, search, check = 0;
	char* year;
	
	puts("\n원하는 메뉴의 번호를 입력하세요");
	puts("1. 제목 검색");
	puts("2. 저자 검색");
	puts("3. 연도 검색");
	puts("0. 돌아가기");
	scanf("%d", &search);
	rewind(stdin);
	switch (search) {
	case 1: printf("\n검색할 책의 제목을 입력하세요.\n");
		rewind(stdin);
		gets_s(sTitle, sizeof(sTitle));
		/*원래코드
		for (i = 0; i < cnt; i++)
		{
			if (!strcmp(mb[i].bookTitle, sTitle))
				break;
		}
		if (i < cnt)
		{
			printf("\n=====================================");
			printf("\n 제목 : %s", mb[i].bookTitle);
			printf("\n 저자 : %s", mb[i].bookAuthor);
			printf("\n 가격 : %d", mb[i].bookPrice);
			printf("\n 재고 : %d\n\n", mb[i].bookStock);
		}
		else
		{
			printf("\n=====================================");
			printf("\n 일치하는 책이 없습니다.\n");
		}*/
		//ver1 수정
		for (i = 0; i < cnt; i++)
		{
			if (strstr(mb[i].bookTitle, sTitle) != NULL)
			{
				printf("\n=====================================");
				printf("\n 코드 : %s", mb[i].bookCode);
				printf("\n 제목 : %s", mb[i].bookTitle);
				printf("\n 저자 : %s", mb[i].bookAuthor);
				printf("\n 가격 : %d", mb[i].bookPrice);
				printf("\n 재고 : %d", mb[i].bookStock);
				printf("\n 판매 : %d", mb[i].bookSale);
				check++;
			}
		}
			if (check)
			{
				printf("\n=====================================");
				printf("\n 검색 건수 : %d \n\n", check);
			}
			else
			{
				printf("\n=====================================");
				printf("\n일치하는 책이 없습니다.\n\n");
			}
		break;
	case 2: printf("\n 검색할 책의 저자를 입력하세요.\n");
		rewind(stdin);
		gets_s(sAuthor, sizeof(sAuthor));
		/*이전 코드
		for (i = 0; i < cnt; i++)
		{
			if (!strcmp(mb[i].bookAuthor, sAuthor))
				break;
		}
		if (i < cnt)
		{
			printf("\n=====================================");
			printf("\n 제목 : %s", mb[i].bookTitle);
			printf("\n 저자 : %s", mb[i].bookAuthor);
			printf("\n 가격 : %d", mb[i].bookPrice);
			printf("\n 재고 : %d\n\n", mb[i].bookStock);
		}
		else
		{
			printf("\n=====================================");
			printf("\n 일치하는 책이 없습니다.\n");
		}*/
		//ver1 수정
		for (i = 0; i < cnt; i++)
		{
			if (strstr(mb[i].bookAuthor, sAuthor) != NULL)
			{
				printf("\n=====================================");
				printf("\n 코드 : %s", mb[i].bookCode);
				printf("\n 제목 : %s", mb[i].bookTitle);
				printf("\n 저자 : %s", mb[i].bookAuthor);
				printf("\n 가격 : %d", mb[i].bookPrice);
				printf("\n 재고 : %d", mb[i].bookStock);
				printf("\n 판매 : %d", mb[i].bookSale);
				check++;
			}
		}
		if (check)
		{
			printf("\n=====================================");
			printf("\n 검색 건수 : %d \n\n", check);
		}
		else
		{
			printf("\n=====================================");
			printf("\n일치하는 책이 없습니다.\n\n");
		}
		break;
	case 3: 
		printf("\n검색할 출판 연도를 입력하세요 : ");
		rewind(stdin);
		gets_s(sKey, sizeof(sKey));

		printf("\n=====================================================");
		printf("\n%10s %30s\n", "코   드", "제   목");
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
			printf("\n일치하는 책이 없습니다. \n\n");
		}
		break;
	case 0: break;
	default:puts("원하는 메뉴의 번호를 입력하세요.");
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
		puts("판매할 책의 이름을 입력하세요");
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
			printf("\n 제목 : %s", mb[i].bookTitle);
			printf("\n 저자 : %s", mb[i].bookAuthor);
			printf("\n 가격 : %d", mb[i].bookPrice);
			printf("\n 재고 : %d\n\n", mb[i].bookStock);

			printf("\n 구매 수량 : ");
			rewind(stdin);
			scanf("%d",&sellNum);
			if(sellNum>mb[i].bookStock)
			{
				printf("재고가 부족합니다.\m 관리자에게 문의해주세요.");
			}
			else
			{
				printf("\n구매가 정상 처리되었습니다.");
				mb[i].bookStock = (mb[i].bookStock - sellNum);
				mb[i].bookSale = (mb[i].bookSale + sellNum);
			}

		}
		else
		{
			printf("\n=====================================");
			printf("\n 일치하는 책이 없습니다.\n");
		}

		printf("\n더 구매하시겠습니까?");
		rewind(stdin);
		yn=getch();

	} while (yn == 'y');


	return;
}