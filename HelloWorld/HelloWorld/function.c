#include <stdio.h>
#pragma warning(disable:4996)

//����
void func(int num);
void function_without_return();
int function_with_return();
void function_without_parametor();
void function_with_parametor(int num1, int num2, int num3);
int apple(int total, int ate);
//total ������ ate ���� �԰� ���� ���� ��ȯ
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function()
{
	//function
	//����
//	int num;
//	printf("������ �Է��ϼ��� : \n");
//	scanf("%d", &num);
//	func(num);
//	//printf("num�� %d�Դϴ�.\n", num);
//
//	//+3��?
//	num = num + 3;
//	func(num);
//	//printf("num�� %d�Դϴ�.\n", num);
//
//	//-1��?
//	num -= 1;
//	func(num);
//	//printf("num�� %d�Դϴ�.\n", num);
//
//	//*3��?
//	num *= 3;
//	func(num);
//	//printf("num�� %d�Դϴ�.\n", num);
//
//	///6��?
//	num /= 6;
//	func(num);
//	//printf("num�� %d�Դϴ�.\n", num);
	
	//�Լ� ����
	//��ȯ���� ���� �Լ�
	//function_without_return();

	//��ȯ���� �ִ� �Լ�
	/*int ret = function_with_return();
	func(ret);*/

	//�Ķ����(���ް�)�� ���� �Լ�
	//function_without_parametor();

	//���ް��� �ִ� �Լ�
	//function_with_parametor(35, 27, 12);

	//�Ķ���͵� �ް� ��ȯ���� �����ִ� �Լ�
	//int ret = apple(5, 2);
	//func(ret);
	//printf("��� %d�� �߿� %d���� ������ %d���� ���ƿ�.\n", 10, 4, apple(10, 4));

	//���� �Լ�
	/*int num = 2;

	num = add(num, 3);
	func(num);

	num = sub(num, 1);
	func(num);

	num = mul(num, 3);
	func(num);

	num = div(num, 6);
	func(num);*/

	return 0;
}

////����
//���ް� 36 �Լ� : ��+4 ��°� : ?
//��ȯ�� �Լ��̸� (���� ���ް�, ���� ���ް�2, ...)
//{
//	return;
//}
void func(int num)
{
	printf("num�� %d�Դϴ�.\n", num);
}
void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}
int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}
void function_without_parametor()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}
void function_with_parametor(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��Դϴ�.\n");
	printf("���ް� 1 : %d\n", num1);
	printf("���ް� 2 : %d\n", num2);
	printf("���ް� 3 : %d\n", num3);
}
int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}
int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2;
}


