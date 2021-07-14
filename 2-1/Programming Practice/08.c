#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

//// 정수의 이진 비트 스트림 구하기2
/*
int main()
{
	while (1)
	{
		int num;

		// error check
		printf("Input a number (+, -): ");
		if (scanf("%d", &num) == EOF)
			break;
		////

		for (int i = 31; i >= 0; i--)
		{
			if ((num & ((int)pow(2, i))) == 0) // why casting? => pow 함수 reference 찾아보기
				printf("0"); // 위 비트 & 결과를 그대로 출력하면?
			else
				printf("1");

			if (i % 4 == 0) // just for nice printing out
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}*/

//// 정수의 이진 비트 스트림 구하기1
/*
int main()
{
	while (1)
	{
		int num;

		// error check
		printf("Input a number (+, -): ");
		if (scanf("%d", &num) == EOF)
			break;
		////

		for (int i = 31, j = 1; i >= 0; i--, j++)
		{
			printf("%d", (num >> i) & 1);

			if (j % 4 == 0) // just for print a blank
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}*/

//// 10진수를 16진수로 변환
/*
int main()
{
	while (1)
	{
		int b, bb, c, mok, nmg, k;
		int a[10] = { 0, };

		// error check
		printf("Input N: ");
		if (scanf("%d", &b) == EOF)
			break;

		if (b > 1024 - 1)
		{
			printf("Wrong number. 0 ~ 1023\n");
			continue;
		}
		////

		c = -1;

		do
		{
			c++;
			mok = b / 16; // 16진수
			nmg = b - mok * 16; // 16진수
			a[c] = nmg; // 작은 첨자위치에서부터 이진수 저장
			b = mok;
		} while (mok != 0);

		for (int i = c, num; i >= 0; i--) // 큰 첨자에서부터 출력
		{
			num = a[i];
			if (num >= 10 && num <= 15)
				printf("%c", num + 55); // 문자 'A'의 아스키 값 => 65
			else
				printf("%d", num);
		}

		printf("\n");
	}

	return 0;
}*/

//// 10진수를 2진수로 변환2
/*
int main()
{
	while (1)
	{
		int b, bb, c, mok, nmg, k, i;
		int a[10] = { 0, };

		// error check
		printf("Input N: ");
		if (scanf("%d", &b) == EOF)
			break;

		if (b > 1024 - 1)
		{
			printf("Wrong number. 0 ~ 1023\n");
			continue;
		}
		////

		//bb = b;
		c = -1;

		do
		{
			c++;
			mok = b / 2;
			nmg = b - mok * 2;
			a[9 - c] = nmg; // 큰 첨자위치에서부터 이진수 저장
			b = mok;
		} while (mok != 0);

		//printf("%d ", bb);

		k = 9 - c;	// c가 9가 아닐 수 있음
		for (i = k; i < 10; i++)	// k는 배열의 첫 첨자가 아닐 수 있음
									// 작은 첨자에서부터 출력.
			printf("%d", a[i]);

		printf("\n");
	}

	return 0;
}*/

//// 10진수를 2진수로 변환1
int main()
{
	while (1)
	{
		int b, bb, c, mok, nmg, k, i;
		int a[10] = { 0, };

		// error check
		printf("Input N: ");
		if (scanf("%d", &b) == EOF)
			break;

		if (b > 1024 - 1)
		{
			printf("Wrong number. 0 ~ 1023\n");
			continue;
		}
		////

		//bb = b;
		c = -1;

		do
		{
			c++;
			mok = b / 2;
			nmg = b - mok * 2;

			a[c] = nmg; // 작은 첨자위치에서부터 이진수 저장
			b = mok;
		} while (mok != 0);

		//printf("%d ", bb);

		for (i = c; i >= 0; i--)	// 큰 첨자에서부터 출력.
									// c는 배열의 마지막 첨자가 아닐 수 있음
			printf("%d", a[i]);

		printf("\n");
	}

	return 0;
}
