#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

//// 수열 1+2!+3!+4!+5!+…N!
/*
int main()
{
	int	N;
	double	sum = 0, result = 1;

	while (1)
	{
		printf("Input N: ");
		if (scanf("%d", &N) == EOF)
			break;

		printf("%d!: ", N); // 수열 출력을 위해

		for (int i = 1; i <= N; i++)
		{
			printf("%d! + ", i); // 수열 출력을 위해

			for (int j = 1; j <= i; j++)
				result *= j;

			sum += result;

			result = 1.;
		}

		printf("\b\b= %.0lf \n", sum); // \b: 수열 출력을 위해 - '+ '를 삭제

		sum = 0.;
	}

	return 0;
}*/

// N! - 반복문 이용
/*
int main()
{
	int	N;
	double	result = 1;

	printf("Input N: ");
	scanf("%d", &N);

	printf("%d!: ", N);

	for (int i = N; i >= 1; i--)
		result *= i;

	printf("%.0lf \n", result);

	return 0;
}*/

// N! - 재귀함수 이용
/*
double	Factorial1(double n)
{
	if (n == 1)
		return 1;
	else
		return n * Factorial1(n - 1);
}

int main()
{
	int	N;
	double	result = 1;

	printf("Input N: ");
	scanf("%d", &N);

	printf("%d!: ", N);

	result = Factorial1(N);

	printf("%.0lf \n", result);

	return 0;
}*/

// N! - 재귀함수 이용 - 팩토리얼 항도 함께 출력
/*
double	Factorial2(double n)
{
	double subTerm = 0.;

	if (n == 1)
	{
		printf("%.0fx", n);
		return 1;
	}

	else
	{
		subTerm = n * Factorial2(n - 1);

		printf("%.0fx", n);	// 출력용
		return subTerm;
	}
}

int main()
{
	int	N;
	double	result = 1;

	printf("Input N: ");
	scanf("%d", &N);

	printf("%d!: ", N);

	result = Factorial2(N);

	printf("\b=%.0lf \n", result);

	return 0;
}*/

//// 이차방정식의 해 구하기
int main()
{
	double		a, b, c, x1, x2;
	double		discriminant;

	printf("Input (a, b, c): ");

	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0)
	{
		x1 = -c / b;
		printf("root: %.2f \n", x1);
	}
	else
	{
		discriminant = b * b - 4 * a * c;

		if (discriminant < 0)
			printf("Imaginary root!\n");

		else if (discriminant == 0)
		{
			x1 = -b / (2. * a);
			printf("root: %.2f \n", x1);
		}

		else
		{
			x1 = (-b + sqrt(discriminant)) / (2. * a);
			x2 = (-b - sqrt(discriminant)) / (2. * a);
			printf("root: %.2f, %.2f \n", x1, x2);
		}
	}

	return 0;
}
