#include <stdio.h>
#include <time.h>

//10������ ���� �ٸ� ����(�� ī�� 2�坼)
//����ڷκ��� 2���� �Է°��� �޾Ƽ� -> ���� ���� ã���� ī�� ������
//��� ���� ���� ã���� ���� ����
//�� ���� Ƚ�� �˷��ֱ�

int arrayAnimal[4][5]; //ī�� ����(20���� ī��)
char* strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();

int main() {
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	return 0;
}
void initAnimalArray() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
		}
	}
}
void initAnimalName() {
	strAnimal[0] = "������";
	strAnimal[1] = "�ϸ�";
	strAnimal[2] = "������";
	strAnimal[3] = "�����";
	strAnimal[4] = "����";

	strAnimal[5] = "�ڳ���";
	strAnimal[6] = "�⸰";
	strAnimal[7] = "��Ÿ";
	strAnimal[8] = "Ÿ��";
	strAnimal[9] = "ȣ����";
}
void shuffleAnimal() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			//���� 7�� 32�ʺ���
		}
	}
}