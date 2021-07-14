#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

enum CASES { NORMAL, NEXT, EXIT };

// 수열 1+2+4+7+11+16 …에서 N번째 항까지 합계
/*
int main()
{
	int	N;
	int	Sum = 0;

	while (1)
	{
		printf("Inut N: ");
		if (scanf("%d", &N) == EOF)
			break;

		for (int idx = 1, interval = 0, num = 1; idx <= N; idx++, interval++)
		{
			num += interval;
			Sum += num;

			// 수열 출력
			(idx == 1) ? printf("%d", num) : printf("%+d", num);
		}

		printf("=%d \n", Sum);

		Sum = 0;  //
	}

	return 0;
}*/

// 수열 1-2+3-4+5-6+7 …에서 N번째 항까지 합계
/*
#define		Prn_with_Sgn(sign, num)	printf("%"#sign"d", num)

int main()
{
	int	N;

	while (1)
	{
		int	sum = 0;

		printf("Inut N: ");
		if (scanf("%d", &N) == EOF)
			break;

		for (int i = 1, sign = 1, num = 1; i <= N; i++, sign *= -1)
		{
			num = i * sign;
			sum += num;

			// 수열 출력
			//(i == 1) ? printf("%d", num) : printf("%+d", num);
			(i == 1) ? Prn_with_Sgn(, num) : Prn_with_Sgn(+, num);
		}

		//합계 출력
		printf("=%d \n", sum);
	}

	return 0;
}*/

// M 이하의 자연수 중 N의 배수의 합계

int main()
{
	int	M, N;
	int	sum = 0;

	while (1)
	{
		printf("Inut M, N (M > N) : ");
		if(scanf("%d %d", &M, &N) == EOF)
			break;

		for (int i = 1; i <= M; i++)
			if (i % N == 0)
				sum += i;

		printf("Sum: %d \n", sum);

		sum = 0;	//
	}

	return 0;
}
