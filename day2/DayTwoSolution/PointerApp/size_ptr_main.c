#define _CPR_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch;
	int in;
	double db;

	char* pc;
	pc = &ch;
	int* pi;
	pi = &in;
	double* pd;
	pd = &db;

	printf("�Ϲ� ������ ũ�� ----------------\n");
	printf("sizeof char var %d\n", sizeof(ch));
	printf("sizeof int var %d\n", sizeof(in));
	printf("sizeof double var %d\n", sizeof(db));
	printf("\n");

	printf("������ ������ ũ�� ----------------\n");
	printf("sizeof char pointer var %d\n", sizeof(pc));
	printf("sizeof int pointer var %d\n", sizeof(pi));
	printf("sizeof double pointer var %d\n", sizeof(pd));

	return 0;

}