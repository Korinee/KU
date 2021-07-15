#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//가장 큰 약수 출력(for와 break 사용)
int main(void)
{
	int		i, n;
	scanf("%d", &n);

	for (i = n / 2; i >= 1; i--)
	{
		if (n % i == 0)
			break;
	}
	printf("%d", i);

	return 0;
}*/
/*
//소수 판별 (for와 break 사용)
int main(void)
{
	int		i, n;
	scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			break;
	}
	if (i == n)
		printf("%d는 소수입니다.", n);
	else
		printf("%d는 소수가 아닙니다.", n);

	return 0;
}*/