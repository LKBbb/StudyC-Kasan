#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	// if�� ���� 
	char grade;

	printf("������ �Է��ϼ���. > ");
	scanf("%c", &grade);

	/*if (grade == 'A') {
		printf("����ϳ׿�!");
	}
	else if (grade == 'B') {
		printf("���� ���ϼ̽��ϴ�.");
	}
	else if (grade == 'C') {
		printf("���ϼ̽��ϴ�.");
	}
	else if (grade == 'D') {
		printf("�ܿ� ��� �ϼ̱���..");
	}
	else {
		printf("���� �б⿡ �� ����~");
	}*/

	switch (grade) {
	case 'A':
		printf("����ϳ׿�!");
		break;

	case 'B':
		printf("���� ���ϼ̽��ϴ�.");
		break;

	case 'C':
		printf("���ϼ̽��ϴ�.");
		break;

	case 'D':
		printf("�ܿ� ��� �ϼ̱���..");
		break;

	case 'F':
		printf("���� �б⿡ �� ����~");
		break;

	default :
		printf("������ �ٽ� �Է��ϼ���.");
		break;
	}

}
