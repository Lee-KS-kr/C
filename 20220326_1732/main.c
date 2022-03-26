#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp;
	char file_buff[100];

	// 파일 쓰기
	fp = fopen("test_line.txt", "w");

	if (fp == NULL) {
		printf("파일열기 실패");
		return 0;
	}

	for (int i = 1; i <= 3; i++) {
		printf("파일에 쓸 내용을 입력하세요.(%d번째 라인) : \n", i);
		memset(file_buff, 0, sizeof(file_buff));

		scanf("%s", file_buff);

		file_buff[strlen(file_buff)] = '\n';

		fputs(file_buff, fp);
	}

	fclose(fp);

	// 파일 읽기
	fp = fopen("test_line.txt", "r");

	if (fp == NULL) {
		printf("파일열기 실패");
		return 0;
	}

	while (fgets(file_buff, sizeof(file_buff), fp) != NULL){
		printf("%s", file_buff);
		memset(file_buff, 0, sizeof(file_buff));
	}

	fclose(fp);

	return 0;
}