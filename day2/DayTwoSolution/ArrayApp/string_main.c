#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	/*char str[80] = "applejam";

	printf("최초문자열 : %s\n", str);
	printf("문자열 입력 > ");
	scanf("%s", str);
	printf("입력 문자열 : %s", str);*/
	char str1[80] = "cat";
	char str2[80];
	char* str3 = "Hello World!";

	printf("%s\n", str3);

	//printf("%s %s\n", str1, str2);
	strcpy(str2, str1);
	printf("%s %s\n", str1, str2);

	printf("문자열 입력 >");
	gets(str2);
	printf("입력 문자열 >");
	puts(str2);



}