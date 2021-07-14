#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

//// Palindrome (회문)  판별하기2
/*
#define	ARR_SIZE 	100

enum DIRECTION { ToStart, ToEnd };

int IsPuntuation(const char ch)
{
	int	rV = 0;

	switch (ch)
	{
	case ' ':
	case '?':
	case '!':
	case ',':
	case '.':
		rV = 1;
	}

	return rV;
}

int SkipPunctuation(const char strArr[], int size, int* pIdx, int direction)
{
	switch (direction)
	{
	case ToEnd:
		for (int i = 0; i < size; i++)
			while (IsPuntuation(strArr[*pIdx]))
				(*pIdx)++;
		break;

	case ToStart:
		for (int i = 0; i < size; i++)
			while (IsPuntuation(strArr[*pIdx]))
				(*pIdx)--;
		break;
	}

	return *pIdx;
}

int main()
{
	while (1)
	{
		char strArr[ARR_SIZE] = { 0, };

		// error check
		printf("Input N: ");
		rewind(stdin);  //

		if (scanf("%[^\n]s", strArr) == EOF)
			break;

		if (*strArr == NULL) //
		{
			printf("Something wrong, input again.. \n");

			continue;
		}
		////

		int length = strlen(strArr);
		int	isPalindrome = 1;

		for (int front = 0, back = length - 1; front < back; front++, back--)
		{
			SkipPunctuation(strArr, ARR_SIZE, &front, ToEnd); // == length
			SkipPunctuation(strArr, ARR_SIZE, &back, ToStart); // == length

			if (strArr[front] != strArr[back])
			{
				printf("NOT a palindrome ! \n");
				isPalindrome = 0;

				break;
			}
		}

		if (isPalindrome)
			printf("(%s) is a PALINDROME ! \n", strArr);
	}

	return 0;
}*/

//// Palindrome (회문)  판별하기1
int main()
{
	while (1)
	{
		char strArr[100] = { 0, };

		// error check
		printf("Input N: ");
		rewind(stdin);  //

		if (scanf("%[^\n]s", strArr) == EOF)
			break;

		if (*strArr == NULL) //
		{
			printf("Something wrong, input again.. \n");

			continue;
		}
		////

		int length = strlen(strArr);
		int	isPalindrome = 1;

		for (int i = 0; i < length / 2; i++) // even, odd are all OK. Notice: '<', not '<='
			if (strArr[i] != strArr[length - 1 - i])
			{
				printf("Not a palindrome ! \n");
				isPalindrome = 0;

				break;
			}

		if (isPalindrome)
			printf("%s is a palindrome ! \n", strArr);
	}

	return 0;
}
