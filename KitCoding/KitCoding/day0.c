#include<stdio.h>
/*
int main()
{
	printf("Hello World!\n"); //��� ����
	printf("Good Morning!");
	return 0;
}
*/
/*���� ����ÿ��� ������ ���� �����(_)�� ��밡��
�Ǹ�, ���� ù���ڴ� �����ڿ� ����ٸ� �����ϸ� ���ڷ�
�����ϴ� ������ ����Ұ�. ���� ������ �Ұ���.
ex) osu, _su ����, 1su, osu? �Ұ���.
���� �ʱ�ȭ�� =(���� ������)�� �̿���
int a; a=6; / int b=5; ����...
#define������ ���ǵǴ� ��� 
���� #define ��ũ���̸� ���
#define MAX 100 */
/*
int a;
a = 15;
int main()
{
	printf("%d", a);
	return 0;
}
*/
/*���� �����ڸ� �̿��� ���
%c ���� ��� %d ������ ��� %o 8���� ���
%x, %X %#x 16���� ���, x�� 2a�� ���� �ҹ���, X�� 2A,
#�� 0x2a
%u ��ȣ ���� ������ %e, %E �������� ���(1.23e+05)
%f, %lf �Ǽ��� ���, lf�� long double %s ���ڿ� ���*/
/*������
��������� : +(���ϱ�) -(����) *(���ϱ�) /(������) %(������)
���迬���� : ũ�� �� ���꿡 ����. �񱳰�� ���̸� 1 �����̸� 0
>(ũ��) <(�۴�) >=(ũ�ų� ����) <=(�۰ų� ����) !=(�ٸ���) ==(����)
�������� : �������� �Ǵ��ϴ� ������ AND OR NOT���꿡 ����
&& AND ||OR(����Ʈ+��������) !NOT
���������� : ���� 1��ŭ ���� �Ǵ� ���ҽ�Ű�� ������
���������ڴ� �ݵ�� �������� ���
������ ��ġ�� ���� ��������� �ٸ� (�����ڵ带 Ȯ���ϼ���)
��Ʈ������ : ��Ʈ������ ���꿡 ���Ǵ� ������
& AND !OR ~ NOT ^ XOR(������ 0 �ٸ��� 1)
�̵������� : �̵��� ���ڸ��� 0���� ä����
<< �������� �̵� >> ���������� �̵�
��Ʈ �����̵� : ���� �ǿ�����*2^n ��Ʈ �������̵� : ���� �ǿ�����/2^n
���Կ����� : ������ȣ
���� ������ ������ ���� ����. ������ ������ ����. ���Դ��� �����ڸ� ����� �� ����
*/
/*
int main()
{
	int a = 5, b = 2;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	return 0;
}
*/
/*
int main()
{
	int a = 9, b = 2;
	printf("%d > %d�� ������� %d�Դϴ�.\n", a, b, a > b);
	int c = 6, d = 6;
	printf("%d == %d�� ������� %d�Դϴ�.\n", c, d, c==d);
	return 0;
}
*/
/*
int main()
{
	int a = 5, b;
	printf("a=%d\n", a++);
	b = ++a;
	printf("a=%d b=%d", a, b);
	printf("\n a=%d b=%d", a++, ++b);
	return 0;
}
*/
/*
int main()
{
	int a = 5, b = 2;
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d / %d = %f\n", a, b, (double)a / b);
	printf("%d / %d = %f\n", a, b, (double)(a / b)); 
	printf("%d / %d = %f\n", a, b, a / b); //IDEone���� �������� ��µ�.
	printf("\n\n5 / 2 = %d\n", 5 / 2);
	printf("5 / 2 = %f\n", 5 / 2.0);
	return 0;
}
*/
/*
if�� ������ �Ǵ��Ͽ� ���� ��� ���� ����
if(score<60) //���ǽ�
	printf("���հ��Դϴ�.\n"); //���� ��� ����

int a=5; //���� a�� ����̸� Positive�� ����Ͻÿ�.
if(a>0)
	printf("Positive");

//���� a�� ����̸� a�� 1�� �Ҵ��ϰ� Positive�� ����Ͻÿ�.
int a=5;
if(a>0)
{
	a=1;
	printf("Positive");
}

// if~ else
if(score<60)
	printf("���հ��Դϴ�.\n");
else
	printf("�հ��Դϴ�.\n");

//���� a�� ����̸� Positive �����̸� Negative�� ����Ͻÿ�
int a=5;
if(a>0)
	printf("Positive");
else
	printf("Negative");

//���� a�� Ȧ���̸� Odd��, ¦���̸� Even�� ����Ͻÿ�
int a=5;
if(a%2) //¦���� 1�� ������ �������� 0, Ȧ���� 1. ���ǽĿ��� ���̸� 1 �����̸� 0�̱� ������ ������.
	printf("Odd");
else
	printf("Even");

if~ else if~ else
if(age<19)
	printf("û�ҳ� ����Դϴ�.\n");
else if(age>=65)
	printf("��� ��� ����Դϴ�.\n");
else
	printf("���� ����Դϴ�.\n");

//���� a�� ����̸� Positive, �����̸� Negative, 0�̸� Zero�� ����Ͻÿ�
int a=5;
if(a>0)
	printf("Positive\n");
else if(a<0)
	printf("Negative\n");
else
	printf("Zero");
	
//���� a�� ����ΰ��, 100 �̻��̸� Great, 100�̸��̸� Good, �����̸� Negative, 0�̸� Zero�� ����Ͻÿ�.
int a;
int main()
{
	if (a > 0)
	{
		if (a >= 100)
			printf("Great");
		else
			printf("Good");
	}	
	else if (a = 0)
		printf("Zero");
	else
		printf("Negative");
	return 0;
}
*/
/*
switch�� ������ ����� ��� �����ϸ� ������ ����� �� ����.

switch (��)
{
	case ��1: ����1 - 1; ����1 - 2; break; //���� Ż���ϴ� ��ɾ�
	case ��2: ����2 - 1; ����2 - 2; break;
	default: ����d1; ����d2;
}
*/
/*
int a = 2;
int main()
{
	switch (a)
	{
		case 1: printf("one"); break;
		case 2: printf("two"); break;
		case 3: printf("three"); break;
		default:printf("other");
	}
return 0;
}
*/
/*
char a = 'L';
int main()
{
	switch (a)
	{
	case 'K': printf("Kim"); break;
	case 'L': printf("Lee"); break;
	case 'P': printf("Park"); break;
	default:printf("other");
	}
	return 0;
}
*/
/*���� ���� �ٸ� ���� ��
char grade;
int main()
{
	scanf("%c", &grade);
	if (grade == 'A')
		printf("Excellent");
	else if (grade == 'B')
		printf("Good");
	else if (grade == 'C')
		printf("Normal");
	else
		printf("Fail");
	return 0;
}
*/
/*
int main()
{
	int a, b;
	scanf("%d", &a);
	printf("%d\n", a);
	scanf("%d", &b);
	printf("%d\n", b);
	scanf("%d %d", &a, &b);
	printf("%d %d", a, b);
	return 0;
}
*/
