#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 바이너리 입출력
int main()
{
	int buff[] = { 10, 20, 30, 40, 50 };

	int output[6];
	int size, count;
	FILE* fp;

	fp = fopen("binary.bin", "wb");

	if (fp == NULL) {
		printf("파일열기 실패");
		return 0;
	}

	size = sizeof(int);
	count = sizeof(buff) / sizeof(int);

	fwrite(buff, size, count, fp);

	fclose(fp);

	fp = fopen("binary.bin", "rb");

	if (fp == NULL) {
		printf("파일열기 실패");
		return 0;
	}

	for (int i = 0; i < count; i++) {
		fread(&output[i], size, 1, fp);
		printf("%d", output[i]);
	}

	fclose(fp);

	return 0;
}