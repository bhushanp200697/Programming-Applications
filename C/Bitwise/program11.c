//Accept the number from user and toggle the specific bit 

#include<stdio.h>

int ToggleBit(int iNo,int iPos)
{
    int iMask = 0X00000001;
    int iResult = 0;

    iMask = iMask << iPos-1;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue = 0;
    int Pos = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter the position\n");
    scanf("%d",&Pos);

    iRet = ToggleBit(iValue,Pos);
    printf("Updated number is: %d",iRet);

    return 0;
}