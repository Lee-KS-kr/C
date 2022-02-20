#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 10000

//비밀번호를 입력 받음
//맞는 경우 비밀 일기를 읽어와서 보여주고 계속 작성
//틀린 경우 경고 메세지를 표시하고 종료
//fgets와 fputs를 활용


int main()
{
	char line[MAX]; //파일에서 불러온 내용을 저장할 변수
	char contents[MAX]; //일기장에 입력할 내용
	char password[20]; //비밀번호 입력
	char c; //비밀번호 입력할 때 키값 확인용(마스킹)

	printf("비밀일기에 오신 것을 환영합니다\n");
	printf("비밀번호를 입력하세요 : ");
	
	//getchar() 엔터를 입력받아야 동작함
	//getch() 키 입력시 바로 동작
	int i = 0;
	while (1)
	{
		rewind(stdin);
		c = getch();
		if (c == 13) //enter->비밀번호 입력 종료
		{
			password[i] = '\0';
			break;
		}
		else //비밀번호 입력중
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	//비밀번호 : lackshya93
	printf("\n\n === 비밀번호 확인 중... === \n\n");
	if (strcmp(password,"930815") == 0 ) //비밀번호 일치
	{
		printf(" === 비밀번호 확인 완료 ===");
		printf("\n\n === 내용 === \n\n");
		char* fileName = "D:\\code workspace\\C\\HelloWorld.secret.txt";
		FILE* file = fopen(fileName, "a+b");
		//파일이 없으면 생성, 파일이 없으면 뒤에서부터 내용을 추가한다
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}
		printf("\n\n 내용을 계속 작성하세요.\n");
		printf("종료하시려면 exit를 입력하세요.\n");

		while (1)
		{
			scanf("%[^\n]", contents); //세 줄(\n)이 나오기 전까지 읽어들임
			getchar(); //enter 입력을 flush처리

			if (strcmp(contents, "exit") == 0)
			{
				printf("비밀일기 입력을 종료합니다.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); //enter를 위에서 무시 처리 하였으므로 임의로 추가
		}
		fclose(file);
	}
	else //비밀번호 틀린 경우
	{
		printf(" === 비밀번호가 틀렸어요 ===\n\n");
	}
	
	return 0;
}