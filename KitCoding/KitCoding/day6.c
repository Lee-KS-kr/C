#include<stdio.h>
/*
char a[6] = "Hello";
//���ڿ� ����
char c[] = "World"; //indexũ�� ��������
//���ڿ� ǥ�� �Է� scanf()
//�Էµ� ���ڿ��� str(��Ʈ��)�迭�� ����
//���� �Ǵ� ���� ������ �Էµ� ���ڿ��� ����
//�Լ� ���� : int scanf("%s", str); &��ȣ�� �����ʴ´�
*/
/*
int main()
{
	char str[15];
	scanf("%s", str);
}
*/
//gets()
//������ ������ ���ڿ� �Է�. ���� ������
//char*gets(char*str);
//enter�� \0�� ��ȯ�Ͽ� ����
/*���ڿ� ǥ�� ���
printf()
���� ���ڿ�% s�� �̿�
char a[] = "Hello";
printf("%s", a);
���� �迭���� printf�Լ��� ù ��° ���ڷ� ����
char a[] = "Hello";
printf(a);
int puts(const char* str);
str�迭�� ���ڿ��� ǥ�� ��¿� ���
�迭�� \0�� \n�� ��ȯ�Ͽ� ���*/
void main()
{
	char str[15];
	gets(str);
	puts(str);
}