#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

#pragma warning (disable:4146)

int main()
{
	int		num = INT_MIN;
	//0-숫자를 사용하면 오류가 나도 실행이 되버림.
	//-2147483648 == INT_MIN임.. 이 프로그램에서만 사용가능. 쓰기위해서는 #include <limits.h>를 추가로 써줘야함.
	

	for (int i = 32 - 1; i >= 0; i--)
		printf("%d", (num >> i) & 1);

	/*int	dan ;

	while (1)
	{
		printf("단을 입력하세용: ");

		scanf("%d", &dan);

		if (dan == 0)
			break;

		
		for (int num = 1; num <= 9; num++)
			printf("%d * %d = %d \n", dan, num, dan * num);
	}*/
	return 0;
}