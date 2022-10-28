//Accept the number from user and display its binary number

#include<stdio.h>

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        printf("%d",iDigit);
        iNo = iNo / 2;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayBinary(iValue);

    return 0;
}