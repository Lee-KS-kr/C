/* �Լ� ������ �ݵ�� �����ݷ����� ������ */
//printf��� �Լ��� ����ϱ� ���ؼ� �� �Լ��� �������� �۾�
/*int main(void)
{
	printf("Be happy\n");
	//\n ������
	printf("My\t freind\a\n");
	printf("Goot\bd bye");
	printf("Cow\rW\a\n");
	return 0; 
	//�����Լ� ������ �ݵ�� ���Ϲ����� ����
}
*/
/* 
int num;
scanf("%d",&num);
num = num*2;
printf("num=%d", num);*/

/* ���� 1 
�ۼ��� : �̰漭 �ۼ��� : 2022019
���α׷��� ��� : C���α׷��� �⺻ ���� �Ұ�*/
/*
#include<stdio.h> //printf�Լ��� ����ΰ� ���ԵǾ� �ִ�
void printNumber(int); //printNumber�Լ��� �����
int main() //main�Լ��� �������ڰ� ����
{ //main�Լ��� int�� ���� �ϳ� return�ϴ� �Լ��̴�
	int num; //��������
	num = 1; //int num = 1;ó�� ���ٷ� �����ִ�
	printNumber(num);
	num = 3;
	printNumber(num);
	//ó������ 1�� �־ ȣ��, �ι�°�� 3�� �־ ȣ��
	return 0; //main�Լ� ���� 
} //printNumber��� ��������� �Լ��� ȣ���
void printNumber(int n)
{
	printf("�������� %d�Դϴ�.\n", n); //printf�Լ��� ȣ���
	return;
} //printNumber�Լ��� ���Ǻ�
*/
/* ����2 
�ۼ��� 20220110 �ۼ��� �̰漭
Escape Sequence�� ����� ���캸�� ����*/
/*
#include <stdio.h>
#include <conio.h> //console input output header
int main()
{
	printf("Hello");
	printf("Hello\t");
	printf("Hello\n"); //getch(); ���α׷��� ��� ���߰� �ϴ� ����̾��µ� visual studio ������������ ���̻� ������ ������...
	printf("Korea\r");	//getch();
	printf("C\n"); //getch();
	printf("King\b\b\b");	//getch();
	printf("ong\n"); //getch();
	printf("12345678123456781234567812345678\n");	//getch();
	printf("1\t123\t12345\t1234567\n");	//getch();
	printf("\\, \", \n"); //getch();
	printf("Boy\n");	//getch();
	printf("\102oy\n");	//getch();
	printf("\x42oy\n");	//getch();
	return 0;
}
*/
