#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//int a = 9990;
	//double b = 3.14;
	//char c = 'a';

	//printf("int형 변수 주소 : %p\n", &a);
	//printf("double형 변수 주소 : %p\n", &b);
	//printf("char형 변수 주소 : %p\n", &c);

	int a;
	int* pa;
	
	pa = &a; // 변수 a의 주소를 포인터변수에 할당
	*pa = 10;

	printf("포인터로 a값을 출력 > %d\n", *pa);
	printf("변수명으로 a값을 출력 > %d\n", a);

	


	return 0;
}