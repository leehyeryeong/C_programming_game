#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main() {
	//fprintf, fscanf
	//printf("%d %d %s . . .")
	//scanf("%d %d", &num1 . . .);
	int num[6] = { 0, 0, 0, 0, 0, 0 }; //추첨 번호
	int bonus = 0; //보너스 번호

	char str1[MAX];
	char str2[MAX];
	
	FILE* file = fopen("c:\\test2.txt", "wb");
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}

	//로또 추첨 번호 저장
	fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호 ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %s\n", "보너스번호 ", 7);

	fclose(file);

	return 0;
}