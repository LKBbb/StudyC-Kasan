#include <stdio.h>

int sum(int x, int y);

int main(void) {
	printf("�ջ��ϱ�\n");

	int total = sum(100, 34);
	printf("�հ� : %d\n", total);
}
int sum(int x, int y) {
	return x + y;
}