#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
//성적 평균
int main(void)
{
	int		i, n;
	float		score[100];
	float		sum = 0, avg;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%f", &score[i]);
		sum += score[i];
	}
	avg = sum / n;
	printf("Average = %.1f\n", &avg);
	return 0;
}*/
/*
//최댓값 찾기
int main(void)
{
	int		i, n;
	float		max, score[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%f", &score[i]);
	}
	max = score[0];
	for (i = 1; i < n; i++)
	{
		if (score[i] > max)
			max = score[i];
		else
			max = max;
	}
	printf("Max = %.1f\n", max);
	return 0;
}*/
/*
//배열에서 특정 숫자의 개수
int main(void)
{
	int		arr[20] = { 3, 7, 1, 5, 2, 3, 1, 7, 5, 4, 9, 6, 5, 2, 10, 3, 7, 3, 2, 3 };
	int		i, k, sum = 0;
	printf("찾으려는 숫자? ");
	scanf("%d", &k);
	for (i = 0; i < 20; i++)
	{
		if (arr[i] == k)
			sum++;
	}
	printf("%d는 배열에 %d개 있습니다.", k, sum);
	return 0;
}*/
/*
//히스토그램
int main(void)
{
	int		arr[20] = { 3, 7, 1, 5, 2, 3, 1, 7, 5, 4, 9, 6, 5, 2, 10, 3, 7, 3, 2, 3 };
	int		i, n, k = 0; //k = 번호, i = 배열인덱스, n = 개수
	for (k = 1; k <= 10; k++)
	{
		n = 0;
		for (i = 0; i < 20; i++)
		{
			if (arr[i] == k)
				n++;
		}
		printf("%d: %d개\n", k, n);
	}
	return 0;
}*/
/*
//히스토그램2
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int		arr[10000];
	int		i, n, k = 0; //k = 번호, i = 배열인덱스, n = 개수
	srand(time(NULL));
	for (i = 0; i < 10000; i++)
	{
		arr[i] = rand() % 10 + 1 ;
	}
	for (k = 1; k <= 10; k++)
	{
		n = 0;
		for (i = 0; i < 10000; i++)
		{
			if (arr[i] == k)
				n++;
		}
		printf("%d: %d개\n", k, n);
	}
	return 0;
}*/
/*
//학생 별 과목 점수 입출력
int main(void)
{
	int		score[2][3];
	int		i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		printf("%d번 학생 : ", i);
		for (j = 0; j < 3; j++)
		{
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*
//학생 별 총점 계산
int main(void)
{
	int		score[3][4];
	int		i, j, sum[3];
	for (i = 0; i < 3; i++)
	{
		sum[i] = 0;
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
			sum[i] += score[i][j];
		}
	}
	for (i = 0; i < 3; i++)
		printf("%d번 학생: 총점 = %d\n", i, sum[i]);
	return 0;
}*/
/*
//과목 별 평균 계산
int main(void)
{
	int		score[3][4];
	int		i, j; //i = 학생, j = 과목
	float		sum, avg;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	for (j = 0; j < 4; j++)
	{
		sum = 0;
		for (i = 0; i < 3; i++)
		{
			sum += score[i][j];
		}
		avg = sum / 3;
		printf("%d번 과목: 평균 = %.1f\n", j, avg);
	}
	return 0;
}*/
/*
//입력 받은 단어의 길이 #include <string.h>
int main(void)
{
	char		str[30];
	scanf("%s", str);
	printf("문자열 %s의 길이는 %d입니다.", str, strlen(str));
}*/
/*
//입력 받은 문자의 길이
int main(void)
{
	char		str[80];
	fgets(str, 80, stdin);
	printf("입력한 문자의 길이는 %d입니다.", strlen(str));
}*/
/*
//역순 문자열
int main(void)
{
	char		str[80];
	int		i;
	fgets(str, 80, stdin);
	for (i = strlen(str); i >= 0; i--)
		printf("%c", str[i]);
}*/
/*
//palindrome
int main(void)
{
	int		i, j = 1, leng;
	char		str[80];
	fgets(str, 80, stdin);
	leng = strlen(str);
	for (i = 0; i < leng / 2; i++)
	{
		if (str[i] != str[leng - i - 2])
		{
			j = 0;
			break;
		}
	}
	if (j == 1)
		printf("Yes");
	else
		printf("No");
}*/
/*
//Banner (수자)
int main(void)
{
	char		c[10][5][4] = { { "***", "* *", "* *", "* *", "***" },//0
								 	 { "  *", "  *", "  *", "  *", "  *" },//1
									 { "***", "  *", "***", "*  ", "***" },//2
									 { "***", "  *", "***", "  *", "***" },//3
									 { "* *", "* *", "***", "  *", "  *" },//4
									 { "***", "*  ", "***", "  *", "***" },//5
									 { "***", "*  ", "***", "* *", "***" },//6
									 { "***", "  *", "  *", "  *", "  *" },//7
									 { "***", "* *", "***", "* *", "***" },//8
									 { "***", "* *", "***", "  *", "  *" } };//9
	int		i, num;
	scanf("%d", &num);
	for (i = 0; i < 5; i++)
		printf("%s\n", c[num][i]);
}*/
/*
//Banner (3자리 수자)
int main(void)
{
	char		c[10][5][4] = { { "***", "* *", "* *", "* *", "***" },//0
									 { "  *", "  *", "  *", "  *", "  *" },//1
									 { "***", "  *", "***", "*  ", "***" },//2
									 { "***", "  *", "***", "  *", "***" },//3
									 { "* *", "* *", "***", "  *", "  *" },//4
									 { "***", "*  ", "***", "  *", "***" },//5
									 { "***", "*  ", "***", "* *", "***" },//6
									 { "***", "  *", "  *", "  *", "  *" },//7
									 { "***", "* *", "***", "* *", "***" },//8
									 { "***", "* *", "***", "  *", "  *" } };//9
	int		i, h, t, d, num;
	scanf("%d", &num);
	h = num / 100; //100의 자리 숫자
	t = (num % 100) / 10; //10의 자리 숫자
	d = num % 10; //1의 자리 숫자
	for (i = 0; i < 5; i++)
	{
		printf("%s ", c[h][i]); //100의 자리 숫자 출력
		printf("%s ", c[t][i]); //10의 자리 숫자 출력
		printf("%s", c[d][i]); //1의 자리 숫자 출력
		printf("\n");
	}
}*/