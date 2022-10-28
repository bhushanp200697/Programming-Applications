//Accept the number from user and toggle the bit 

#include<stdio.h>

int Toggle(int iNo)
{
    int iMask = 0X00000008;
    int iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Toggle(iValue);
    printf("Updated number is: %d",iRet);

    return 0;
}