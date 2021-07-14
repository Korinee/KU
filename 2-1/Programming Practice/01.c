#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

enum CASES { NORMAL, NEXT, EXIT };

// 자연수 N까지 합계 출력 
/*
int main()
{
	int		sum;
	int		rtV;
	int		N;

	while (1)
	{

		sum = 0;
		N = 0;

		printf("자연수 입력: (0 for exit): ");
		rtV = scanf("%d", &N);

		if (rtV == 0)
		{
			// 자연수가 아닌 문자를 입력할 경우 예외처리
			printf("Wrong input.. Input again.. \n");
			rewind(stdin);
			// 입력 버퍼에서 문자(들)을 없애야 한다.
			// 이전처럼, 단순히 개행문자를 없애는 것이 아님

			continue;
		}

		if (N < 0) // 음수 예외 처리
		{
			printf("Must be a Natural number.. Input again.. \n");
			continue;
		}

		if (N == 0 || rtV == EOF) // 정상적인 입력이면서 입력 값이 정수 0인 경우
			break;

		for (int i = 0; i <= N; i++)
			sum += i;

		printf("Sum: %d \n", sum);
	}

	return 0;
}*/

// 자연수 N까지 합계 출력 - 함수 버전
/*
 int	ProcException(int rtV, int N)
{
	if (rtV == 0)
	{
		// 자연수가 아닌 문자를 입력할 경우 예외처리
		printf("Wrong input.. Input again.. \n");
		rewind(stdin);
		// 입력 버퍼에서 문자(들)을 없애야 한다.
		// 이전처럼, 단순히 개행문자를 없애는 것이 아님

		return NEXT;
	}

	if (N < 0) // 음수 예외 처리
	{
		printf("Must be a Natural number.. Input again.. \n");
		return NEXT;
	}

	if (N == 0 || rtV == EOF) // 정상적인 입력이면서 입력 값이 정수 0인 경우
		return EXIT;

	return NORMAL;
}

int main()
{
	int		sum, rtV, N;

	while (1)
	{
		sum = 0;
		N = 0;

		printf("자연수 입력: (0 for exit): ");
		rtV = scanf("%d", &N);

		int	rtV2 = ProcException(rtV, N);

		switch (rtV2)
		{
		case NEXT:
			continue;
		case EXIT:
			exit(0);
		};

		for (int i = 0; i <= N; i++)
			sum += i;

		printf("Sum: %d \n", sum);
	}

	return 0;
}*/

// 구구단에서 임의의 N 단 구하기
/*
int main()
{
	int	N = 0;

	while (1)
	{
		printf("Input N (0 for stop): ");
		if (scanf("%d", &N) && N == 0)
			break;

		for (int i = 1; i <= 9; i++)
			printf("%d x %d = %d \n", N, i, N * i);
	}

	return 0;
}*/

// 임의의 정수 M ~ N 사이의 수들을 출력 
/*
// 오름차순으로 출력
void PrintAsc(int from, int to)
{
	printf("결과: ");

	for (int i = from; i <= to; i++)
		printf("%d ", i);

	printf("\n");
}

// 내림차순으로 출력
void PrintDes(int from, int to)
{
	printf("결과: ");

	for (int i = from; i >= to; i--)
		printf("%d ", i);

	printf("\n");
}

int main()
{
	int		M, N;
	char		sort;

	while (1)
	{
		printf("두 수와, 정렬 방식을 입력 하시오. (예: 5 10 A): ");
		if (scanf("%d %d %c", &M, &N, &sort) == EOF) // Ctrl + Z 연속 세번
			break;

		if (M >= N)
		{
			if (sort == 'A' || sort == 'a')
				PrintAsc(N, M);
			else if (sort == 'D' || sort == 'd')
				PrintDes(M, N);
			else
				printf("Wrong input..  \n");
		}
		else // N > M
		{
			if (sort == 'A' || sort == 'a')
				PrintAsc(M, N);
			else if (sort == 'D' || sort == 'd')
				PrintDes(N, M);
			else
				printf("Wrong input.. \n");
		}
	}

	return 0;
}*/

// 임의의 정수 M ~ N 사이의 수들을 출력 - 예외처리 일부 추가
/*
int	ProcException(int rtV, int N)
{
	if (rtV == 0)
	{
		// 자연수가 아닌 문자를 입력할 경우 예외처리
		printf("Wrong input.. Input again.. \n");
		rewind(stdin);
		// 입력 버퍼에서 문자(들)을 없애야 한다.
		// 이전처럼, 단순히 개행문자를 없애는 것이 아님

		return NEXT;
	}

	if (N < 0) // 음수 예외 처리
	{
		printf("Must be a Natural number.. Input again.. \n");
		return NEXT;
	}

	if (N == 0 || rtV == EOF) // 정상적인 입력이면서 입력 값이 정수 0인 경우
		return EXIT;

	return NORMAL;
}

// 오름차순으로 출력
void PrintAsc(int from, int to)
{
	printf("결과: ");

	for (int i = from; i <= to; i++)
		printf("%d ", i);

	printf("\n");
}

// 내림차순으로 출력
void PrintDes(int from, int to)
{
	printf("결과: ");

	for (int i = from; i >= to; i--)
		printf("%d ", i);

	printf("\n");
}

int main()
{
	int		M, N, rtV;
	char		sort;

	while (1)
	{
		printf("두 수와, 정렬 방식을 입력 하시오. (예: 5 10 A, EOF for exit): ");
		rtV = scanf("%d %d %c", &M, &N, &sort);

		switch (ProcException(rtV, sort))
		{
		case NEXT:
			continue;
		case EXIT:
			exit(0);
		};

		if (M >= N)
		{
			if (sort == 'A' || sort == 'a')
				PrintAsc(N, M);
			else if (sort == 'D' || sort == 'd')
				PrintDes(M, N);
			else
				printf("Wrong input..  \n");
		}
		else // N > M
		{
			if (sort == 'A' || sort == 'a')
				PrintAsc(M, N);
			else if (sort == 'D' || sort == 'd')
				PrintDes(N, M);
			else
				printf("Wrong input.. \n");
		}
	}

	return 0;
}*/
