#pragma warning (disable:4996)
#include <stdio.h>
#include<time.h>

//����� 6������ �ִ�
//�̵��� ���׿� ��� �縷�� �ִ�
//�縷�� �ʹ� ���� �����ؼ� ���� ���� ���� �����Ѵ�
//���� �� �����ϱ� ���� ���׿� ���� �༭ ����⸦ �츮��!
//������ �ð��� �������� ���� Ŀ����
//�� Ű���� �ȳ�!

void initData();
void printFished();
void decreaseWater(long elapTime);

int level;
int arrayFish[6];
int* cursor;

int main_pointerProject()
{
	long startTime = 0; //���ӽ��۽ð�
	long totalElapTime = 0; //�� ����ð�
	long prevElapTime = 0; //���� ����ð�

	int num; //��� ���׿� ���� �� ������ ����� �Է�
	initData();

	cursor = arrayFish;

	startTime = clock(); //���� �ð��� millisecond�� ��ȯ
	while (1)
	{
		printFished();
		printf("�� �� ���׿� ���� �ֽðھ��? ");
		scanf("%d", &num);

		//�Է°� üũ
		if (num < 1 || num>6)
		{
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		//�� ��� �ð�
		totalElapTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ����ð� : %ld��\n", totalElapTime);

		//������ �� �� �ð�
		prevElapTime = totalElapTime - prevElapTime;
		printf("�ֱ� ��� �ð� : %ld��\n",prevElapTime);

		//������ ���� ����(����)
		decreaseWater(prevElapTime);

		//����ڰ� �Է��� ���׿� ���� �ش�
		//1 ������ ���� 0�̸�? ���� ���� �ʴ´�
		if (cursor[num - 1] <= 0)
		{
			printf("%d�� ������ �̹� �׾����ϴ�. ���� ���� �ʽ��ϴ�.\n", num);
		}
		//2 ������ ���� 0�� �ƴ� ��� ���� �ش� : 100�� ���� �ʴ��� üũ
		else if (cursor[num - 1] + 1 <= 100)
		{
			//���� �ش�
			printf("%d�� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1;
		}

		//�������� �� ���� Ȯ�� (�������� 20�ʸ��� �ѹ��� ����)
		if (totalElapTime / 20 > level - 1)
		{
			level++;
			printf(" ***** LEVEL UP! *****\n");
			printf("\t ���� ���� : %d \n", level);
			if (level == 5)
			{
				printf("\n\n �����մϴ�! �ְ� ������ �޼��Ͽ����ϴ�.\n\n");
				printf("������ �����մϴ�.");
				exit(0);
			}
		}

		//��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			//����Ⱑ ��� �׾���..
			printf("��� ����Ⱑ �׾����ϴ�.\n");
			exit(0);
		}
		else
		{
			//�ּ� �Ѹ��� �̻��� ����Ⱑ �������
			printf("����Ⱑ ���� ����־��!\n");
		}
		prevElapTime = totalElapTime;
	}


	return 0;
}

void initData()
{
	level = 1; //���ӷ��� (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; //������ �� ����
	}
}

void printFished()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n",1,2,3,4,5,6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 2 * (int)elapTime);
		//3�� ���̵� ������ ���� ��
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1;
	}
	return 0;
}

