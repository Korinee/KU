#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int  dan;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &dan);

	
		for (int number = 1; number <= 10; number++)
			printf("%d x %d = %d \n", dan, number, dan * number);

	return 0;
}