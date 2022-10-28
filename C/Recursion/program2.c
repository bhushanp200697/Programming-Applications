// Program to display N times Hello on screen

#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;

    if(i < iNo)
    {
        printf("Hello\n");
        i++;
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