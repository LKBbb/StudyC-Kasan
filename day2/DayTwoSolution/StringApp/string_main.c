#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {

	char str[80];
	//str = "apple";
	strcpy(str, "apple");
	printf("%s\n", str);

	//str = "안녕하세요 ~ ";
	strcpy(str, "안녕하세요 ~");
	printf("%s\n", str);

	//printf("이름을 입력하세요 > ", str);
	//gets(str);
	//printf("이름은 %s\n", str);

	char str2[20] = "mango tree";
	strncpy(str2, "apple-pie", 6);
	printf("%s\n", str2);

	char str3[80] = "straw";
	strcat(str3, "berry");
	printf("%s\n", str3);
	strncat(str3, "piece", 3);
	printf("%s\n", str3);

	printf("%d\n", strlen(str3));

	char str5[80] = "pear";
	char str6[80] = "peach";
	
	printf("사전에 나중에 나오는 과일 이름 > ");
	if (strcmp(str5, str6) > 0) {
		printf("%s\n", str5);
	}
	else {
		printf("%s\n", str6);
	}
	if (strncmp(str5, str6, 3) > 0) {
		printf("%s\n", str5);
	}
	else {
		printf("%s\n", str6);
	}
	return 0;
}