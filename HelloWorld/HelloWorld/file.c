#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main_file()
{
	//���� �����
	//���Ͽ� �����͸� ����
	//���Ͽ� ����� �����͸� �ҷ�����

	//fputs, fgets ��
	char line[MAX];
	//���Ͽ� ����
	/*FILE* file = fopen("D:\\code workspace\\C\\HelloWorld\\test.txt", "wb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	fputs("fputs�� �̿��ؼ� ���� ���� ���ô�.\n", file);
	fputs("�� �������� Ȯ���� �ּ���.\n", file);
	fclose(file);*/
	//���� �б�
	/*FILE* file = fopen("D:\\code workspace\\C\\HelloWorld\\test.txt", "rb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	
	while (fgets(line, MAX, file) != NULL)
	{
		printf("%s", line);
	}*/

	int num[6] = { 0,0,0,0,0,0 };
	int bonus = 0;
	char str1[MAX];
	char str2[MAX];

	//fprint, fscanf ��
	//���Ͽ� ����
	/*FILE* file = fopen("D:\\code workspace\\C\\HelloWorld\\test2.txt", "wb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}

	fprintf(file, "%s %d %d %d %d %d %d \n", "��÷��ȣ",1,2,3,4,5,6);
	fprintf(file, "%s %d\n", "���ʽ���ȣ", 7);
	fclose(file);*/

	FILE* file = fopen("D:\\code workspace\\C\\HelloWorld\\test2.txt", "rb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}

	fscanf(file, "%s %d %d %d %d %d %d", str1,
		&num[0],&num[1],&num[2],&num[3],&num[4],&num[5]);
	printf("%s %d %d %d %d %d %d\n", str1,
		num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n",str2, bonus);
	fclose(file);

	return 0;
}