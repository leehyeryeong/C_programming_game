#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("����: %d\n", num);

	int answer = 0;
	int chance = 5;
	
	while (1) {
		printf("���� ��ȸ %d��\n", chance--);
		printf("���ڸ� ���������� (1~100): ");
		scanf("%d", &answer);

		if (answer > num) {
			printf("DOWN\n\n");
		}
		else if (answer < num) {
			printf("UP\n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�!\n\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��߽��ϴ�.");
		}

		if (chance == 0) {
			printf("��� ��ȸ�� �� ����ϼ̽��ϴ�. �����ϼ̽��ϴ�!\n");
			break;
		}
	}

	return 0;
}