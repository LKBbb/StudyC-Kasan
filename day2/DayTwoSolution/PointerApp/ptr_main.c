#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	/*int a;
	int* pa;

	pa = &a;
	printf("������ �Է��ϼ��� > ");
	scanf("%d", pa);
	printf("�Էµ� ������ %d �Դϴ�.\n", *pa);*/

	int a = 10, b = 15, total;
	double avg;
	const int* pa, * pb;
	int* pt = &total;

	double* pg;
	pg = &avg;

	pa = &a;
	pb = &b;
	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.2lf\n",*pg);



	return 0;

}