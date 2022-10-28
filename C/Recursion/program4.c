//Accept number from user and display that number from 1 to that number

#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}