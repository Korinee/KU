#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main()
{
	char  input;

	printf("첫번째 입력: ");
	scanf(" %c", &input);
	printf("출력: %c \n", input);

	printf("두번째 입력: ");
	rewind(stdin);
	scanf("%c", &input);
	printf("출력: %c \n", input);

	printf("세번째 입력: ");
	rewind(stdin);
	scanf("%c", &input);
	printf("출력: %c \n", input);

	return 0;
}
