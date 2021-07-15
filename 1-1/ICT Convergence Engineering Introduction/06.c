#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#pragma    warning (disable: 4146)
int main()
{
    while (1)
    {
        int        choice;
        printf("선택(0: 종료, 1: 구구단, 2: 정수 비트 출력, 3: 실수 비트 출력): ");
        scanf("%d", &choice);
        if (choice == 0)
            break;
        else if (choice == 1)
            goto Gugudan;
        else if (choice == 2)
            goto MyInteger;
        else if (choice == 3)
            goto MyFloat;
        else
        {
            printf("숫자를 제대로 입력하시오. \n");
            goto MyEnd;
        }
        //        구구단 코드    
    Gugudan:
        while (1)
        {
            int        dan;
            printf("단을 입력하세요: ");
            scanf("%d", &dan);
            if (dan == 0)
                break;
            for (int num = 1; num <= 9; num++)
                printf("%d * %d = %d\n", dan, num, dan * num);
            printf("\n");
        }
        goto MyEnd;


        //        정수 비트스트림 출력 코드
    MyInteger:
        while (1)
        {
            int        num2;
            printf("정수를 입력하세요: ");
            scanf("%d", &num2);
            if (num2 == 0)
                break;
            for (int i = 32 - 1; i >= 0; i--)
                printf("%d", (num2 >> i) & 1);
            printf("\n");
        }
        goto MyEnd;


        //        실수 비트스트림 출력 코드
    MyFloat:
        while (1)
        {
            float        floatNum;
            printf("실수를 입력하세요: ");
            scanf("%f", &floatNum);
            if (floatNum == 0)
                break;
            int* ptr = (int*)&floatNum;
            for (int i = 32 - 1; i >= 0; i--)
                printf("%d", (*ptr >> i) & 1);
            printf("\n");
        }
        // goto MyEnd;    <== 없어도 됨
    MyEnd:
        ;
    }
    return 0;
}
