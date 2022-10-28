//Display how many bits are ON

#include<stdio.h>

int CountBits(int iNo)
{
    int iCnt = 0;
    int iMask = 0X00000001;
    int iResult = 0;

    for(int i = 1; i <= 32;i++)
    {
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            iCnt++;
        }
        iMask = iMask << 1;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = CountBits(iValue);
    printf("Number of ON bits are: %d\n",iRet);

    return 0;
}