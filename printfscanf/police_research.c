#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������� �������� ������ �Լ� (���� �ۼ�)
	char name[256];
	printf("�̸��� ������? ");
	scanf("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���? ");
	scanf("%d", &age);

	float weight;
	printf("�����Դ� �� kg�̿���? ");
	scanf("%f", &weight);

	double height;
	printf("Ű�� �� cm�̿���? ");
	scanf("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n---������ ����---\n\n");
	printf("�̸� : %s\n", name);
	printf("����: %d\n", age);
	printf("������: %.2fkg\n", weight);
	printf("Ű: %.2lfcm\n", height);
	printf("����: %s\n", what);

	return 0;
}