#include "head.h"

int main()
{
	char enter;
	int sel, totalBCnt = 0;
	BOOK* myBook;
	myBook = (BOOK*)calloc(2, sizeof(BOOK));

	while (1)
	{
		puts("\n원하는 메뉴의 번호를 입력하세요.");
		puts("1. 도서 입력");
		puts("2. 도서 출력");
		puts("3. 도서 검색");
		puts("4. 도서 판매");
		puts("0. 종료");
		scanf("%d", &sel);
		fflush(stdin);

		switch (sel) {
		case 1:rewind(stdin); myBook = inBook(myBook, &totalBCnt); break;
		case 2:rewind(stdin); outBook(myBook, totalBCnt); break;
		case 3:rewind(stdin); searchBook(myBook, totalBCnt); break;
		case 4:rewind(stdin); sellBook(myBook, totalBCnt); break;
		case 0:return 0;
		default:puts("원하는 메뉴의 번호를 입력하세요.");
		}
	}
	return 0;
}
