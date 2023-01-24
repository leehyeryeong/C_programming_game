#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

//����Ⱑ 6������ �־��
//�̵��� ���׿� ��� �ִµ�, �縷�̿���
//�縷�� �ʹ� ������, �ʹ� �����ؼ� ���� ���� ���� ������ �ؿ�
//���� �� �����ϱ� ���� �������� ���׿� ���� �༭ ����⸦ ����ּ���~
//������ �ð��� �������� ���� Ŀ����... ���߿���... �ȳ�...

int level;
int arrayFish[6];
int* cursor;

void initDate();
void printFishes();

int main() {
	long startTime = 0; //���� ���� �ð�
	long totalElapsedTime = 0; //�� ��� �ð�
	long prevElapsedTime = 0; //���� ��� �ð�(�ֱٿ� ���� �� �ð� ����)

	int num; //�� �� ���׿� ���� �� ������, ����� �Է�
	initDate();

	cursor = arrayFish; //cursor[0] ... cursor[1] ...

	startTime = clock(); //���� �ð��� millisecond (1000���� 1��) ������ ��ȯ
	while (1) {
		printFishes();
		printf("�� �� ���׿� ���� �ֽðھ��?");
		scanf("%d", &num);

		//�Է°� üũ
		if (num < 1 || num > 6) {
			printf("�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð�: %ld ��\n", totalElapsedTime);

		//���� �� �� �ð�(���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð�: %ld ��\n", prevElapsedTime);
	}

	return 0;
}
void initDate() {
	level = 1; //���� ����(1~5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; //������ �� ����(0~100)
	}
}
void printFishes() {
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��", 1, 2, 3, 4, 5, 6);
	
	for (int i = 0; i < 6; i++) {
		printf(" %3d ", arrayFish[i]);
	}
	printf("\n\n");
}