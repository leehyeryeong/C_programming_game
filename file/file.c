#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��й�ȣ�� �Է� �޾Ƽ�
//�´� ���? ��� �ϱ⸦ �о�ͼ� �����ְ�, ��� �ۼ��ϵ��� �մϴ�.
//Ʋ�� ���? ��� �޽����� ǥ���ϰ� �����մϴ�.

#define MAX 10000

int main() {
	//fgets, fputs Ȱ��
	char line[MAX];		//���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX]; //�ϱ��忡 �Է��� ����
	char password[20];	//��й�ȣ �Է�
	char c;				//��й�ȣ �Է��� �� Ű�� Ȯ�ο�

	printf("'����ϱ�'�� ���� ���� ȯ���մϴ�.\n");
	printf("��й�ȣ�� �Է��ϼ���: ");

	//getchar() / getch()�� ����?
	//getchar(): ���͸� �Է� �޾ƾ� ������ �մϴ�.
	//getch(): Ű �Է� �� �ٷιٷ� ������ �մϴ�.

	int i = 0;

	while (1) {
		c = getch();
		if (c == 13) {
			//Enter -> ��й�ȣ �Է� ����
			password[i] = '\0';
			break;
		}
		else {
			//��й�ȣ �Է� ��
			printf("*");
			password[i] = c;
		}
	}

	return 0;
}