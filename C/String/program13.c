//Accept the string from user and display the how many number of small letters contain in the string

#include<stdio.h>

int CountSmall(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
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

    iRet = CountSmall(Arr);
    printf("Number of small characters are :%d",iRet);

    return 0;
}
