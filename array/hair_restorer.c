#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");

	int answer;	//����� �Է°�
	int treatment = rand() % 4;	//�߸��� ���� (0~3)

	int cntShowBottle = 0;	//�̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0;	//�� ���ӿ� ������ �� ����
	//���� �����ִ� �� ������ �ٸ��� �Ͽ� ����� ��� (ó���� 2�� -> ������ 3��)

	//3���� ��ȸ (3���� �߸��� ���� �õ�)
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, 0, 0, 0 };	//4���� ��
		do {
			cntShowBottle = rand() % 2 + 2;	//������ �� ����(0~1, +2 -> 2, 3)

		} while (cntShowBottle == prevCntShowBottle);
	}

	return 0;
}