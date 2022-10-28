//Display the common bits which are ON

#include<stdio.h>

void DisplayBits(int iNo1,int iNo2)
{
    int iNo = 0;
    int iMask = 0X00000001;
    int iResult = 0;

    iNo = iNo1 & iNo2;

    printf("The ON bits are\n");

    for(int i = 1; i <= 32;i++)
    {
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            printf("%d\n",i);
        }
        iMask = iMask << 1;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    DisplayBits(iValue1,iValue2);

    return 0;
}