#pragma warning(disable:4996)
#include <stdio.h>

int main_printfscanf(void)
{
	//������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//�Ǽ��� ������ ���� ����
	//float f = 46.5f;
	//printf("%.2f\n", f); //�Ҽ��� ��°�ڸ������� ǥ���ϴ� �Ǽ�
	//double d = 4.428;
	//printf("%.2lf\n", d);

	//��� ����
	//const int year = 2000; //����� ��.
	//printf("�¾ ���� : %d\n", year);
	//year = 2001; ������ �� ���� ��.

	//printf
	//����
	//int add = 3 + 7; //10
	//printf("3 + 7 = %d\n", add);
	//printf("%d x %d = %d", 30, 79, 30 * 79);

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	//int input;
	//printf("���� �Է��ϼ��� : \n");
	//scanf("%d", &input);
	//printf("�Է°� : %d\n", input);

	//int one, two, three;
	//printf("3���� ������ �Է��ϼ��� : \n");
	//scanf("%d %d %d", &one, &two, &three);
	//printf("�Է°� : %d, %d, %d", one, two, three);
	
	//����(�� ����)�� ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c", c);
	char str[256];
	scanf("%s", str, sizeof(str));
	printf("%s", str);*/

	//������Ʈ
	//�������� �������� ������ �Լ�(���� �ۼ�)
	//�̸�? ����? ������? Ű? ���˸�?

	char name[256];
	int age;
	float weight;
	double height;
	char crime[256];
	printf("�̸�?\n");
	scanf("%s", name, sizeof(name));
	printf("����?\n");
	scanf("%d", &age);
	printf("������?\n");
	scanf("%f", &weight);
	printf("Ű?\n");
	scanf("%lf", &height);
	printf("���� ��?\n");
	scanf("%s", crime, sizeof(crime));

	//���� ���� ���
	printf("\n\n ----- ������ ���� -----\n\n");
	printf(" �̸�	:	%s\n", name);
	printf(" ����	:	%d\n", age);
	printf(" ������	:	%.2f\n", weight);
	printf(" Ű	:	%.1lf\n", height);
	printf(" ���˸�	:	%s\n", crime);
	return 0;
}