/*������ �ݺ������� �Է¹޾� �����ϴٰ�
0�� �ԷµǸ� �Է��� �ߴ��ϰ� �� �������� ���*/
#pragma warning(disable:4996)
#include<stdio.h>
/*Ǯ��1 ����ô�� ���α׷� ���
int main()
{
	int indata, sum = 0;
	printf("���ڸ� �Է����ּ���.\n0�� �Է��ϸ� ����˴ϴ�.\n");
	scanf("%d", &indata);
	while (indata != 0)
	{
		sum = sum + indata;
		scanf("%d", &indata);
	}
	printf("%d", sum);
	return 0;
}
*/

/*Ǯ��2
break���� �ִ� �ڵ忡���� �̷� �ڵ嵵 ��밡��
���ɸ鿡�� ū ���̴� ����.
int main()
{
	int indata, sum = 0;
	while (1) //���ǽĿ� ���� �־� ������ ����
	{
		scanf("%d", &indata);
		if (indata == 0) {
			break; //�б⹮. while�� Ż��뵵
		}
		sum += indata; //sum=sum+indata�� ����ǥ��
	} //+= ������ ������
	printf("%d", sum);
	return 0;
}
*/

/*������ ���� �Է� �޾� ������� �� ����ϱ�
��Ȳ�� ���� �ݺ�

int main()
{
	int k, s = 0;
	printf("������ �Է��ϼ���. 0(zero)�� �Է��ϸ� ����˴ϴ� : ");
	scanf("%d", &k);
	while (k != 0)
	{
		printf("���ݱ��� ���� %d�Դϴ�.\n", s += k);
		printf("���� �Է��ϼ���. 0(zero)�� �Է��ϸ� ����˴ϴ� : ");
		scanf("%d", &k);
	}
	return 0;
}
*/

/*������ 2���� ���
int main()
{
	int i = 1; //i=iterator �ݺ���.
	while (i < 10)
	{
		printf("2 * %d = %d\n", i, 2 * i);
		i++; //1 ���� ������. == i=i+1
	}
	return 0;
}
*/

/*10���� 1���� 1�� �����ϸ鼭 ���
�������� �̿��� ��������
int main()
{
	int num = 10;
	while (num)
	{
		printf(" % 5d", num); //filed��. ����� ĭ�� �����ϴ°�.
		num--; //1 ���� ������. == num=num-1
	}
	return 0;
}
*/

