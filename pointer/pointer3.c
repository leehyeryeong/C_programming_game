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

	//ù ��° �̼�: ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��
	int* missonman; //������ ����
	missonman = &cheolsu;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ�: %d, ��ȣ: %d\n", missonman, *missonman);

	missonman = &younghee;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ�: %d, ��ȣ: %d\n", missonman, *missonman);

	missonman = &minsu;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ�: %d, ��ȣ: %d\n", missonman, *missonman);

	//�� ��° �̼�: �� ��ȣ�� 3�� ���ض�
	missonman = &cheolsu;
	*missonman = *missonman * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ�: %d, ��ȣ: %d\n", missonman, *missonman);

	missonman = &younghee;
	*missonman = *missonman * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ�: %d, ��ȣ: %d\n", missonman, *missonman);

	missonman = &minsu;
	*missonman = *missonman * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ�: %d, ��ȣ: %d\n", missonman, *missonman);

	//������
	//�̼Ǹ��� �ٲ� ��ȣ���� 2�� ����!
	int* spy = missonman;

	//spy
	//			=> �������� ����Ʈ �ּ�
	//missonman

	printf("\n . . . �����̰� �̼� �����ϴ� �� . . . \n\n");
	spy = &cheolsu;
	*spy = *spy - 2; //ö��
	printf("�����̰� �湮�ϴ� �� �ּ�: %d, ��ȣ: %d\n", spy, *spy);

	spy = &younghee;
	*spy = *spy - 2; //����
	printf("�����̰� �湮�ϴ� �� �ּ�: %d, ��ȣ: %d\n", spy, *spy);

	spy = &minsu;
	*spy = *spy - 2; //�μ�
	printf("�����̰� �湮�ϴ� �� �ּ�: %d, ��ȣ: %d\n", spy, *spy);

	printf("\n . . . ö�� ���� �μ��� ���� ������ �ٲ� ��ȣ�� ���� ���� . . . \n\n");

	printf("ö���� �ּ�: %d, ��ȣ: %d\n", &cheolsu, cheolsu);
	printf("����� �ּ�: %d, ��ȣ: %d\n", &younghee, younghee);
	printf("�μ��� �ּ�: %d, ��ȣ: %d\n", &minsu, minsu);

	//����� �̼Ǹ��� ��� ���� �ּҴ� &missonman���� Ȯ��
	printf("�̼Ǹ��� �ּ�: %d\n", &missonman);
	printf("�������� �ּ�: %d\n", &spy);

	return 0;
}