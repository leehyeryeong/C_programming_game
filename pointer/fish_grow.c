#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

//물고기가 6마리가 있어요
//이들은 어항에 살고 있는데, 사막이에요
//사막이 너무 더워서, 너무 건조해서 물이 아주 빨리 증발을 해요
//물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려주세요~
//물고기는 시간이 지날수록 점점 커져서... 나중에는... 냠냠...

int level;
int arrayFish[6];
int* cursor;

void initDate();
void printFishes();

int main() {
	long startTime = 0; //게임 시작 시간
	long totalElapsedTime = 0; //총 경과 시간
	long prevElapsedTime = 0; //직전 경과 시간(최근에 물을 준 시간 간격)

	int num; //몇 번 어항에 물을 줄 것인지, 사용자 입력
	initDate();

	cursor = arrayFish; //cursor[0] ... cursor[1] ...

	startTime = clock(); //현재 시간을 millisecond (1000분의 1초) 단위로 반환
	while (1) {
		printFishes();
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf("%d", &num);

		//입력값 체크
		if (num < 1 || num > 6) {
			printf("입력값이 잘못되었습니다.\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간: %ld 초\n", totalElapsedTime);

		//직전 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간: %ld 초\n", prevElapsedTime);
	}

	return 0;
}
void initDate() {
	level = 1; //게임 레벨(1~5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; //어항의 물 높이(0~100)
	}
}
void printFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번", 1, 2, 3, 4, 5, 6);
	
	for (int i = 0; i < 6; i++) {
		printf(" %3d ", arrayFish[i]);
	}
	printf("\n\n");
}