#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	/*int a;
	int res;
	printf("������ �Է��ϼ���. > ");
	res = scanf("%d", &a);
	printf("�Է��Ͻ� ������ %d �Դϴ�.\n", a);

	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ���. > ");
	res = scanf("%d %lf", &age, &height);
	printf("���� : %d��, Ű : %.1lfcm �Դϴ�.\n",age, height);

	return 0; */
	char grade;
	char name[20];

	printf("���� �Է� > ");
	scanf("%c", &grade);
	printf("�̸� �Է� > ");
	scanf("%s", name);
	printf("%s�� ������ %c �Դϴ�.", name, grade);

}
