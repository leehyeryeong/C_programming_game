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

	return 0;
}