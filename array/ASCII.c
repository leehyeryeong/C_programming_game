#include <stdio.h>

int main() {
	// ASCII 코드? ANSI에서 제시한 표준 코드 체계
	// 7bit, 총 128개 코드 (0~127)
	// a: 97 (문자 a의 아스키코드 정수값)
	// 소문자는 97부터 122까지 1씩 증가
	// A: 65
	// 대문자는 65부터 90까지 1씩 증가
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

	// 0~127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++) {
		printf("아스키코드 정수 %d: %c\n", i, i);
	}

	return 0;
}