#include <stdio.h>

void p(int num);

int main() {
	int num = 2;
	//printf("num�� %d�Դϴ�.\n", num);	//2
	p(num);

	//2 + 3 ��?
	num = num + 3;
	//printf("num�� %d�Դϴ�.\n", num);	//5
	p(num);

	//5 - 1 ��?
	num -= 1;
	//printf("num�� %d�Դϴ�.\n", num);	//4
	p(num);

	//4 x 3 ��?
	num *= 3;
	//printf("num�� %d�Դϴ�.\n", num);	//12
	p(num);

	//12 / 6 ��?
	num /= 6;
	//printf("num�� %d�Դϴ�.\n", num);	//2
	p(num);

	return 0;
}

//����
void p(int num) {
	printf("num�� %d�Դϴ�.\n", num);
}