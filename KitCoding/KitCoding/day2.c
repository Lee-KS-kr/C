/*����4
�ۼ��� 20220113 �ۼ��� �̰漭*/
#pragma warning(disable:4996) //scanf���� ���� ����
#include<stdio.h>
#define DAYS 365
int input(void);
void output(int, int);
int calculate(int, int); //�Լ� �����;
int main()
{
	int number; //�Է� ���� ���庯��;
	int result; //����� ���庯��;

	number = input(); //==30
	result = calculate(number, DAYS); //==30, 365, 10950
	output(number, result); //==30, 10950

	return 0;
}
//�� �Ʒ� �Լ� ���Ǻ�;
int input(void) //�������ڰ� ���� ���� void ��������;
{
	int num;
	printf("* ���̸� �Է��ϼ��� : ");
	scanf("%d", &num); //30
	return num; //return==30
}
           //input���� ������ return��, 365
int calculate(int num, int days)
{
	int totalDays;
	totalDays = num * days; //30*365
	return totalDays; //10950
} //return���� �ִ� �Լ��� return�� ���� �Ұ�
               //30, 10950
void output(int num, int tot)
{
	printf("���̴� %d���̰�, ��ƿ� �� �� ���� �� %d�� �Դϴ�.\n", num, tot);
	return;
} //return���� ���� �Լ��� return�� ��������
