#include <stdio.h>
int main(void) {
	// escape character 사용법
	printf("Be Happy!!\n");
	printf("14214121515112414\n");
	printf("My\tfrinds\n");
	printf("goot\bd\tchance\n");
	printf("Cow\rW\a\n");


	// 정수와 실수 화면출력
	printf("%d\n", 10);
	printf("%lf\n", 3.141592);
	printf("%d\n", 3.141592); // 이상값 출력
	printf("%.1lf\n", 3.141592);
	printf("%.10lf\n", 3.141592);

	printf("%d와 %d의 합은 %d 입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	// 진수 표현 
	printf("%d\t", 12);
	printf("%d\t", 014);
	printf("%d\t\n", 0xC);

	// 지수 표현
	printf("%.2lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);

	// 문자와 문자열 표현
	printf("%c\n", 'A'); // 문자 Character
	printf("%s\n", "A"); // 문자열 String
	printf("%c는 %s 입니다. \n", '1', "first");


	return 0;
}