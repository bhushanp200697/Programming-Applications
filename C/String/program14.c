//Accept the string from user and display the how many number of spaces contain in the string

#include<stdio.h>

int CountSpaces(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpaces(Arr);
    printf("Number of spaces are :%d",iRet);

    return 0;
}
