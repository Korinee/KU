#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

enum CASES { NORMAL, NEXT, EXIT };

//// 로또 번호 생성 및 내 당첨번호 확인  
/*
int	GetLottoNums(int arr[], int cnt)  // 로또 번호 생성
{
	srand(time(NULL));

	for (int i = 0; i < cnt; i++)
		arr[i] = rand() % 45 + 1; // 1 ~ 45

	return 0;
}

int	GetUserNums(int arr[], int cnt)  // 로또 번호 입력
{
	printf("Input your 6 lotto numbers (1 ~ 45): ");
	for (int i = 0; i < cnt; i++)
		scanf("%d", &arr[i]);

	return 0;
}

int Check(const int lottoArr[], const int userArr[], int cnt)
{
	int	matched = 0;

	printf("Matched nums: ");

	for (int i = 0; i < cnt; i++)
		for (int j = 0; j < cnt; j++)
			if (lottoArr[i] == userArr[j])
			{
				printf("%d ", userArr[j]);
				matched++;
				break;	// 같은 수를 두 개 이상 적는 경우가 있을까?
			}

	printf("-> %d num(s) \n", matched);
}

void	Print(int arr[], int cnt)
{
	for (int i = 0; i < cnt; i++)
		printf("%d ", arr[i]);

	printf("\n");
}

int main()
{
	int	lottoArr[6] = { 0, };
	int	userArr[6] = { 0, };

	GetLottoNums(lottoArr, 6);
	GetUserNums(userArr, 6);

	printf("Lotto nums: ");
	Print(lottoArr, 6);
	Check(lottoArr, userArr, 6);

	return 0;
}*/

//// 로또 번호 생성 및 내 당첨번호 확인  - 무한반복 모듈 추가 버전
/*
int	GetLottoNums(int arr[], int cnt)  // 로또 번호 생성
{
	srand(time(NULL));

	for (int i = 0; i < cnt; i++)
		arr[i] = rand() % 45 + 1;

	return 0;
}

int	GetUserNums(int arr[], int cnt)  // 로또 번호 입력
{
	printf("Input your 6 lotto numbers (1 ~ 45): ");
	for (int i = 0; i < cnt; i++)
		scanf("%d", &arr[i]);

	return 0;
}

int Check(const int lottoArr[], const int userArr[], int cnt)
{
	int	matched = 0;

	printf("Matched nums: ");

	for (int i = 0; i < cnt; i++)
		for (int j = 0; j < cnt; j++)
			if (lottoArr[i] == userArr[j])
			{
				printf("%d ", userArr[j]);
				matched++;
				break;	// 같은 수를 두 개 이상 적는 경우가 있을까?
			}

	printf("-> %d num(s) \n", matched);
}

void	Print(int arr[], int cnt)
{
	for (int i = 0; i < cnt; i++)
		printf("%d ", arr[i]);

	printf("\n");
}

int main()
{
	int	lottoArr[6] = { 0, };
	int	userArr[6] = { 0, };
	int	iter;

	do {
		iter = 0;

		GetLottoNums(lottoArr, 6);
		GetUserNums(userArr, 6);

		printf("Lotto nums: ");
		Print(lottoArr, 6);
		Check(lottoArr, userArr, 6);
	} while (printf("Again? (1: Yes, 0: No)\n") && scanf("%d", &iter) && iter == 1);

	return 0;
}*/

//// 숫자 알아 맞추기 게임
/*
int	ExceptionProc(int rtn, int input)
{
	// 예외 처리
	if (!rtn)
	{
		printf("Wrong input... again. \n");
		rewind(stdin);

		return NEXT;
	}

	if (rtn == EOF)
		return EXIT;

	if (input < 10 || input > 100)
	{
		printf("Wrong input... again. \n");
		return NEXT;
	}

	return NORMAL;
}

int main()
{
	srand(time(NULL));

	int	randNum, input;
	int	rtn;

	while (1)
	{
		randNum = rand() % 91 + 10;  // 10 ~ 100
		printf("* * * Random number generated * * * \n");

		while (1)
		{
			printf("Input number(10 ~ 100): ");

			rtn = scanf("%d", &input);

			//////////////
			switch (ExceptionProc(rtn, input))
			{
			case NEXT:
				continue;
			case EXIT:
				exit(0);
			};
			//////////////

			if (randNum > input)
				printf("Bigger \n");
			else if (randNum < input)
				printf("Smaller \n");
			else if (randNum == input)
			{
				printf("Correct ! \n");
				break;
			}
			else
				printf("Wrong input... again. \n");
		}
	}

	return 0;
}*/

//// 홀짝 게임
int	ExceptionProc(int rtn, int input)
{
	// 예외 처리
	if (!rtn) // 아무런 입력도 받지 못한 경우. 숫자가 아닌 문자를 입력할 경우 발생
	{
		printf("Wrong input... Again \n");
		rewind(stdin); // 입력 버퍼 리셋

		return NEXT;
	}
	else if (rtn == EOF) // 프로그램 종료. ^Z^Z^Z
		return EXIT;

	if (input != 0 && input != 1) // 홀짝(1, 0)이 아닌 다른 수를 입력
	{
		printf("Wrong input... Again \n");
		return NEXT;
	}

	return NORMAL;
}

int main()
{
	srand(time(NULL));

	int	oddEven, ans;
	int	rtn;

	while (1)
	{
		oddEven = rand() % 2;

		printf("Input number(Odd:1, Even: 0): ");

		rtn = scanf("%d", &ans);

		//////////////
		switch (ExceptionProc(rtn, ans))
		{
		case NEXT:
			continue;
		case EXIT:
			exit(0);
		};
		//////////////

		if (ans == oddEven)
			printf("Correct ! \n");
		else
			printf("Wrong ! \n");
	}

	return 0;
}
