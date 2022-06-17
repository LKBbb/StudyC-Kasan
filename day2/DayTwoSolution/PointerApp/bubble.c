#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

void bubble_sort(int list[], int n);

void bubble_sort(int list[], int n)
{
	int i, j, temp;
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++)
			if (list[j] > list[j + 1])
				SWAP(list[j], list[j + 1], temp);
	}
}
int main(void)
{
	int i, j, l;
	int list[10];
	for (i = 0; i < 10; i++)
	{
		printf("정수 입력 :");
		scanf("%d", &list[i]);
	}
	printf("초기값\n");
	for (l = 0; l < 10; l++)
	{
		printf("%d\t", list[l]);
	}
	printf("\n");
	bubble_sort(list, 10);
	printf("바뀐값\n");
	for (j = 0; j < 10; j++) {
		printf("%d\t", list[j]);
	}
	return 0;
}