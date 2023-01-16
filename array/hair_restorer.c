#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	printf("\n\n === 아빠는 대머리 게임 === \n\n");

	int answer;	//사용자 입력값
	int treatment = rand() % 4;	//발모제 선택 (0~3)

	int cntShowBottle = 0;	//이번 게임에 보여줄 병 개수
	int prevCntShowBottle = 0;	//앞 게임에 보여준 병 개수
	//서로 보여주는 병 개수를 다르게 하여 정답률 향상 (처음에 2개 -> 다음에 3개)

	//3번의 기회 (3번의 발모제 투여 시도)
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, 0, 0, 0 };	//4개의 병
		do {
			cntShowBottle = rand() % 2 + 2;	//보여줄 병 개수(0~1, +2 -> 2, 3)

		} while (cntShowBottle == prevCntShowBottle);
	}

	return 0;
}