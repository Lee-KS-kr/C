#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 10000

//��й�ȣ�� �Է� ����
//�´� ��� ��� �ϱ⸦ �о�ͼ� �����ְ� ��� �ۼ�
//Ʋ�� ��� ��� �޼����� ǥ���ϰ� ����
//fgets�� fputs�� Ȱ��


int main()
{
	char line[MAX]; //���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX]; //�ϱ��忡 �Է��� ����
	char password[20]; //��й�ȣ �Է�
	char c; //��й�ȣ �Է��� �� Ű�� Ȯ�ο�(����ŷ)

	printf("����ϱ⿡ ���� ���� ȯ���մϴ�\n");
	printf("��й�ȣ�� �Է��ϼ��� : ");
	
	//getchar() ���͸� �Է¹޾ƾ� ������
	//getch() Ű �Է½� �ٷ� ����
	int i = 0;
	while (1)
	{
		rewind(stdin);
		c = getch();
		if (c == 13) //enter->��й�ȣ �Է� ����
		{
			password[i] = '\0';
			break;
		}
		else //��й�ȣ �Է���
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	//��й�ȣ : lackshya93
	printf("\n\n === ��й�ȣ Ȯ�� ��... === \n\n");
	if (strcmp(password,"930815") == 0 ) //��й�ȣ ��ġ
	{
		printf(" === ��й�ȣ Ȯ�� �Ϸ� ===");
		printf("\n\n === ���� === \n\n");
		char* fileName = "D:\\code workspace\\C\\HelloWorld.secret.txt";
		FILE* file = fopen(fileName, "a+b");
		//������ ������ ����, ������ ������ �ڿ������� ������ �߰��Ѵ�
		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}
		printf("\n\n ������ ��� �ۼ��ϼ���.\n");
		printf("�����Ͻ÷��� exit�� �Է��ϼ���.\n");

		while (1)
		{
			scanf("%[^\n]", contents); //�� ��(\n)�� ������ ������ �о����
			getchar(); //enter �Է��� flushó��

			if (strcmp(contents, "exit") == 0)
			{
				printf("����ϱ� �Է��� �����մϴ�.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); //enter�� ������ ���� ó�� �Ͽ����Ƿ� ���Ƿ� �߰�
		}
		fclose(file);
	}
	else //��й�ȣ Ʋ�� ���
	{
		printf(" === ��й�ȣ�� Ʋ�Ⱦ�� ===\n\n");
	}
	
	return 0;
}