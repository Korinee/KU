#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//���� ū ��� ���(for�� break ���)
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
//�Ҽ� �Ǻ� (for�� break ���)
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
		printf("%d�� �Ҽ��Դϴ�.", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.", n);

	return 0;
}*/