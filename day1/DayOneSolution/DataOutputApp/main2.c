#include <stdio.h>
int main(void) {
	// escape character ����
	printf("Be Happy!!\n");
	printf("14214121515112414\n");
	printf("My\tfrinds\n");
	printf("goot\bd\tchance\n");
	printf("Cow\rW\a\n");


	// ������ �Ǽ� ȭ�����
	printf("%d\n", 10);
	printf("%lf\n", 3.141592);
	printf("%d\n", 3.141592); // �̻� ���
	printf("%.1lf\n", 3.141592);
	printf("%.10lf\n", 3.141592);

	printf("%d�� %d�� ���� %d �Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	// ���� ǥ�� 
	printf("%d\t", 12);
	printf("%d\t", 014);
	printf("%d\t\n", 0xC);

	// ���� ǥ��
	printf("%.2lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);

	// ���ڿ� ���ڿ� ǥ��
	printf("%c\n", 'A'); // ���� Character
	printf("%s\n", "A"); // ���ڿ� String
	printf("%c�� %s �Դϴ�. \n", '1', "first");


	return 0;
}