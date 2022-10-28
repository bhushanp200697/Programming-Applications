//Accept the string from user and display its length

#include<stdio.h>

int StrlenX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
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

    iRet = StrlenX(Arr);
    printf("Length of string is : %d",iRet);

    return 0;
}
