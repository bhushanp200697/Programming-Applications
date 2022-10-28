//Accept number from user and check whether First and last nibble is ON or OFF

#include<stdio.h>
#include<stdbool.h>

bool CheckNibble(int iNo)
{
    int iMask = 0Xf000000f;
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

    bRet = CheckNibble(iValue);
    if(bRet == true)
    {
        printf("First niible and last Nibble is ON");
    }
    else
    {
        printf("First niible and last Nibble is OFF");
    }

    return 0;
}