#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int value = 0;
Start: // ���̺�

	printf("�������� �Է��ϼ���");
	scanf("%d", &value);

	if (value == 0) {
		goto Exit; // ����� �б�
	}
	else if (value == 1) {
		goto Start; // ����� �б�
	}

	printf("value = %d\n", value);

Exit: // ���̺�
	printf("Exit");

	return 0;
}