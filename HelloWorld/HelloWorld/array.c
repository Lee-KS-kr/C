#include <stdio.h>
#pragma warning(disable:4996)

int main_array()
{
	/*int subway1 = 30;
	int subway2 = 40;
	int subway3 = 50;
	��������
	printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway1);
	printf("����ö 2ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway2);
	printf("����ö 3ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway3);
	*/
	
	//�������� ������ �Բ� ���ÿ� ����
	/*int subway[3];
	subway[0] = 30;
	subway[1] = 40;
	subway[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n",i+1, subway[i]);
	}*/
	
	//�� ���� ���
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//�迭 ũ��� �׻� ����� ����
	/*int size = 10;
	int arr[size]; �Ұ�*/

	//�ϳ��� �����صθ� �� ���� ���� ��� 0�� ��
	/*int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	/*int arr[] = { 1,2 };
	float arrf[5] = { 1.0,2.0,3.0 };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arrf[i]);
	}*/

	/*char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));*/

	/*char str[] = "coding";

	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}*/

	/*char kor[] = "���� �ڵ� �Ҽ��־�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/

	/*char carr[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", carr);
	for (int i = 0; i < sizeof(carr); i++)
	{
		printf("%c\n", carr[i]);
	}
	for (int i = 0; i < sizeof(carr); i++)
	{
		printf("%d\n", carr[i]);
	}*/

	//���ڿ� �Է¹ޱ�
	/*char name[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name, sizeof(name));
	printf("%s\n", name);*/

	//���� : ASCII�ڵ�� ANSI���� ������ ǥ�� �ڵ� ü��
	//7bit. �� 128�� �ڵ�(0~127)
	// a=97, A=65, 0=48, \0=0
	/*printf("%c\n", 'a');
	printf("%d\n", 'a');
	printf("%c\n", 'b');
	printf("%d\n", 'b');
	printf("%c\n", 'A');
	printf("%d\n", 'A');*/

	//����2 0~127 ������ ASCII�ڵ� �������� �ش��ϴ� ���� Ȯ��
	/*for (int i = 0; i < 128; i++)
	{
		printf("%d : %c\n", i, i);
	}*/


	return 0;
}