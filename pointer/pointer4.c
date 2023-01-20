#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);

int main() {
	//SWAP
	int a = 10;
	int b = 20;
	printf("a�� �ּ�: %d\n", &a);
	printf("b�� �ּ�: %d\n", &b);

	//a�� b�� ���� �ٲ۴�.
	printf("Swap �Լ� �� => a: %d, b: %d\n", a, b);
	swap(a, b);
	printf("Swap �Լ� �� => a: %d, b: %d\n", a, b);

	//���� ���� ���� (Call by Value) -> ���� �����Ѵٴ� �ǹ�

	//�ּҰ��� �ѱ��? �޸� ������ �ִ� �ּҰ� ��ü�� �ѱ��... ö����ó��
	printf("(�ּҰ� ����)Swap �Լ� �� => a: %d, b: %d\n", a, b);
	swap_addr(&a, &b);
	printf("(�ּҰ� ����)Swap �Լ� �� => a: %d, b: %d\n", a, b);

	return 0;
}
void swap(int a, int b) {
	printf("(Swap �Լ� ��)a�� �ּ�: %d\n", &a);
	printf("(Swap �Լ� ��)b�� �ּ�: %d\n", &b);

	int temp = a;
	a = b;
	b = temp;

	printf("Swap �Լ� �� => a: %d, b: %d\n", a, b);
}
void swap_addr(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("Swap �Լ� �� => a: %d, b: %d\n", a, b);
}