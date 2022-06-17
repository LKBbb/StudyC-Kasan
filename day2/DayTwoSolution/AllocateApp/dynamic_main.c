#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("# 메모리가 부족합니다.\n");
		exit(1);
	}
	pd = (double *)malloc(sizeof(double));
	if (pd == NULL) {
		printf("# 메모리가 부족합니다.\n");
		exit(1);
	}
	
	*pi = 10;
	*pd = 3.141592;

	printf("%d\n", *pi);
	printf("%lf\n", *pd);

	free(pi); free(pd); // 동적 메모리 해제 안할 시 재부팅 전까지 영억 사용 불가.
	return 0;

}