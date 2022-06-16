// 문자열 학습
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf등 사용할 때 전처리기 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
	const double tax_rate = 0.12; // 세율 초기화 (상수, 값 변경 불가)
	char fruit[6] = "사과"; // 한글은 한글자당 2Byte

	printf("%s\n", fruit);

	strcpy(fruit, "apple");
	printf("%s\n", fruit);

}