#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main() {
	//���� �����
	//���Ͽ� � �����͸� ����
	//���Ͽ� ����� �����͸� �ҷ�����

	//fputs, fgets
	char line[MAX]; //char line[10000]
	FILE* file = fopen("c:\\test1.txt", "wb");
	if (file == NULL) {
		printf("���� ���� ����!\n");
		return 1;
	}

	fputs("fputs�� �̿��ؼ� ���� ����Կ�\n", file);
	fputs("�� �������� Ȯ�����ּ���\n", file);

	//������ ���� ���� ���� ���� ���¿��� � ���α׷��� ������ �����
	//������ �ս� �߻� ����! �׷��� �׻� ������ �ݾ��ִ� ������ �鿩�ּ���
	fclose(file);

	return 0;
}