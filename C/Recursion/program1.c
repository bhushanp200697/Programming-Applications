// Program to display N times Hello on screen

#include<stdio.h>

void Display(int iNo)
{
    //static int iCnt = 0;

    if(iNo > 0)
    {
        printf("Hello\n");
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}