#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

#pragma warning (disable:4146)

int main()
{
	int		num = INT_MIN;
	//0-���ڸ� ����ϸ� ������ ���� ������ �ǹ���.
	//-2147483648 == INT_MIN��.. �� ���α׷������� ��밡��. �������ؼ��� #include <limits.h>�� �߰��� �������.
	

	for (int i = 32 - 1; i >= 0; i--)
		printf("%d", (num >> i) & 1);

	/*int	dan ;

	while (1)
	{
		printf("���� �Է��ϼ���: ");

		scanf("%d", &dan);

		if (dan == 0)
			break;

		
		for (int num = 1; num <= 9; num++)
			printf("%d * %d = %d \n", dan, num, dan * num);
	}*/
	return 0;
}