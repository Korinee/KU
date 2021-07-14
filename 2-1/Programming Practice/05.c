#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

//// 최대공약수(GCM), 최소공배수(LCM)
/*
int GCM(const int a, const int b)
{
	int	gcm = 1;	// not 0
	int	smaller = a > b ? b : a; // select smaller

	for (int i = 1; i <= smaller; i++) // i 초기값 - 0이 아니다.
		if (a % i == 0 && b % i == 0)
			gcm = i;

	// 아래 방법은 어떤가?
	//for (int i = smaller; i >= 1; i--) // 공통 약수중 최대 수를 찾으면 된다.
	//{
	//	if (a % i == 0 && b % i == 0) {
	//		gcm = i;
	//		break;
	//	}
	//}

	return gcm;
}

int LCM(const int a, const int b)
{
	int	bigger = a > b ? a : b; // select bigger 
	int	lcm = bigger;

	for (int i = bigger; ; i++)
		if (i % a == 0 && i % b == 0)
		{
			lcm = i;
			break;
		}

	return lcm;
}

void GCM_LCM(int a, int b, int* pGCM, int* pLCM) // 배열 포인터, 포인터 배열
{
	int bigger, smaller, remainder;

	if (a >= b)
	{
		bigger = a;	smaller = b;
	}
	else
	{
		bigger = b;	smaller = a;
	}

	while (1)
	{
		//quotient = bigger / smaller;
		//remainder = bigger - quotient * smaller;

		remainder = bigger % smaller;

		if (remainder == 0)
		{
			*pGCM = smaller;
			*pLCM = a * b / *pGCM;
			break;
		}

		bigger = smaller;
		smaller = remainder;
	}
}

int main()
{
	int num1, num2;

	while (1)
	{
		printf("Input two nums: ");
		if (scanf("%d %d", &num1, &num2) == EOF)
			break;

		// 함수 2개 버전
		printf("GCM: %d", GCM(num1, num2));
		printf(", LCM: %d \n", LCM(num1, num2));

		// 함수 1개 버전
		int	gcm, lcm;
		GCM_LCM(num1, num2, &gcm, &lcm);
		printf("GCM: %d, LCM: %d \n", gcm, lcm);
	}

	return 0;
}*/

//// 약수 (Divisor) - 함수 없이
/*
int  main()
{
	int	num;

	printf("Input number: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
		if (num % i == 0)
			printf("%d ", i);

	printf("\n");

	return 0;
}*/

//// 약수 (Divisor) - 함수 사용
/*
#define ARR_NUM		100

// 앞 수가 뒷 수의 약수인지 여부
int	IsTheDivisor(int candidateNum, int num)
{
	return !(num % candidateNum);
}

// 앞 수의 약수들을 찾아 돌려줌
int	GetDivisors(int num, int divisors[]) // 배열 크기는 충분히 크다고 가정
{
	for (int i = 1, index = 0; i <= num; i++)
		if (IsTheDivisor(i, num))
			divisors[index++] = i; // 

	return 0; // for the future use
}

// 배열에서 val 값을 처음 만나기 전의 원소들만을 출력 
void PrintArrIfNot(int arr[], int count, int val)
{
	for (int i = 0; (arr[i] != val) && (i < count); i++)
		printf("%d ", arr[i]);

	printf("\n");
}

int  main()
{
	int	num;

	printf("Input number: ");
	scanf("%d", &num);

	int	divisorArr[ARR_NUM] = { 0, }; // 배열 크기는 충분하다고 가정

	GetDivisors(num, divisorArr);
	PrintArrIfNot(divisorArr, ARR_NUM, 0);

	return 0;
}*/

//// 피보나치 수열의 N 번째 항 구하기 - 해당 항만 출력
/*
int  fib1(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fib1(n - 1) + fib1(n - 2);
}

int  main()
{
	int	N;
	printf("Input N (>= 3): ");
	scanf("%d", &N);

	printf("\b\b : %d \n", fib1(N));

	return 0;
}*/

//// 피보나치 수열의 N 번째 항 구하기 - 이전 항도 함께 출력
int  fib2(int n)
{
	static int	numPre = 0, numCur = 0;

	if (n == 1)
	{
		static int printed = 0;

		if (!printed)
		{
			printed = 1;
			printf("%d, ", 1);
		}
		return 1;
	}

	else if (n == 2)
	{
		static int printed = 0;

		if (!printed)
		{
			printed = 1;
			printf("%d, ", 1);
		}
		return 1;
	}

	else
	{
		numCur = fib2(n - 1) + fib2(n - 2);
		if (numCur >= numPre)
		{
			printf("%d, ", numCur);
			numPre = numCur;
		}

		return numCur;
	}
}

int  main()
{
	int	N;
	printf("Input N (>= 3): ");
	scanf("%d", &N);

	printf("\b\b : %d \n", fib2(N));

	return 0;
}
