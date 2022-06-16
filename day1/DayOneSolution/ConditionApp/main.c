#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	// if문 생략 
	char grade;

	printf("학점을 입력하세요. > ");
	scanf("%c", &grade);

	/*if (grade == 'A') {
		printf("대단하네요!");
	}
	else if (grade == 'B') {
		printf("정말 잘하셨습니다.");
	}
	else if (grade == 'C') {
		printf("잘하셨습니다.");
	}
	else if (grade == 'D') {
		printf("겨우 통과 하셨군요..");
	}
	else {
		printf("다음 학기에 또 봐요~");
	}*/

	switch (grade) {
	case 'A':
		printf("대단하네요!");
		break;

	case 'B':
		printf("정말 잘하셨습니다.");
		break;

	case 'C':
		printf("잘하셨습니다.");
		break;

	case 'D':
		printf("겨우 통과 하셨군요..");
		break;

	case 'F':
		printf("다음 학기에 또 봐요~");
		break;

	default :
		printf("학점을 다시 입력하세요.");
		break;
	}

}
