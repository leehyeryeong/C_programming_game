#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main() {
	//���� �����
	//���Ͽ� � �����͸� ����
	//���Ͽ� ����� �����͸� �ҷ�����

	//fputs, fgets
	char line[MAX]; //char line[10000]

	//���Ͽ� ����
	FILE* file = fopen("C:\Users\������\OneDrive\���� ȭ��\test1.txt", "wb");
	if (file == NULL) {
		printf("���� ���� ����!\n");
		return 1;
	}

	fputs("fputs�� �̿��ؼ� ���� ����Կ�\n", file);
	fputs("�� �������� Ȯ�����ּ���\n", file);

	//���� �б�
	/* FILE* file = fopen("C:\\test1.txt", "rb");
	if (file == NULL) {
		printf("���� ���� ����!\n");
		return 1;
	} */

	while (fgets(line, MAX, file) != NULL) {
		printf("%s", line);
	}

	//������ ���� ���� ���� ���� ���¿��� � ���α׷��� ������ �����
	//������ �ս� �߻� ����! �׷��� �׻� ������ �ݾ��ִ� ������ �鿩�ּ���
	fclose(file);

	return 0;
}