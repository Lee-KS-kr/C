#pragma warning(disable:4996)
#include<stdio.h>
/*exanple 1. if:input data>0, print Positive
int main()
{
	int inputData;
	printf("* Input Number : ");
	scanf("%d", &inputData);
	if (inputData > 0)
	{
		printf("Positive\n");
	}
	return 0;
}
*/

/*example2. input data is over 300, output 1000, if not, 500
int main()
{
	int weight;
	printf("* ��� ���� : ");
	scanf("%d", &weight);
	if (weight >= 300)
	{
		printf("��� ���� : 1000��");
	}
	else
	{
		printf("��� ���� : 500��");
	}
	return 0;
}
*/

/*example3 : ����� ���Ը� �Է¹޾� 200g���ϴ� 300��, 400g ���ϸ� 500��, 400g �ʰ��� 700������ ����Ͻÿ�
int main()
{
	int weight;
	int price;
	printf("* ��� ���� : ");
	scanf("%d", &weight);
	if (weight <= 200)
	{
		price = 300;
	}
	else if (weight <= 400)
	{
		price = 500;
	}
	else
	{
		price = 700;
	}
	printf("��� ���� : %d��", price);
	return 0;
}
*/

/*if�� ��������
* �ۼ��� 20220113 �ۼ��� �̰漭
* ������ �Է¹޾� �� ������ ���, 0, �������� ����Ͻÿ�
*/
int main()
{
	int inputData;
	scanf("%d", &inputData);
	if (inputData > 0)
	{
		printf("����Դϴ�.\n");
	}
	else if (inputData == 0)
	{
		printf("0�Դϴ�.\n");
	}
	else
	{
		printf("�����Դϴ�.\n");
	}
	return 0;
}