//Display which bits are ON

#include<stdio.h>

void DisplayBits(int iNo)
{
    int iMask = 0X00000001;
    int iResult = 0;
    
    printf("ON bits are:\n");

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
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayBits(iValue);

    return 0;
}