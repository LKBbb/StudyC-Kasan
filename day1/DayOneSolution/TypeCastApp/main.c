#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void) {
	printf("%lf\n", (10 + 10.5));
	printf("%lf\n", (float)10);
	printf("%d\n", (int)round(10.5));

	int a = 10;
	float fa = 3.4f;
	double da = 3.14;

	printf("int형 변수 크기 : %d, float형 변수 크기 : %d, double형 변수 크기 : %d\n", sizeof(a), sizeof(fa), sizeof(da));

	// 비트 연산자
	int c = 10; // 00000000 00000000 00000000 00001010
	int d = 12; // 00000000 00000000 00000000 00001100

	printf("c & d : %d\n", c & d);
	printf("c | d : %d\n", c | d);
	printf("c ^ d : %d\n", c ^ d);
	printf("~c : %d\n", ~c);
	printf("c << 1 : %d\n", c << 1);
	printf("c >> 2 : %d\n", c >> 2);

}