#include <stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int *ptr);

int main() {
	//�迭�� ��, arr2 -> �ּ�
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);
	changeArray(&arr2[0]);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	//scanf���� &num�� ���� &�� ����ϴ� ����

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
void swap_addr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("Swap �Լ� �� => a: %d, b: %d\n", a, b);
}
void changeArray(int* ptr) {
	ptr[2] = 50;
}