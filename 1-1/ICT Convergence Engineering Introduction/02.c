#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int  dan;

	printf("단을 입력하세요: ");
	scanf("%d", &dan);

	
		for (int number = 1; number <= 10; number++)
			printf("%d x %d = %d \n", dan, number, dan * number);

	return 0;
}