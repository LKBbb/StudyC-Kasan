#define _CPR_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 10, b = 20;
	const int* pa;

	pa = &a;
	printf("a�� �� %d\n", *pa);

	pa = &b;
	printf("b�� �� %d\n", *pa);

	b = 30;
	printf("b�� �� %d\n", *pa);

	// *pa = 40;  Error! const �����ʹ� ����Ұ�!


	return 0;

}