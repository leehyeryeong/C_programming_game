#include <stdio.h>

int main() {
	//[철수] : 101호
	//[영희] : 201호
	//[민수] : 301호
	//각 문 앞에 '암호'가 걸려 있음

	int cheolsu = 1;	//암호
	int younghee = 2;
	int minsu = 3;

	printf("철수네 주소: %d, 암호: %d\n", &cheolsu, cheolsu);
	printf("영희네 주소: %d, 암호: %d\n", &younghee, younghee);
	printf("민수네 주소: %d, 암호: %d\n", &minsu, minsu);

	//첫 번째 미션: 아파트의 각 집에 방문하여 문에 적힌 암호 확인
	int* missonman; //포인터 변수
	missonman = &cheolsu;
	printf("미션맨이 방문하는 곳 주소: %d, 암호: %d\n", missonman, *missonman);
	
	missonman = &younghee;
	printf("미션맨이 방문하는 곳 주소: %d, 암호: %d\n", missonman, *missonman);

	missonman = &minsu;
	printf("미션맨이 방문하는 곳 주소: %d, 암호: %d\n", missonman, *missonman);

	//두 번째 미션: 각 암호에 3을 곱해라
	missonman = &cheolsu;
	*missonman = *missonman * 3;
	printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호: %d\n", missonman, *missonman);

	missonman = &younghee;
	*missonman = *missonman * 3;
	printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호: %d\n", missonman, *missonman);

	missonman = &minsu;
	*missonman = *missonman * 3;
	printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호: %d\n", missonman, *missonman);

	return 0;
}