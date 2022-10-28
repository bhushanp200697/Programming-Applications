//Accept the number from user and toggle the bit 

#include<stdio.h>

int ToggleBit(int iNo,int iPos)
{
    if((iPos <=0) || (iPos > 32))
    {
        printf("Invalid position\n");
        return 0;
    }

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