#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};
int main() {
	//[���� ���]
	//�̸�: ��������
	//�߸ų⵵: 2017��
	//����: 50��
	//���ۻ�: ����ȸ��
	char* name = "��������";
	int year = 2017;
	int price = 50;
	char* company = "����ȸ��";

	//[�Ǵٸ� ���� ���]
	//�̸�: �ʵ�����
	//�߸ų⵵: 2017��
	//����: 100��
	//���ۻ�: �ʵ�ȸ��
	char* name2 = "�ʵ�����";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "�ʵ�ȸ��";

	//����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	//����ü ���
	printf("--- ���� ��� ����---\n");
	printf("���Ӹ� : %s\n", gameInfo1.name);
	printf("�߸ų⵵ : %d\n", gameInfo1.year);
	printf("���� : %d\n", gameInfo1.price);
	printf("���ۻ� : %s\n", gameInfo1.company);

	//����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = { "�ʵ�����", 2017, 100, "�ʵ�ȸ��" };
	printf("\n--- �Ǵٸ� ���� ��� ����---\n");
	printf("���Ӹ� : %s\n", gameInfo2.name);
	printf("�߸ų⵵ : %d\n", gameInfo2.year);
	printf("���� : %d\n", gameInfo2.price);
	printf("���ۻ� : %s\n", gameInfo2.company);

	//����ü �迭
	struct GameInfo gameArray[2] = {
		{"��������", 2017, 50, "����ȸ��"},
		{"�ʵ�����", 2017, 100, "�ʵ�ȸ��"}
	};

	return 0;
}