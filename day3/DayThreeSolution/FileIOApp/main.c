#include <stdio.h>

int main(void)
{
	FILE* fp;     
	int ch;               

	fp = fopen("C:\\Temp\\a.txt", "r");  
	if (fp == NULL)         
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);        
		if (ch == EOF)       
		{
			break;
		}
		putchar(ch);          
	}
	fclose(fp);               

	return 0;
}