#include <stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int *ptr);

int main() {
	//배열일 때, arr2 -> 주소
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);
	changeArray(&arr2[0]);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	//scanf에서 &num과 같이 &를 사용하는 이유

	return 0;
}
void swap(int a, int b) {
	printf("(Swap 함수 내)a의 주소: %d\n", &a);
	printf("(Swap 함수 내)b의 주소: %d\n", &b);

	int temp = a;
	a = b;
	b = temp;

	printf("Swap 함수 내 => a: %d, b: %d\n", a, b);
}
void swap_addr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("Swap 함수 내 => a: %d, b: %d\n", a, b);
}
void changeArray(int* ptr) {
	ptr[2] = 50;
}