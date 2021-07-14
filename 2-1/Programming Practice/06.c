#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

//// 소인수 분해 - 방법 1
/*
main()
{
	while (1)
	{
		int num = 0;

		// error check
		printf("Input your number: ");
		if (scanf("%d", &num) == EOF)
			break;

		if (num < 2)
		{
			printf("Wrong input! \n");
			continue;
		}
		////

		int	mok = num;
		for (int i = 2; i <= mok; i++)
		{
			while (mok % i == 0)
			{
				printf("%d ", i);
				mok /= i;
			}
		}
		printf("\n");
	}
}*/

//// 소인수 분해 - 방법 2
/*
main()
{
	while (1)
	{
		int num = 0;

		// error check
		printf("Input your number: ");
		if (scanf("%d", &num) == EOF)
			break;

		if (num < 2)
		{
			printf("Wrong input! \n");
			continue;
		}
		////

		int	mok = num;
		for (int i = 2; i <= (int)sqrt(mok); i++)
		{
			while (mok % i == 0)
			{
				printf("%d ", i);
				mok /= i;
			}
		}

		if (mok > 1)
			printf("%d", mok);

		printf("\n");
	}
}*/

//// N 이하 소수의 개수 및 합계 구하기
/*
#define ARR_NUM		100

// 앞 수가 뒷 수의 약수인지 여부
int	IsTheDivisor(int candidateNum, int num)
{
	return !(num % candidateNum);
}

// 주어진 수가 약수인지 여부 - 비교 회수를 줄인 버전
int IsPrimeNum2(const int num) // excluding 1 and N
{
	int	yes = 1;

	for (int i = 2; i < num; i++) //
		if (IsTheDivisor(i, num))
		{
			yes = 0;
			break;
		}

	return yes;
}

// 앞 수보다 작거나 같은 소수들을 찾아 돌려줌
int GetPrimeNums(int num, int primeNums[])
{
	int	count = 0;

	for (int i = 2; i <= num; i++)
		if (IsPrimeNum2(i))
			primeNums[count++] = i; // 소수인 경우만 증가

	return count; // for the future use
}

// 주어진 배열에서 count개의 원소들의 합을 반환
double	GetSum(int arr[], int count)
{
	double	sum = 0.;

	for (int i = 0; i < count; i++)
		sum += arr[i];

	return sum;
}

// 배열에서 val 값을 처음 만나기 전의 원소들만을 출력 
void PrintArrIfNot(int arr[], int count, int val)
{
	for (int i = 0; (arr[i] != val) && (i < count); i++)
		printf("%d ", arr[i]);

	printf("\n");
}

int main()
{
	while (1)
	{
		int num = 0;

		// error check
		printf("Input your number(>1): ");
		if (scanf("%d", &num) == EOF)
			break;
		if (num < 2)
		{
			printf("Wrong input! \n");
			continue;
		}
		////
		int	primeNums[ARR_NUM] = { 0, }; // 배열 크기는 충분하다고 가정
		int	count = 0;

		printf("Count: %d, Sum: %.0lf \n",
			count = GetPrimeNums(num, primeNums),
			GetSum(primeNums, count));

		printf("Prime nums: ");
		PrintArrIfNot(primeNums, ARR_NUM, 0);
	}

	return 0;
}*/

//// 소수 (Prime number) 판별
// 앞 수가 뒷 수의 약수인지 여부
int	IsTheDivisor(int candidateNum, int num)
{
	return !(num % candidateNum);  // 2보다 크면 소수가 아님
}

// 주어진 수가 소수인지 여부
int IsPrimeNum1(const int num) // including 1 and N
{
	int	yes = 1;

	for (int divisorNum = 0, i = 1; i <= num; i++) //
		if (IsTheDivisor(i, num))
			if (++divisorNum > 2)
			{
				yes = 0;
				break;
			}

	return yes;
}

// 주어진 수가 약수인지 여부 - 비교 회수를 줄인 버전
int IsPrimeNum2(const int num) // excluding 1 and N
{
	int	yes = 1;

	for (int i = 2; i < num; i++) //
		if (IsTheDivisor(i, num))
		{
			yes = 0;
			break;
		}

	return yes;
}

int main()
{
	while (1)
	{
		int num = 0;

		// error check
		printf("Input your number(>1): ");
		if (scanf("%d", &num) == EOF)
			break;
		if (num < 2)
		{
			printf("Wrong input! \n");
			continue;
		}

		(IsPrimeNum1(num)) ? printf("A prime number! \n") : printf("Not a prime number! \n");
		(IsPrimeNum2(num)) ? printf("A prime number! \n") : printf("Not a prime number! \n");
	}

	return 0;
}
