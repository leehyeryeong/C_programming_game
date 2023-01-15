#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main() {
	//���� 5���� �ְ�, �� ������ ���� ����� ���� ��� ����(����)
	//������ ���, Ʋ���� ����

	srand(time(NULL));
	int cnt = 0;

	for (int i = 1; i <= 5; i++) {
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf("%d", &answer);

		if (answer == -1) {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else if (answer == num1 * num2) {
			//����
			success();
			cnt++;
		}
		else {
			//����
			fail();
		}
	}

	return 0;
}

int getRandomNumber(int level) {
	return rand() % (level * 7) + 1;
}
void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n######### %d��° ��й�ȣ #########\n", level);
	printf("\n\t%d x %d��?\n\n", num1, num2);
	printf("\n��й�ȣ�� �Է��ϼ��� (����: -1) >> ");
}

void success() {
	printf("\n >> Good! �����Դϴ�!\n");
}
void fail() {
	printf("\n >> ��! Ʋ�Ƚ��ϴ�!\n");
}