#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int 	num = -1;
	// 0111111111111111111111111111

	for( int bitShiftRightNum = 32-1; bitShiftRightNum >= 0; bitShiftRightNum-- )
	printf("%d", (num >> bitShiftRightNum ) & 1);


	return 0;
}