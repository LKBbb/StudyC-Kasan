#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	/*char str[80] = "applejam";

	printf("���ʹ��ڿ� : %s\n", str);
	printf("���ڿ� �Է� > ");
	scanf("%s", str);
	printf("�Է� ���ڿ� : %s", str);*/
	char str1[80] = "cat";
	char str2[80];
	char* str3 = "Hello World!";

	printf("%s\n", str3);

	//printf("%s %s\n", str1, str2);
	strcpy(str2, str1);
	printf("%s %s\n", str1, str2);

	printf("���ڿ� �Է� >");
	gets(str2);
	printf("�Է� ���ڿ� >");
	puts(str2);



}