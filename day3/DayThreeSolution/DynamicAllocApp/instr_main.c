#include<stdio.h>
#include<stdlib.h>
int main(void) {
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("문자열을 입력하세요 > ");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++) {
		printf("입력한 문자열 > %s\n", str[i]);
	}

	for (i = 0; i < 3; i++) {
		free(str[i]);
	}

	return 0;

}