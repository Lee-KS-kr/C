#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)

int main_condition()
{
	//if (����){���� ��ġ�� ����} else {�̿� ��쿡 ����}
	//������ ź�ٰ� ����, �л� �Ϲ������� ����(�Ϲ��� 20��)
	/*int age = 25;
	if (age >= 20)
	{
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("�л��Դϴ�.\n");
	}*/

	//�ʵ��л�, ���л�, ����л����� ������?
	//8-13, 14-16, 17-19
	/*int age;
	scanf("%d", &age);
	if (age >= 20)
	{
		printf("�����Դϴ�.\n");
	}
	else
	{
		if (age >= 17)
		{
			printf("����л��Դϴ�.\n");
		}
		else
		{
			if (age >= 14)
			{
				printf("���л��Դϴ�.\n");
			}
			else if (age >= 8)
			{
				printf("�ʵ��л��Դϴ�.\n");
			}
			else
			{
				printf("����Դϴ�.\n");
			}
		}
	}*/

	//break�� continue
	//1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������\n");
			break;
		}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	}*/

	//1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	//7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �ϼ���
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue; 
				//�ٷ� ���� �ݺ����� ��
			}
			printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
		}
	}*/

	//&&(and) ||(or)
	/*int a = 10, b = 11, c = 13, d = 13;
	if (a == b && c == d)
	{
		printf("a�� b�� ����, c�� d�� �����ϴ�.");
	}
	else if (a == b || c == d)
	{
		printf("a�� b�� ���ų�, c�� d�� �����ϴ�.");
	}
	else
		printf("���� ���� �ٸ��׿�.\n");*/

	//����������
	/*srand(time(NULL));
	int i = rand() % 3; //0~2 ������ ���ڸ� ��ȯ
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else
		printf("��\n");*/

	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0:printf("����\n"); break;
	case 1:printf("����\n"); break;
	case 2: printf("��\n"); break;
	default: printf("��?��\n"); break;
	}*/
	/*int age;
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	switch (age)
	{
	case 8: case 9: case 10: case 11: case 12:
	case 13: printf("�ʵ��л��Դϴ�.\n"); break;
	case 14: case 15: case 16: printf("���л��Դϴ�.\n"); break;
	case 17: case 18: case 19: printf("����л��Դϴ�.\n"); break;
	default: printf("�Ϲ��Դϴ�.\n"); break;
	}*/
	
	//������Ʈ
	//Up and Down
	srand(time(NULL));
	int ranNum = rand() % 100 + 1;
	//printf("���� : %d", ranNum);
	int answer, chance = 5;
	while (1)
	{
		printf("\n\n���� ��ȸ : %d��\n", chance--);
		printf("���ڸ� ���纸����.(1~100 ����) : ");
		scanf("%d", &answer);

		if (answer > ranNum)
		{
			printf("DOWN ��!\n");
		}
		else if (answer < ranNum)
		{
			printf("UP ��!\n");
		}
		else
		{
			printf("�����Դϴ�!\n");
			break;
		}
		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿�. \n�ƽ��� �����߽��ϴ٤Ф�");
			break;
		}
	}

	return 0;
}
