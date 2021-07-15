#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
//3개 정수의 합
int		 sum3 (int x, int y, int z)
{
	return	x + y + z;
}

int main(void)
{
	int		s, a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	s = sum3(a, b, c);
	printf("%d", s);
	return 0;
}*/
/*
//최대값
int		max (int x, int y)
{
	int		res;
	if (x > y)
		res = x;
	else
		res = y;
	return res;
}
int main(void)
{
	int		a, b, m;
	scanf("%d %d", &a, &b);
	m = max(a, b);
	printf("%d", m);
	return 0;
}*/
/*
//2개 실수의 합
float		sumf (float x, float y)
{
	return x + y;
}

int main(void)
{
	float		a, b, s;
	scanf("%f %f", &a, &b);
	s = sumf(a, b);
	printf("%.1f", s);
	return 0;
}*/
/*
//원의 면적
float		circle_area(float x)
{
	float		PI = 3.14;
	return	PI * x * x;
}

int main(void)
{
	float		r, c;
	scanf("%f", &r);
	c = circle_area(r);
	printf("%.2f", c);
	return 0;
}*/
/*
//평균 계산
int		a, b, c;
float		avg()
{
	return (a + b + c) / 3.0;
}
int main(void)
{ 
	float		res;
	scanf("%d %d %d", &a, &b, &c);
	res = avg();
	printf("%.1f", res);
	return 0;
}*/
/*
//난수 발생
int		my_rand(int n)
{
	return rand() % n;
}
int main(void)
{
	int		n, i;
	srand(time(NULL));
	scanf("%d", &n);
	for (i = 1; i < 10; i++)
	{
		printf("%d", my_rand(n));
	}
	return 0;
}*/
/*
//주사위 놀이
int		dice()
{
	return rand() % 6 + 1;
}
int main(void)
{
	srand(time(NULL));
	printf("%d", dice());
	return 0;
}*/
/*
//주사위 놀이2
int dice_print()
{
	int		num;
	num = rand() % 6 + 1;
	switch (num)
	{
	case 6:
		printf("* *\n* *\n* *\n");
		break;
	case 5:
		printf("* *\n * \n* *\n");
		break;
	case 4:
		printf("* *\n   \n* *\n");
		break;
	case 3:
		printf("*  \n * \n  *\n");
		break;
	case 2:
		printf("*  \n   \n  *\n");
		break;
	case 1:
		printf("   \n * \n   \n");
		break;
	}
	return num;
}
int main(void)
{
	srand(time(NULL));
	dice_print();
	return 0;
}*/