#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main()
{
	char  input;

	printf("ù��° �Է�: ");
	scanf(" %c", &input);
	printf("���: %c \n", input);

	printf("�ι�° �Է�: ");
	rewind(stdin);
	scanf("%c", &input);
	printf("���: %c \n", input);

	printf("����° �Է�: ");
	rewind(stdin);
	scanf("%c", &input);
	printf("���: %c \n", input);

	return 0;
}
