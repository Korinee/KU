#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
//���� ���
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
//�ִ� ã��
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
//�迭���� Ư�� ������ ����
int main(void)
{
	int		arr[20] = { 3, 7, 1, 5, 2, 3, 1, 7, 5, 4, 9, 6, 5, 2, 10, 3, 7, 3, 2, 3 };
	int		i, k, sum = 0;
	printf("ã������ ����? ");
	scanf("%d", &k);
	for (i = 0; i < 20; i++)
	{
		if (arr[i] == k)
			sum++;
	}
	printf("%d�� �迭�� %d�� �ֽ��ϴ�.", k, sum);
	return 0;
}*/
/*
//������׷�
int main(void)
{
	int		arr[20] = { 3, 7, 1, 5, 2, 3, 1, 7, 5, 4, 9, 6, 5, 2, 10, 3, 7, 3, 2, 3 };
	int		i, n, k = 0; //k = ��ȣ, i = �迭�ε���, n = ����
	for (k = 1; k <= 10; k++)
	{
		n = 0;
		for (i = 0; i < 20; i++)
		{
			if (arr[i] == k)
				n++;
		}
		printf("%d: %d��\n", k, n);
	}
	return 0;
}*/
/*
//������׷�2
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int		arr[10000];
	int		i, n, k = 0; //k = ��ȣ, i = �迭�ε���, n = ����
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
		printf("%d: %d��\n", k, n);
	}
	return 0;
}*/
/*
//�л� �� ���� ���� �����
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
		printf("%d�� �л� : ", i);
		for (j = 0; j < 3; j++)
		{
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*
//�л� �� ���� ���
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
		printf("%d�� �л�: ���� = %d\n", i, sum[i]);
	return 0;
}*/
/*
//���� �� ��� ���
int main(void)
{
	int		score[3][4];
	int		i, j; //i = �л�, j = ����
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
		printf("%d�� ����: ��� = %.1f\n", j, avg);
	}
	return 0;
}*/
/*
//�Է� ���� �ܾ��� ���� #include <string.h>
int main(void)
{
	char		str[30];
	scanf("%s", str);
	printf("���ڿ� %s�� ���̴� %d�Դϴ�.", str, strlen(str));
}*/
/*
//�Է� ���� ������ ����
int main(void)
{
	char		str[80];
	fgets(str, 80, stdin);
	printf("�Է��� ������ ���̴� %d�Դϴ�.", strlen(str));
}*/
/*
//���� ���ڿ�
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
//Banner (����)
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
//Banner (3�ڸ� ����)
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
	h = num / 100; //100�� �ڸ� ����
	t = (num % 100) / 10; //10�� �ڸ� ����
	d = num % 10; //1�� �ڸ� ����
	for (i = 0; i < 5; i++)
	{
		printf("%s ", c[h][i]); //100�� �ڸ� ���� ���
		printf("%s ", c[t][i]); //10�� �ڸ� ���� ���
		printf("%s", c[d][i]); //1�� �ڸ� ���� ���
		printf("\n");
	}
}*/