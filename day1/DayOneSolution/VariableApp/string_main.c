// ���ڿ� �н�
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf�� ����� �� ��ó���� 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
	const double tax_rate = 0.12; // ���� �ʱ�ȭ (���, �� ���� �Ұ�)
	char fruit[6] = "���"; // �ѱ��� �ѱ��ڴ� 2Byte

	printf("%s\n", fruit);

	strcpy(fruit, "apple");
	printf("%s\n", fruit);

}