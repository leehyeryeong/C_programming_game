#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main() {
	//fprintf, fscanf
	//printf("%d %d %s . . .")
	//scanf("%d %d", &num1 . . .);
	int num[6] = { 0, 0, 0, 0, 0, 0 }; //��÷ ��ȣ
	int bonus = 0; //���ʽ� ��ȣ

	char str1[MAX];
	char str2[MAX];
	
	FILE* file = fopen("c:\\test2.txt", "wb");
	if (file == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}

	//�ζ� ��÷ ��ȣ ����
	fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %s\n", "���ʽ���ȣ ", 7);

	fclose(file);

	return 0;
}