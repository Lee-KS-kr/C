#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	FILE* fp;
	fp = fopen("test.txt", "w");

	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.");
		return 0;
	}

	fputc('a', fp);
	for (int i = 0; i < 10; i++) {
		fputc(48 + i, fp);
	}

	fclose(fp);

	fp = fopen("test.txt", "r");
	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.");
		return 0;
	}

	char c = 0;
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);

	return 0;
}