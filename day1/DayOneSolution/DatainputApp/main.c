#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	/*int a;
	int res;
	printf("정수를 입력하세요. > ");
	res = scanf("%d", &a);
	printf("입력하신 정수는 %d 입니다.\n", a);

	int age;
	double height;

	printf("나이와 키를 입력하세요. > ");
	res = scanf("%d %lf", &age, &height);
	printf("나이 : %d살, 키 : %.1lfcm 입니다.\n",age, height);

	return 0; */
	char grade;
	char name[20];

	printf("학점 입력 > ");
	scanf("%c", &grade);
	printf("이름 입력 > ");
	scanf("%s", name);
	printf("%s의 학점은 %c 입니다.", name, grade);

}
