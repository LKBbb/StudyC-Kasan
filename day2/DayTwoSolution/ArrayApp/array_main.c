#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[5] = { 0, };
	int total = 0;
	float avg = 0;
	arr[0] = 90;
	arr[1] = 95;
	arr[2] = 80;
	printf("네번째 학생 점수를 입력하세요 > ");
	scanf("%d", &arr[3]);

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
		total += arr[i];
	}
	avg = total / 5;
	printf("모든 학생의 점수 총합 : %d\n", total);
	printf("모든 학생의 점수 평균 : %lf\n", avg);

	return 0;

}