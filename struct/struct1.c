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
	char* name = "�ʵ�����";
	int year = 2017;
	int price = 100;
	char* company = "�ʵ�ȸ��";

	return 0;
}