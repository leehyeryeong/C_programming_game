#include <stdio.h>

int main() {
	// ASCII �ڵ�? ANSI���� ������ ǥ�� �ڵ� ü��
	// 7bit, �� 128�� �ڵ� (0~127)
	// a: 97 (���� a�� �ƽ�Ű�ڵ� ������)
	// �ҹ��ڴ� 97���� 122���� 1�� ����
	// A: 65
	// �빮�ڴ� 65���� 90���� 1�� ����
	// 0: 48

	printf("%c\n", 'a');
	printf("%d\n", 'a');

	printf("%c\n", 'b');
	printf("%d\n", 'b');

	printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("%c\n", '\0');
	printf("%d\n", '\0');

	printf("%c\n", '0');
	printf("%d\n", '0');

	printf("%c\n", '1');
	printf("%d\n", '1');

	// 0~127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
	for (int i = 0; i < 128; i++) {
		printf("�ƽ�Ű�ڵ� ���� %d: %c\n", i, i);
	}

	return 0;
}