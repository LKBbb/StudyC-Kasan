#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int swap(int*, int*);

int main(void) {
	int a = 33, b = 98;
	printf("���� �� > a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("���� �� > a = %d, b = %d\n", a, b);
	return 0;

}
int swap(int *x, int *y) {
	int temp;
	temp = *y;
	*y = *x;
	*x = temp;
}