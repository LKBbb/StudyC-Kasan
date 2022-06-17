#include <stdio.h>

int sum(int x, int y);

int main(void) {
	printf("합산하기\n");

	int total = sum(100, 34);
	printf("합계 : %d\n", total);
}
int sum(int x, int y) {
	return x + y;
}