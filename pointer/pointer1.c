#include <stdio.h>

int main() {
	//[ö��] : 101ȣ
	//[����] : 201ȣ
	//[�μ�] : 301ȣ
	//�� �� �տ� '��ȣ'�� �ɷ� ����

	int cheolsu = 1;	//��ȣ
	int younghee = 2;
	int minsu = 3;

	printf("ö���� �ּ�: %d, ��ȣ: %d\n", &cheolsu, cheolsu);
	printf("����� �ּ�: %d, ��ȣ: %d\n", &younghee, younghee);
	printf("�μ��� �ּ�: %d, ��ȣ: %d\n", &minsu, minsu);

	return 0;
}