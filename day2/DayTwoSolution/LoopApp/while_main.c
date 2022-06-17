#include <stdio.h>

int main(void) {
	int res = 1;
	int i = 1;

	while (i < 10) {
		res *= i;
		i++;
	}
	printf("%d\n", res);
	return 0;
}