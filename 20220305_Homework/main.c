#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// ����
	// top (0, 0) bottom (10, 10)�� ���� �ȿ� ������ �� (x, y)�� ���ԵǴ���
	// Ȯ���� �� �ִ� ������ �ۼ��Ͻÿ�
	float topX = 0.0f;
	float topY = 0.0f; // top�� ��ǥ
	float bottomX = 10.0f;
	float bottomY = 10.0f; // bottom�� ��ǥ
	float randomX, randomY; // �Է¹��� ��ǥ

	printf("Ȯ���� ������ ��ġ�� �Է��ϼ���.\n");
	printf("x : ");
	scanf("%f", &randomX);
	printf("y : ");
	scanf("%f", &randomY); // ��ǥ�� �Է¹���

	char resultX = ((topX <= randomX) && (randomX <= bottomX)) ? 'Y' : 'N';
	char resultY = ((topY <= randomY) && (randomY <= bottomY)) ? 'Y' : 'N'; // ��ġ�� ���ο� �ִ��� Ȯ��
	char result = (resultX == 'Y' && resultY == 'Y') ? 'Y' : 'N'; // x��ǥ y��ǥ ��� Y���� ���ο� ����
	printf("\n\n�Է��� ���� �ڽ� ���ο� �ִ°�? : %c\n", result); // ����� ���

	return 0;
}