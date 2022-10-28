//Accept the number from user and OFF the bit if it is ON

#include<stdio.h>

int OnBit(int iNo)
{
    int iMask = 0X00000048;
    int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);
    printf("Updated number is: %d",iRet);

    return 0;
}