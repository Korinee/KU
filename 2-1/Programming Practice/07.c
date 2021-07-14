#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

//// 정수 N에 가장 가까운 정수
/*
int main()
{
	while (1)
	{
		int num = 0;

		// error check
		printf("Input N: ");
		if (scanf("%d", &num) == EOF)
			break;
		////
		int	numArr[ARR_SIZE] = { 0, };

		GetNums(numArr, ARR_SIZE, MAX_NUM);	// limit num

		printf("Numbers: ");
		PrintArr(numArr, ARR_SIZE); // 생성된 수들을 확인

		printf("Nearest num of %d is %d \n",
			num, GetNearestOf(numArr, ARR_SIZE, num));

		// 정렬한 후 옳은지 여부를 확인
		Sort(numArr, ARR_SIZE);

		printf("Sorted: ");
		PrintArr(numArr, ARR_SIZE);

		printf("----------------------------\n");
	}

	return 0;
}
*/

//// 최고, 최저 점수 및 평균 구하기
/*
int* GetScores(int num)
{
	int* scoreArr = (int*)calloc(num, sizeof(int));

	srand(time(NULL));

	for (int i = 0; i < num; i++)
		scoreArr[i] = rand() % 101; // 0 ~ 100

	return scoreArr;
}

void PrintArr(int arr[], int num)
{
	for (int i = 0; i < num; i++)
		printf("%d ", arr[i]);

	printf("\n");
}

// 주어진 배열에서 count개의 원소들의 합을 반환
double	GetSum(int arr[], int count)
{
	double	sum = 0.;

	for (int i = 0; i < count; i++)
		sum += arr[i];

	return sum;
}

int GetMax(int arr[], int num)
{
	int	Max = arr[0];

	for (int i = 1; i < num; i++)
		if (arr[i] > Max)
			Max = arr[i];

	return Max;
}

int GetMin(int arr[], int num)
{
	int	Min = arr[0];

	for (int i = 1; i < num; i++)
		if (arr[i] < Min)
			Min = arr[i];

	return Min;
}

int GetAverageExceptMaxMin(int arr[], int num)
{
	if (num <= 2) // exception proc
		return -1; // just 2 subjects. we can't calc the ave

	int Sum = GetSum(arr, num);
	Sum -= GetMax(arr, num) + GetMin(arr, num);

	return Sum / (num - 2);	// except max and min subejct
}

int main()
{
	while (1)
	{
		int num = 0;

		// error check
		printf("Input Subject number: ");
		if (scanf("%d", &num) == EOF)
			break;

		if (num < 1)
		{
			printf("Wrong input! \n");
			continue;
		}
		////

		int* scores = GetScores(num);

		PrintArr(scores, num); // just print out the nums

		printf("Max: %d, Min: %d, Ave: %d \n",
			GetMax(scores, num),
			GetMin(scores, num),
			GetAverageExceptMaxMin(scores, num));
		//

		free(scores);
	}

	return 0;
}*/

//// 보수 구하기 ? 방법 2
/*
int main()
{
	int i, j;
	int a[5] = { 0,1,0,1,0 },
		b[5];

	for (i = 4; i >= 0; i--)
	{
		if (a[i] == 1) // 최초의 1
			break;
		b[i] = a[i];
	}

	b[i] = a[i]; // 최초의 1까지는 그대로 옮김

	for (j = i - 1; j >= 0; j--)
		b[j] = 1 - a[j]; // 반전

	for (int k = 0; k < 5; k++)
		printf("%d", a[k]);

	printf(" ");

	for (int k = 0; k < 5; k++)
		printf("%d", b[k]);


	return 0;
}
*/

//// 보수 구하기 ? 방법 1
int main()
{
	int a[5], b1[5], b2[5];
	int i = -1, c = 1;

	// srand(time(NULL));

	do
	{
		i++;
		//a[i] = rand() % 2;
		scanf("%d", &a[i]);
		b1[i] = 1 - a[i];
	} while (i < 4);
	do
	{
		b2[i] = b1[i] + c;
		b2[i] = b2[i] % 2;
		c = b1[i] * c;
		i--;
	} while (i >= 0);
	for (int k = 0; k < 5; k++)
		printf("%d", a[k]);
	printf(" ");
	for (int k = 0; k < 5; k++)
		printf("%d", b1[k]);
	printf(" ");
	for (int k = 0; k < 5; k++)
		printf("%d", b2[k]);

	return 0;
}
