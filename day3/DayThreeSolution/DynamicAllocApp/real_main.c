#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char** argv) {
	int i;

	for (i = 0; i < argc; i++) {
		//printf("%d번째 인수 %s\n", i, argv[i]);
		if (i == 1) {
			if (strcmp(argv[i],"--version") == 0) {
				printf("DynamicAllocApp version 3.4\n");
			}
			else if (strcmp(argv[i], "--help") == 0) {
				printf("도움말입니다 !! \n");
			}
		}
	}

	system("pause");
}