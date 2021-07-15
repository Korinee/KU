#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int month;

	printf("input your month: ")
		scanf("%d", &month);

	swith(month)
	{
	case3:
	case4:
	case5:
		printf("Spring \n");
	case6:
	case7:
	case8:
		printf("Summer\n");
	case9:
	case10:
	case11:
		printf("Autumn\n");

		default:
			printf("Winter\n");
			break;
	}
}