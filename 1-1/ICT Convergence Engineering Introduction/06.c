#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#pragma    warning (disable: 4146)
int main()
{
    while (1)
    {
        int        choice;
        printf("����(0: ����, 1: ������, 2: ���� ��Ʈ ���, 3: �Ǽ� ��Ʈ ���): ");
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
            printf("���ڸ� ����� �Է��Ͻÿ�. \n");
            goto MyEnd;
        }
        //        ������ �ڵ�    
    Gugudan:
        while (1)
        {
            int        dan;
            printf("���� �Է��ϼ���: ");
            scanf("%d", &dan);
            if (dan == 0)
                break;
            for (int num = 1; num <= 9; num++)
                printf("%d * %d = %d\n", dan, num, dan * num);
            printf("\n");
        }
        goto MyEnd;


        //        ���� ��Ʈ��Ʈ�� ��� �ڵ�
    MyInteger:
        while (1)
        {
            int        num2;
            printf("������ �Է��ϼ���: ");
            scanf("%d", &num2);
            if (num2 == 0)
                break;
            for (int i = 32 - 1; i >= 0; i--)
                printf("%d", (num2 >> i) & 1);
            printf("\n");
        }
        goto MyEnd;


        //        �Ǽ� ��Ʈ��Ʈ�� ��� �ڵ�
    MyFloat:
        while (1)
        {
            float        floatNum;
            printf("�Ǽ��� �Է��ϼ���: ");
            scanf("%f", &floatNum);
            if (floatNum == 0)
                break;
            int* ptr = (int*)&floatNum;
            for (int i = 32 - 1; i >= 0; i--)
                printf("%d", (*ptr >> i) & 1);
            printf("\n");
        }
        // goto MyEnd;    <== ��� ��
    MyEnd:
        ;
    }
    return 0;
}
