#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자: %d\n", num);

	int answer = 0;
	int chance = 5;
	
	while (1) {
		printf("남은 기회 %d번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100): ");
		scanf("%d", &answer);

		if (answer > num) {
			printf("DOWN\n\n");
		}
		else if (answer < num) {
			printf("UP\n\n");
		}
		else if (answer == num) {
			printf("정답입니다!\n\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생했습니다.");
		}

		if (chance == 0) {
			printf("모든 기회를 다 사용하셨습니다. 실패하셨습니다!\n");
			break;
		}
	}

	return 0;
}