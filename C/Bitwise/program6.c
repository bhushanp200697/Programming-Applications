//Accept the number from user and check whether the bit is ON or not

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    int iMask = 0X00002000;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0;
}