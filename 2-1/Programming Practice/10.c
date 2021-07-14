#define _CRT_NO_SECURE_WARNINGS
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <string.h>

#pragma warning(disable: 6031)	// scanf 경고 제거위해

//// 단어(문장) 데이터 정렬(Sorting) 및 확장 응용
/*
#define		MaxWordLen		200
#define		MaxWordsNum		1000 // 사용가능한 스택 용량 제한으로 인해 너무 크게 잡아선 안됨
#define		MaxCharNum		8000 // 사용가능한 스택 용량 제한으로 인해 너무 크게 잡아선 안됨

void SwapStr(char** pStr1, char** pStr2)
{
	int* temp = *pStr1;
	*pStr1 = *pStr2;
	*pStr2 = temp;
}

void PrintArr_Char(char* str[], int num)
{
	for (int i = 0; i < num; i++)
		printf("%s ", str[i]);

	printf("\n");
}

void Malloc_Cpy(char* orgWords[], char* sortedWords[], int wordNum)
{
	int len = 0;

	for (int i = 0; i < wordNum; i++)
	{
		len = strlen(orgWords[i]) + 1; // for '\0'
		sortedWords[i] =
			(char*)malloc(sizeof(char) * len);
		memcpy(sortedWords[i], orgWords[i], len * sizeof(char));
	}
}

// 버블정렬 알고리즘 - 문자열, 오름차순
int BubbleSort_Str(const char* orgWords[], char* sortedWords[], int wordsNum)
{
	for (int i = 0, to = wordsNum - 1; i < wordsNum - 1; i++, to--)
		for (int j = 0; j < to; j++)
			if (strcmp(sortedWords[j], sortedWords[j + 1]) > 0) // 대소문자 구분. 대문자 순서가 빠르게 처리됨. ==> 수정
				SwapStr(&sortedWords[j], &sortedWords[j + 1]);

	return 0;
}

// 텍스트 파일에 문자열 단위로 쓰기 
void Store(char* strArr[], int size, const char* fileName)
{
	FILE* pFile = fopen(fileName, "wt");
	if (pFile == NULL)
	{
		printf("File open error! \n");
		return 1;
	}

	for (int i = 0; i < size; i++)
		fprintf(pFile, "%s ", strArr[i]);

	fclose(pFile);
}

void Free(void** ptr, int size) // void 포인터도 한 번 써보자.
{
	char** ptr2 = (char**)ptr; // 향후, 타입에 따른 다양한 확장을 위해
	for (int i = 0; i < size; i++)
		free(ptr2[i]);
}

// 텍스트 파일 내용을 문자열 단위로 읽어오기
int	Read(char* strArr[], const char* fileName)
{
	FILE* pFile = fopen(fileName, "rt");
	if (pFile == NULL)
	{
		printf("File open error! \n");
		return -1;
	}

	char	oneWord[MaxWordLen] = { 0, }; // 200. 단어 하나의 길이. 넉넉하게
	int		wordIdx = 0;
	while (fscanf(pFile, "%s", oneWord) != EOF)
	{
		strArr[wordIdx] = malloc(strlen(oneWord) * sizeof(char) + 1); // ignore casting

		if (strArr[wordIdx] == NULL)	return -1;

		strcpy(strArr[wordIdx], oneWord);
		wordIdx++;
	}

	fclose(pFile);

	return wordIdx;
}

int main()
{
	char	charArr[MaxCharNum] = { 0, };
	const	char* pDelim = " ,\t.?-&\n"; // Delimiters
	char* pToken = 0, *pNextToken = 0;
	char* wordArr[MaxWordsNum] = { 0, };
	char* pWord = 0;
	int		charCnt, wordCount;

	while (1)
	{
		printf("Input string: ");
		charCnt = 0;

		do {
			if (scanf("%c", &charArr[charCnt]) == EOF)
				break;

			charCnt++;
		} while (1);

		printf("\*Tot char #: %d \n", charCnt); // including '\n'

		charArr[charCnt] = '\0'; // Important! 4 the next iteration: replace '\n' to '\0'

		pToken =
			strtok_s(charArr, pDelim, &pNextToken); // double ptr

		wordCount = 0;
		int i = 0;
		while (pToken != NULL) {
			wordCount++;

			pWord =
				(char*)malloc(sizeof(char) * strlen(pToken) + 1);
			strcpy(pWord, pToken);
			wordArr[i++] = pWord;

			pToken =
				strtok_s(NULL, pDelim, &pNextToken);
		}
		printf("*Word Count: %d \n", wordCount);

		printf("*Token words: \n\t");
		PrintArr_Char(wordArr, wordCount);

		char* sortedWords[MaxWordsNum] = { 0, }; // 일단 충분히 만들어는 놓돼,
		Malloc_Cpy(wordArr, sortedWords, wordCount); // 단어 수 만큼만 처리

		BubbleSort_Str(wordArr, sortedWords, wordCount);

		printf("\n*Sorted words: \n\t");
		PrintArr_Char(sortedWords, wordCount);

		Store(sortedWords, wordCount, "sorted.txt");
		Free(sortedWords, wordCount); // 일단 메모리 해제하고

		int readNum = Read(sortedWords, "sorted.txt"); // 배열 재사용

		printf("\n*Read from file: \n\t");
		PrintArr_Char(sortedWords, readNum);

		Free(wordArr, wordCount);
		Free(sortedWords, wordCount);
	}

	return 0;
}*/

//// 숫자 데이터 정렬(Sorting)
#define ARR_SIZE1	20

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 정수(양수,음수) 난수로 얻어오기
int* GetPositNegatNums(int numArr[], int size, int limit) // -limit ~ limit. 매개변수와 반환값으로 동시에 반환
{
	srand(time(NULL));

	int limit2 = limit * 2 + 1; // 0 ~ limit
	int rNum;

	for (int i = 0; i < size; i++)
	{
		rNum = rand() % limit2;
		numArr[i] = rNum -= limit; // -limit ~ limit
	}

	return numArr;
}

void PrintArr(int arr[], int num)
{
	for (int i = 0; i < num; i++)
		printf("%d ", arr[i]);

	printf("\n");
}

// 버블정렬 알고리즘 - 숫자, 오름차순
int BubbleSort(const int orgNums[], int sortedNums[], int size)
{
	memcpy(sortedNums, orgNums, sizeof(int) * size); // 한번에 많은 양을 빨리 복사 가능

	for (int i = 0, to = size - 1; i < size - 1; i++, to--)
		for (int j = 0; j < to; j++)
			if (sortedNums[j] > sortedNums[j + 1])
				Swap(&sortedNums[j], &sortedNums[j + 1]);

	return 0;
}

// 선택정렬 알고리즘 - 내림차순
int SelectionSort(const int orgNums[], int sortedNums[], int size)
{
	memcpy(sortedNums, orgNums, sizeof(int) * size); // 한번에 많은 양을 빨리 복사 가능

	for (int i = 0; i < size; i++)
		for (int j = i + 1; j <= size; j++)
			if (sortedNums[i] < sortedNums[j])
				Swap(&sortedNums[i], &sortedNums[j]);
	return 0;
}

int main()
{
	int input = 0;

	do {
		int orgNums[ARR_SIZE1] = { 0, },
			sortedNums[ARR_SIZE1] = { 0, };

		GetPositNegatNums(orgNums, ARR_SIZE1, 100);
		printf("\tOriginal nums: \t\t");
		PrintArr(orgNums, ARR_SIZE1);

		BubbleSort(orgNums, sortedNums, ARR_SIZE1);
		printf("\tAfter(Bubble sort): \t");
		PrintArr(sortedNums, ARR_SIZE1);

		///////////////

		SelectionSort(orgNums, sortedNums, ARR_SIZE1);
		printf("\tAfter(Selection sort): \t");
		PrintArr(sortedNums, ARR_SIZE1);

		printf("Again(0: no, others: yes)?: ");
		if (scanf("%d", &input) == EOF || input == 0)
			break;
	} while (1);

	return 0;
}
