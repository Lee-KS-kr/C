#include "head.h"

int main()
{
	char enter;
	int sel, totalBCnt = 0;
	BOOK* myBook;
	myBook = (BOOK*)calloc(2, sizeof(BOOK));

	while (1)
	{
		puts("\n���ϴ� �޴��� ��ȣ�� �Է��ϼ���.");
		puts("1. ���� �Է�");
		puts("2. ���� ���");
		puts("3. ���� �˻�");
		puts("4. ���� �Ǹ�");
		puts("0. ����");
		scanf("%d", &sel);
		fflush(stdin);

		switch (sel) {
		case 1:rewind(stdin); myBook = inBook(myBook, &totalBCnt); break;
		case 2:rewind(stdin); outBook(myBook, totalBCnt); break;
		case 3:rewind(stdin); searchBook(myBook, totalBCnt); break;
		case 4:rewind(stdin); sellBook(myBook, totalBCnt); break;
		case 0:return 0;
		default:puts("���ϴ� �޴��� ��ȣ�� �Է��ϼ���.");
		}
	}
	return 0;
}
